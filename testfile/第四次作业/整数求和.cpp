#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int a, b, c;
	a = num / 100;
	b = num % 100 / 10;
	c = num % 100 % 10;
	cout << a + b + c << endl;
	return 0;
}