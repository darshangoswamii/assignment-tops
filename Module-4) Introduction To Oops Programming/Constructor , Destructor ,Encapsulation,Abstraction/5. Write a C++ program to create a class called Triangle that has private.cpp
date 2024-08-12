//5. Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene
#include<iostream>
using namespace std;
class triangle{
	private :
		double s1;
		double s2;
		double s3;
		
	public :
		void setdata(double s1,double s2,double s3)
		{
			this->s1=s1;
			this->s2=s2;
			this->s3=s3;
		}
		
		void findtri()
		{
			if(s1==s2 && s2==s3)
			{
				cout<<"Equilateral triangle"<<endl;
			}
			else if (s1==s2 || s1 ==s3 || s2==s3) 
			{
        		cout << "Isosceles triangle" << endl;
    		} 
			else 
			{
        		cout << "Scalene triangle" << endl;
    		}

		}
};
int main()
{
	triangle t1;
	double s1,s2,s3;
	cout<<"Enter the side1 :";
	cin>>s1;
	cout<<"Enter the side2 :";
	cin>>s2;
	cout<<"Enter the side3 :";
	cin>>s3;
	
	t1.setdata(s1,s2,s3);
	t1.findtri();
	
	return 0;
}
