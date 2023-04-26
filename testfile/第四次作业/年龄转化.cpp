#include<iostream>
using namespace std;
int main()
{
	int age;
	cin >> age;
	if (age <= 0)
	{
		cout << "error";
	}
	else if (age <= 10) {
		cout << "Children";
	}
	else if (age <= 20) {
		cout << "Teenagers";
	}
	else if (age <= 40) {
		cout << "Youth";
	}
	else if (age <= 50) {
		cout << "middle-age";
	}
	else if (age <= 80) {
		cout << "Elderly";
	}
	else if (age <= 100) {
		cout << "Old man";
	}
	else {
		cout << "death";
	}
	return 0;
}