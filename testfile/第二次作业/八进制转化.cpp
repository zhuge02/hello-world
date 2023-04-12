#include <iostream>
#include <vector>

int main() {
    int x;
    std::cin >> x;
    std::vector<int> ans;
    while (x > 0) {
        ans.push_back(x % 8);
        x /= 8;
    }
    ans.resize(5);
    std::reverse(ans.begin(), ans.end());
    for (auto& it : ans) {
        std::cout << it;
    }
    std::cout << std::endl;
    return 0;
}
