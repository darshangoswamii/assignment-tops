//12.Write a program to swap the two numbers using friend function
//without using third variable
#include<iostream>
using namespace std;
class swap{
	private :
		int a,b;
	public :
		swap(int a,int b)
		{
			this->a=a;
			this->b=b;	
		}
		
};

void swap(swap& s1)
{
	cout << "\nBefore Swapping: " << s1.a << " " << s1.b;
	s1.temp = s1.a;
	s1.a = s1.b;
	s1.b = s1.temp;
	cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}
int main()
{
	Swap s(4, 6);
	swap(s);
	return 0;
}

