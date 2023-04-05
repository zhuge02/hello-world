#include <iostream>
#include <vector>

using namespace std;

vector<int> find_repeated(int arr[], int n) {
    vector<int> freq(n + 1, 0); 
    vector<int> repeated; 
    for (int i = 0; i < n; ++i) {
        ++freq[arr[i]]; 
        if (freq[arr[i]] == 2) { 
            repeated.push_back(arr[i]);
        }
    }

    return repeated;
}

int main() {
    int n;
    cin >> n;
    int arr[999];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> repeated = find_repeated(arr, n); 

    if (repeated.empty()) {
        cout << "none" << endl; 
    }
    else {
        for (int num : repeated) { 
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}