#include <iostream>
using namespace std;

int main() {
    int bjt, utc;
    cin >> bjt;

    int hour = bjt / 100;
    int minute = bjt % 100;

    if (hour < 8) {
        hour += 24;
    }

    hour -= 8;

    if (hour < 10) {
        if (hour == 0) {
            cout << minute;
        }
        else {
            if (minute < 10) {
                cout << hour << "0" << minute;
            }
            else {
                cout << hour << minute;
            }
        }
    }
    else {
        if (minute < 10) {
            cout << hour << "0" << minute;
        }
        else {
            cout << hour << minute;
        }
    }

    return 0;
}
