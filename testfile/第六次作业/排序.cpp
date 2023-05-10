#include<iostream>
using namespace std;
int sort(int num[], int n) {
	int temp = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0;j < n-i - 1; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j+ 1];
				num[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n-1; i++) {
		cout << num[i] << " ";
	}cout << num[n - 1];
	return 0;
}
int main() {
	int num[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, n);
	return 0;
}