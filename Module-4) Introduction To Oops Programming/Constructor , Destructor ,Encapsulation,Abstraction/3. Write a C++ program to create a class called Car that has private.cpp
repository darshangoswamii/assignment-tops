//3. Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.

#include<iostream>
using namespace std;
class car 
{
	private :
	string company ;
	string model ;
	int year;
	
	public :
	car(const string &com,const string &mod , const int ye): company(comp), model(mdl), year(yr) {}
	
	void setcompany(const string &com)
	{
		company = com;
	}
	void setmodel(const string &mod)
	{
		model = mod
	}
	void setyaer(const int &ye)
	{
		year = ye;
	}
	
	string getcompany()
	{
		return company;
	}
	
	string getmodel()
	{
		return model;
	}
	int year()
	{
		return yaer;
	}
	
	
	
	
};
int main()
{
	car c1("AUDI","A1",2023);
	cout<<"Company: "<<c1.getcompany()<<endl;
	cout<<"Model: "<<c1.getmodel()<<endl;
	cout<<"Yaer: "<<c1.year()<<endl;
	
	return 0;
}
