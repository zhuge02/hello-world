#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

struct Date {
    int year, month, day;

    Date() :year(0), month(0), day(0) {};
    Date(int year, int month, int day) :year(year), month(month), day(day) {};

    bool isLeap() const {
        return isLeapYear(year);
    }

    int operator - (const Date& d) {
        int ans = 0;
        int daysOfMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

        for (int i = d.year; i < year; i++)
            ans += isLeapYear(i) ? 366 : 365;

        for (int i = 1; i < month; i++)
            ans += daysOfMonth[i];

        if (isLeap() && month > 2) ans++;

        ans += day;

        for (int i = 1; i < d.month; i++)
            ans -= daysOfMonth[i];

        if (d.isLeap() && d.month > 2) ans--;

        ans -= d.day;

        return ans;
    }
};

istream& operator>>(istream& is, Date& d) {
    int year, month, day;
    char c1, c2;
    if (is >> year >> c1 >> month >> c2 >> day) {
        if (c1 == '-' && c2 == '-' && year > 0 && month > 0 && month <= 12 && day > 0 && day <= 31) {
            d.year = year;
            d.month = month;
            d.day = day;
            return is;
        }
    }
    throw invalid_argument("Invalid date format. Please enter a date in the format of yyyy-mm-dd.");
}

int main() {
    Date currentDate;
    try {
        cin >> currentDate;
    }
    catch (invalid_argument& e) {
        cerr << e.what() << endl;
        return 1;
    }

    Date originDate(1900, 1, 1);

    vector<string> week = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };

    cout << week[(currentDate - originDate) % 7];

    return 0;
}
