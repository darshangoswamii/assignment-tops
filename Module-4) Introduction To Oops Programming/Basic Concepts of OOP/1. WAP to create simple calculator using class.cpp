//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
	public :
	int num1,num2,ans;
	char op;
	
	void get()
	{
		cout<<"Enter the frist number :"<<num1;
		cin>>num1;
		cout<<"Enter the secend number :"<<num2;
		cin>>num2;
		cout<<"Enter the opretaor"<<op;
		cin>>op;
		
		
	
	switch(op)
	{
		case '+':
			ans = num1+num2;
			cout<<"ans"<<num1<<"+"<<num2<<"="<<ans<<endl;
			break;
		case '-':
			ans = num1-num2;
			cout<<"ans"<<num1<<"-"<<num2<<"="<<ans<<endl;
			break;
		case '*':
			ans = num1*num2;
			cout<<"ans"<<num1<<"*"<<num2<<"="<<ans<<endl;
			break;
		case '/':
			ans = num1/num2;
			cout<<"ans"<<num1<<"/"<<num2<<"="<<ans<<endl;
			break;
		default:
      		printf("Error! operator is not correct");
      		
      		
			
		}
	}
};
int main()
{
	calculator cal;
	cal.get();
	return 0;
}


