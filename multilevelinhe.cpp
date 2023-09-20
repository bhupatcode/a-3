/* c++ program of Multilevle inheritance.*/

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

class c:public b
{
	public:
		c()
		{
			cout<<"C";	
		}	
};

int main()
{
	c c1;
	
	getch();
}
