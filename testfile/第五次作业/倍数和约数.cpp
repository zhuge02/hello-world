#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int greatestCommonDivisor = gcd(num1, num2);
    int leastCommonMultiple = lcm(num1, num2);

    cout << "给定两个数 " << num1 << " 和 " << num2 << " 的最大公约数是：" << greatestCommonDivisor << endl;
    cout << "给定两个数 " << num1 << " 和 " << num2 << " 的最小公倍数是：" << leastCommonMultiple << endl;

    return 0;
}
