#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[101];
    cin >> s;
    int x;
    int count[26] = { 0 };
    for (int i = 0; i < strlen(s); i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        for (int j = i; j < 25; j++) {
            if (count[j] < count[j + 1]) {
                x = count[j];
                count[j] = count[j + 1];
                count[j + 1] = x;
            }
        }
    }
    int maxWeight = 0;
    for (int i = 25; i >= 0; i--) {
        maxWeight += (i + 1) * count[25 - i];
    }
    cout << maxWeight << endl;
    return 0;
}