/* c++ program of single inheritance.*/

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

int main()
{
	b b2;
	
	getch();
}
