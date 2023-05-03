#include <iostream>
using namespace std;

int even(int n) {
    if (n % 2 == 0) {
        return 1; // n is even
    }
    else {
        return 0; // n is odd
    }
}

int main() {
    int num, sum = 0;
    cin >> num;
    while (num > 0) {
        if (even(num) == 0) {
            sum += num;
        }
        cin >> num;
    }
    cout << "输入整数中的奇数和为：" << sum << endl;
    return 0;
}
