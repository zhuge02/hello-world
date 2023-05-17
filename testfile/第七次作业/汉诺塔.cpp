#include <iostream>
using namespace std;

void Hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "Move disk 1 from " << A << " to " << C << endl;
    }
    else {
        Hanoi(n - 1, A, C, B);
        cout << "Move disk " << n << " from " << A << " to " << C << endl;
        Hanoi(n - 1, B, A, C);
    }
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    Hanoi(n, 'A', 'B', 'C');
    return 0;
}
