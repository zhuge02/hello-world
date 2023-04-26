#include<iostream>
using namespace std;
int main()
{
	int mark;
	cin >> mark;
	if (mark > 100 || mark < 0) {
		cout << "error";
	}
	else if (mark >= 90) {
		cout << "A";
	}
	else if (mark >= 80) {
		cout << "B";
	}
	else if (mark >= 70) {
		cout << "C";
	}
	else if (mark >= 60) {
		cout << "D";
	}
	else {
		cout << "E";
	}
	return 0;
}