#include<iostream>
using namespace std;
int IsCancel(int n, int k) {
	int num = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp <= 0) {
			num++;
		}
	}
	if (num < k) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int n, k;
	cin >> n >> k;
	if (IsCancel(n, k)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}