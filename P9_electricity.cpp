/*An electricity board charges the following rates to users 
– For first 100 units : 40p per unit
– For next 200 units : 50p per unit 
– Beyond 300 units : 60p per unit 
All users are charged a minimum of Rs.150. 
If the total cost is more than Rs.250.00 then an additional charges of 15% are added. 
Write a C++ program using class to read the name of users & number of
units consumed & print out the charges with names.(Use Array of Objects)*/


#include<iostream>
#include<conio.h>

using namespace std;
class electricity
{
	public:
		float units;
		char name[100];
		float bill;
		int charge;
		
	public:
		int customer_details()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"Usable Units=";
			cin>>units;
		}
		
		int caculate_bill()
		{
				if(units<=100)/*For first 100 units : 40p per unit*/
				{
					bill=100*0.40;
				}
				else if(units<=200)/*For next 200 units : 50p per unit*/ 
				{
					bill=40+(units-100)*0.50;
				}	
				else /*Beyond 300 units : 60p per unit*/
				{
					bill=90+(units-200)*0.60;
				}
				
				if(bill<150)/*All users are charged a minimum of Rs.150. */
				{
					bill=150;
				}
				
				if(bill>250)/*If the total cost is more than Rs.250.00 then an additional charges of 15% are added.*/
				{
					charge=bill*15/100;
					bill=bill+charge;
				}
				
		}
		
		int dis()
		{
			cout<<"User Name="<<name<<"\n";
			cout<<"Unit="<<units<<"\n";
			cout<<"Bill="<<bill<<"\n";
		}
};

int main()
{
	int i,n;
	electricity e1[10];
	
	cout<<"n=";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		e1[i].customer_details();
		e1[i].caculate_bill();
	}
	
	for(i=1;i<=n;i++)
	{
		e1[i].dis();
	}
	
	getch();
}
