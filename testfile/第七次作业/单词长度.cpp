#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line, '.'); 

    string word;
    bool firstWord = true;

    for (int i = 0; i < line.length(); i++) {
        char c = line[i];

        if (c == ' ') {
            if (!word.empty()) {
                if (!firstWord) {
                    cout << " "; 
                }
                cout << word.length();
                word.clear();
                firstWord = false;
            }
        }
        else {
            word += c;
        }
    }
    cout << " " << word.length() << endl;
    return 0;
}
