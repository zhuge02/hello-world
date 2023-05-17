#include <iostream>
#include <string>
#include <bitset>

using namespace std;

uint32_t binaryStringToUint(const string& binaryString) {
    uint32_t result = 0;
    int shift = 0;

    for (int i = 0; i < binaryString.length(); i++) {
        if (binaryString[i] == '1') {
            result |= (1 << shift);
        }
        ++shift;
    }

    return result;
}

int main() {
    string binaryString;
    cout << "Enter the binary string: ";
    cin >> binaryString;

    uint32_t result = binaryStringToUint(binaryString);
    cout << bitset<32>(result).to_string() << endl;

    return 0;
}
