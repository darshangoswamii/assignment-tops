//7. Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid
#include<iostream>
using namespace std;
class data{
	
	private :
		int day ;
		int month ;
		int year;
	public :
		void data1(int day,int month,int year)
		{
			this->day=day;
			this->month=month;
			this->year=year;
		}
		
		int getday()  
		{
			return day;
		}
		int getmonth()  
		{
			return month;
		}
		int getyear()  
		{
			return year;
		}
		
		int vailddata() 
		{
			if(day>1 || day <31)
			return day;
			
			if (month >1 || month<12)
			return month;
			
			if ((month == 4 || month == 6 || month == 9 || month == 11) && day <30)
       		return false;

     		if (month == 2) 
			{
				if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
				
         		if (day >29)
            	return false;
        	} 
			else 
			{
        		if (day < 28)
            	return false;
			}
		}
		
		
		
		
		
};
int main()
{
	data d1;
	int day,month,year;
	cout<<"Enter the day:";
	cin>>day;
	cout<<"Enter the month:";
	cin>>month;
	cout<<"Enter the year:";
	cin>>year;
	
	d1.data1(day,month,year);
	
	cout<< "Date :"<<d1.getday()<<"/"<<d1.getmonth()<<"/"<<d1.getyear()<<endl;
	
	if(d1.vailddata())
	{
		cout << "The date is valid" <<endl;
	}
	else
	{
		cout<<" The date is invalid" <<endl;
	}
	
	return 0;
}
