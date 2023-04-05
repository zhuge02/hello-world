#include <iostream>
#include <cstring>
using namespace std;
bool isValidEmail(string email) {
    int n = email.size();
    int atIndex = -1, dotIndex = -1;
    bool valid = true;
    for (int i = 0; i < n; i++) {
        char c = email[i];
        if (c == '@') {
            if (atIndex >= 0) {
                valid = false;
                break;
            }
            else {
                atIndex = i;
            }
        }
        else if (c == '.') {
            if (dotIndex >= 0) {
                valid = false;
                break;
            }
            else {
                dotIndex = i;
            }
        }
        else if (!isalnum(c) && c != '_' && c != '-') {
            valid = false;
            break;
        }
    }
    if (valid && atIndex > 0 && dotIndex > atIndex + 1 && dotIndex < n - 1) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    string email;
    cin >> email;
    if (isValidEmail(email)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}
