#include <iostream>
#include <string>
using namespace std;

int find(const string& s, const string& sub, int start = 0) {
    for (int i = start; i <= s.length() - sub.length(); i++) {
        bool found = true;
        for (int j = 0; j < sub.length(); j++) {
            if (s[i + j] != sub[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int pos = 0;
    while ((pos = find(s2, s1, pos)) != -1) {
        cout << pos << " ";
        pos += s1.length();
    }

    if (pos == 0) {
        cout << -1;
    }

    return 0;
}
