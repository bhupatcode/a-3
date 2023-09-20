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

class d:public b
{
	public:
		
};

class e:public b
{
	public:	
};

class f:public c
{
	public:	
};

class g:public c
{
	public:
};



int main()
{
	d d1;
	e e1;
	f f1;
	g g1;
	
	getch();
}
