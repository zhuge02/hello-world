#include <iostream>
using namespace std;

double power(double x, int n) {
    double result = 1.0;
    if (x == 0)
    {
        if (n <= 0)
        {
            return nan("");
        }
        else {
            return 0;
        }
    }
    else {
        if (n < 0) {
            x = 1.0 / x;
            n = -n;
        }

        while (n > 0) {
            if (n % 2 == 1) {
                result *= x;
            }
            x *= x;
            n /= 2;
        }

        return result;
    }
    
}

int main() {
    double x;
    int n;
    cin >> x;
    cin >> n;
    double result = power(x, n);
    std::cout << result <<endl;
    return 0;
}
