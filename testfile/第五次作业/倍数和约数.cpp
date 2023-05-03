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

    cout << "���������� " << num1 << " �� " << num2 << " �����Լ���ǣ�" << greatestCommonDivisor << endl;
    cout << "���������� " << num1 << " �� " << num2 << " ����С�������ǣ�" << leastCommonMultiple << endl;

    return 0;
}
