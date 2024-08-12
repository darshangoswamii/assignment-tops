//5. Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter
#include<iostream>
using namespace std;
class Ractangle{
	private :
		int length;
		int width;
	public :
		Ractangle(int l,int w) : length(l),width(w) {}
		
		double getarea() const
		{
			return length*width;
		}
		
		double getper() const
		{
			return (length+width)*2;
		}
};
int main()
{
	int num1,num2;
	cout<<"\nEnter the length for Rectangle :";
	cin>>num1;
	cout<<"\nEnter the width for Rectangle :";
	cin>>num2;
	Ractangle r1(num1 ,num2);
	
	cout<<"\nArae of Ractangle :"<<r1.getarea();
	cout<<"\nperimeter of Ractangle  :"<<r1.getper();
	
	
	
	return 0;
}
