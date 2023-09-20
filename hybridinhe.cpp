/* c++ program of Hirarchical inheritance.*/

#include<iostream>
#include<conio.h>

using namespace std;
class a
{
	public:
			a()
			{
				cout<<"A";
			}
};

class b:public a
{
	public:
		b()
		{
			cout<<"B";	
		}	
};

class c:public a
{
	public:
		c()
		{
			cout<<"C";	
		}	
};

class d:public b,public c
{
	public:
		d()
		{
			cout<<"D";	
		}
};



int main()
{
	d d1;
	
	getch();
}
