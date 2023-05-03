#include <iostream>
#include <vector>
#include <sstream>

const int MAX_DEGREE = 100; 

class Polynomial {
public:
    Polynomial(const std::vector<std::pair<int, int>>& poly1, const std::vector<std::pair<int, int>>& poly2)
        : polynomial1(poly1), polynomial2(poly2) {}

    std::vector<std::pair<int, int>> add() {
        std::vector<int> resultCoefficients(MAX_DEGREE + 1, 0); 
        for (const auto& term : polynomial1) {
            resultCoefficients[term.first] += term.second;
        }
        for (const auto& term : polynomial2) {
            resultCoefficients[term.first] += term.second;
        }

        std::vector<std::pair<int, int>> result;
        for (int i = MAX_DEGREE; i >= 0; --i) {
            if (resultCoefficients[i] != 0) {
                result.emplace_back(i, resultCoefficients[i]);
            }
        }

        return result;
    }

    void printAnswer() {
        std::vector<std::pair<int, int>> result = add();
        std::stringstream ss;

        for (const auto& term : result) {
            if (term.second > 0 && !ss.str().empty()) {
                ss << '+';
            }
            if (term.first == 0)
                ss << term.second;
            else
                ss << term.second << "x" << term.first;
        }

        std::cout << ss.str() << std::endl;
    }

private:
    std::vector<std::pair<int, int>> polynomial1;
    std::vector<std::pair<int, int>> polynomial2;
};

int main() {
    std::vector<std::pair<int, int>> poly1, poly2;
    int exponent, coefficient;
    while (std::cin >> exponent >> coefficient && exponent != -1) {
        poly1.emplace_back(exponent, coefficient);
        if (exponent == 0)
            break;
    }

    while (std::cin >> exponent >> coefficient && exponent != -1) {
        poly2.emplace_back(exponent, coefficient);
        if (exponent == 0)
            break;
    }

    Polynomial poly(poly1, poly2);
    poly.printAnswer();

    return 0;
}
