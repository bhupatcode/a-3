/*worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross sal) is derived from both base classes. Write
necessary member function.*/

/* c++ program of single inheritance.*/

#include<iostream>
#include<conio.h>

using namespace std;
class worker
{
	public:
		int code;
		char name[100];
		float salary;
		
	public:
		int details()
		{
			cout<<"Code=";
			cin>>code;
			cout<<"Name=";
			cin>>name;
			cout<<"Salary=";
			cin>>salary;
			
			return salary;
		}
};

class officer
{	
	public:
		float DA,HRA;
	public:
		int count(float s)
		{
			DA=s*8/100;
			HRA=s*10/100;
		}	
};

class manger:public worker,public officer
{
	public:
		float TA;
	public:
		int mix()
		{
			TA=salary*10/100;
			salary=salary-(DA+HRA+TA);	
		}	
		int dis()
		{
			cout<<"Code="<<code<<"\n";
			cout<<"Name="<<name<<"\n";
			cout<<"DA="<<DA<<"\n";
			cout<<"HRA="<<HRA<<"\n";
			cout<<"TA="<<TA<<"\n";
			cout<<"Salary="<<salary<<"\n";
		}
};

int main()
{
	float a;
	manger m1;
	
	a=m1.details();
	m1.count(a);
	m1.mix();
	m1.dis();	
	getch();
}
