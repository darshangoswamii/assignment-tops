//4. Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:

    Circle(double rad) : radius(rad) {}

    double getarea() const 
	{
        return 3.14 * radius * radius;
    }
    double getcum() const 
	{
        return 2 * 3.14 * radius;
    }
};

int main() {
    double num;

    cout << "Enter the radius: ";
    cin >> num;
    Circle c1(num);

    cout << "Area of the circle : " << c1.getarea() << endl;
    cout << "Circumference of the circle : " << c1.getcum() << endl;

    return 0;
}

