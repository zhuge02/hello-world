#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    double avg() {
        double sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += score[i];
        }
        return sum / 6;
    }

    double var() {
        double average = avg();
        double sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += std::pow((score[i] - average), 2);
        }
        return sum / 6;
    }

    friend std::istream& operator>>(std::istream& is, Solution& s) {
        s.score.resize(6);
        for (int i = 0; i < 6; i++) {
            is >> s.score[i];
        }
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, Solution& s) {
        os << s.avg() << ' ' << s.var() << std::endl;
        return os;
    }

private:
    std::vector<int> score;
};

int main() {
    int n;
    std::cin >> n;
    while (n--) {
        Solution tmp;
        std::cin >> tmp;
        std::cout << tmp;
    }
    system("pause");
    return 0;
}