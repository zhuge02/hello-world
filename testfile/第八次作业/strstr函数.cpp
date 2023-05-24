#include <iostream>
#include <cstring>
using namespace std;
int mystrstr(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    for (int i = 0; i <= len_a - len_b; i++) {
        int j;
        for (j = 0; j < len_b; j++) {
            if (a[i + j] != b[j]) {
                break;
            }
        }

        if (j == len_b) {
            return i;
        }
    }
    return -1;
}
int main() {
    char a[501];
    char b[501];

    cin.getline(a, 501);
    cin.getline(b, 501);

    int answer = mystrstr(a, b);

    cout << answer << endl;

    return 0;
}
