#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int n;
    cin >> n;
    vector<int> numerators(n);
    vector<int> denominators(n);
    for (int i = 0; i < n; i++) {
        char slash;
        cin >> numerators[i] >> slash >> denominators[i];
        if (denominators[i] == 0) {
            cout << "error" << endl;
            return 0;
        }
    }

    int common_denominator = denominators[0];
    for (int i = 1; i < n; i++) {
        common_denominator = lcm(common_denominator, denominators[i]);
    }

    int sum_numerator = 0;
    for (int i = 0; i < n; i++) {
        sum_numerator += numerators[i] * (common_denominator / denominators[i]);
    }

    int g = gcd(abs(sum_numerator), common_denominator);
    sum_numerator /= g;
    common_denominator /= g;

    if (common_denominator == 1) {
        cout << sum_numerator << endl;
    }
    else {
        cout << sum_numerator << '/' << common_denominator << endl;
    }

    return 0;
}