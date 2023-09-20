/* Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/

#include<iostream>
#include<conio.h>

using namespace std;
class Student
{
	public:
		int id;
		char name[100];
	public:
		int stu()
		{
			cout<<"Id=";
			cin>>id;
			cout<<"Name=";
			cin>>name;
		}
};

class StudentExam:public Student
{
	public:
		int c,d,s,o,p,b;
	public:
		int exam()
		{
			cout<<"C++=";
			cin>>c;	
			cout<<"DFS=";
			cin>>d;
			cout<<"SAD=";
			cin>>s;
			cout<<"OS=";
			cin>>o;
			cout<<"PD=";
			cin>>p;
			cout<<"BC=";
			cin>>b;
		}	
};

class StudentResult:public StudentExam
{
	public: 
	 float per;
	public:
		int result()
		{
			per=(c+d+s+o+p+b)/6;
		}
		
		int dis()
		{
			cout<<"Student Name="<<name<<"\n";
			cout<<"Studnet Id="<<id<<"\n";
			cout<<"C++="<<c<<"\n";
			cout<<"DFS="<<d<<"\n";
			cout<<"SAD="<<s<<"\n";
			cout<<"OS="<<o<<"\n";
			cout<<"PD="<<p<<"\n";
			cout<<"BC="<<b<<"\n";
			cout<<"Percentage="<<per<<"\n";
		}
};

int main()
{
	int n,i;
	StudentResult s1;
	
	cout<<"N=";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		s1.stu();
		s1.exam();
		s1.result();
		s1.dis();
	}
	
	getch();
}
