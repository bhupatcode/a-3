#include<iostream>
#include<conio.h>

class Worker
{
	public:
		int code;
		char name[100];
		float salary;	
	public:	
		int getdata()
		{
			std::cout<<"Code=";
			std::cin>>code;
			
			std::cout<<"name=";
			std::cin>>name;
			
			std::cout<<"Salary=";
			std::cin>>salary;
			
			return salary;
		}
};


class Officer
{
	public:
		float HRA,DA;
	public:	
		int count(float a)
		{
			DA=a*8/100;
			HRA=a*10/100;
		}
};


class Manager:public Worker,public Officer
{
	public:
		float TA;
	public:	
		int tacout(float a)
		{
			TA=a*10/100;
			salary=salary-DA-HRA-TA;
		}
		
		void dis()
		{
			std::cout<<"_______________________\n";
			std::cout<<"Code="<<code<<"\n";
			std::cout<<"Name="<<name<<"\n";
			std::cout<<"DA="<<DA<<"\n";
			std::cout<<"HRA="<<HRA<<"\n";
			std::cout<<"TA="<<TA<<"\n";			
			std::cout<<"Salary="<<salary<<"\n";
		}
};


int main()
{
	Manager m1;
	float s;
	
	s=m1.getdata();
	m1.count(s);
	m1.tacout(s);
	m1.dis();
	
}
