//6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class person
{
	private :
		string name;
		int age;
		string country;
		
	public :
		void setname(const string &n)
		{
			name = n;
		}
		void setage(const int &a)
		{
			age=a;
		}
		void setcon(const string &c)
		{
			country = c;
		}
		
		string getname()
		{
			return name;
		}
		int getage()
		{
			return age;
		}
		string getcountry()
		{
			return country;
		}
};
int main()
{
	person p1;
	p1.setname("magan bhai");
	p1.setage(65);
	p1.setcon("india");
	cout<<"name :"<<p1.getname()<<endl;
	cout<<"age :"<<p1.getage()<<endl;
	cout<<"country :"<<p1.getcountry()<<endl;
	
	return 0;
}

