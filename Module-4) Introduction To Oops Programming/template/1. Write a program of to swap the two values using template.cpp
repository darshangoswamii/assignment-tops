//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename T>
void swapvalue(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	double a ,b;
	
	cout<<"Enter the 'A' value :";
	cin>>a;
	cout<<"Enter the 'B' value :";
	cin>>b;
	
	cout<<"\nValues of a before swapping ="<<a;
	cout<<"\nValues of b before swapping ="<<b;
	swapvalue(a,b);
	
	cout<<"\nValues of a after swapping ="<<a;
	cout<<"\nValues of b after swapping ="<<b;
	
	
	return 0;
}
