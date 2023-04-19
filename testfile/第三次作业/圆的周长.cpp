#include <iostream>

using namespace std;

class Circle
{
public:
    Circle(double r)
    {
        radius = r;
    }
    double getArea()
    {
        return PI * radius * radius;
    }
    double getPerimeter()
    {
        return 2 * PI * radius;
    }
    static double PI;
    double getdiameter()
    {
        return 2 * radius;
    }
    void showInfo()
    {
        cout << "ֱ��=" << getdiameter() << endl;
        cout << "�ܳ�=" << getPerimeter() << endl;
        cout << "���=" << getArea() << endl;
    }

private:
    double radius;
};

double Circle::PI = 3.14;

int main()
{
    int r;
    cin >> r;
    Circle c(r);
    c.showInfo();
    system("pause");
    return 0;
}
