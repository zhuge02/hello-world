#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    string processed;
    for (int i = 0; i < input.length(); i++) {
        processed += toupper(input[i]);
    }
    for (int i = 0; i < processed.length(); i++) {
        if (processed[i] != '-') {
            processed.erase(i, 1);
            i--;
        }
    }
    int n;
    cin >> n;
    string output;
    int i = 0;
    for (; i < processed.length() % n; i++) {
        output += processed[i];
    }
    for (int j = 0; j < processed.length() / n; j++) {
        output += '-';
        output += processed.substr(i + j * n, n);
    }
    cout << output;
    return 0;
}
