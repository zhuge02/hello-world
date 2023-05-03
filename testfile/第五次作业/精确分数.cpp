#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> calculateFraction(int numerator, int denominator, int maxDigits) {
    vector<int> result;
    int remainder = numerator;

    for (int i = 0; i < maxDigits; ++i) {
        remainder *= 10;
        result.push_back(remainder / denominator);
        remainder %= denominator;

        if (remainder == 0) {
            break;
        }
    }

    return result;
}

void printAnswer(int numerator, int denominator) {
    vector<int> fraction = calculateFraction(numerator, denominator, 200);
    cout << "0.";

    for (const auto& digit : fraction) {
        cout << digit;
    }

    cout << endl;
}

int main() {
    int numerator, denominator;
    char delimiter;
    cin >> numerator >> delimiter >> denominator;

    printAnswer(numerator, denominator);

    return 0;
}

