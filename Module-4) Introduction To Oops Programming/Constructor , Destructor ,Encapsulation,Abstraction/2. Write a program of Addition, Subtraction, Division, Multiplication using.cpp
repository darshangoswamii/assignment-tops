//2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.
#include <iostream>
using namespace std;

class Calculator {
	private:
   		double a, b;

	public:
   		Calculator(double num1, double num2) : a(num1), b(num2) {}
    	double add() 
		{
        	return a + b;
    	}

    	double subtract() 
		{
        	return a - b;
    	}
    	
    	double multiply() 
		{
        	return a * b;
   		}

    	double divide()
			{
           		return a / b;
        	}
};

int main() {
    double num1, num2;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    Calculator calc(num1, num2);

    cout<<"Addition:"<<calc.add()<<endl;
    cout<<"Subtraction:"<<calc.subtract()<<endl;
    cout<<"Multiplication:"<<calc.multiply()<<endl;
    cout<<"Division: "<<calc.divide()<<endl;

    return 0;
}

