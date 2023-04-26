#include<iostream>
using namespace std;
int main()
{
	int select;
	cin >> select;
	switch (select) {
	case 1:
		cout << "Spring";
		break;
	case 2:
		cout << "Summer";
		break;
	case 3:
		cout << "Fall";
		break;
	case 4:
		cout << "Winter";
		break;
	default:
		cout << "Error";
		break;
	}
	return 0;
}