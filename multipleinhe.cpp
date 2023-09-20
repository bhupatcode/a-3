/* c++ program of Multiple inheritance.*/

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

class b
{
	public:
		b()
		{
			cout<<"B";	
		}	
};

class c:public a,public b
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
