/* cricket player object.(Use arrayof objects) 
The program should accept the details from user (max 10): 
Player code, name,runs, innings- played and number of times not out.
 The program should contain followingmenu: 
 -Enter details of players. 
 -Display average runs of a single player. 
 -Display averageruns of all players.
 (Use function overloading).  */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

int n,b=0,c,ave[11];
using namespace std;
class Circketdetails
{
	public:
		int pcode;
		char name[100];
		int runs;
		int innings;
		int outnot;
		int i;
		
	public:
	 	int details()
		{
			cout<<"Player Code=";
			cin>>pcode;	
			cout<<"Player Name=";
			cin>>name;
			cout<<"Runs=";
			cin>>runs;
			cout<<"Innings=";
			cin>>innings;
			cout<<"Number of times not out=";
			cin>>outnot;
			
			return runs/innings;
		}
};


int main()
{
	int ch,i;
	Circketdetails c1[11];
	
	if(b==0)
	{
		cout<<"N=";
		cin>>n;
		
		for(i=1;i<=n;i++)
		{
			cout<<"Enter the Player Details\n";
			ave[i]=c1[i].details();
		}
		b++;
	}
	
	cout<<"1.Display average runs of a single player"<<"\n";
	cout<<"2.Display average runs of all players"<<"\n";
	cout<<"3.Exit\n";
	cout<<"Choose=\n";
	cin>>ch;
	
	system("cls");
	switch(ch)
	{			
		case 1:	
			cout<<"Enter the Player Code=";
			cin>>c;
			cout<<"Average Runs="<<ave[c]<<"\n";
			main();
		
		case 2:
			for(i=1;i<=n;i++)
			{
				cout<<"Player Code="<<i<<"\n";
				cout<<"Average Runs="<<ave[i]<<"\n";
			}
			main();
			
		case 3:
			exit(0);
			
		default:
			cout<<"Invalid choose\n";
	}
	getch();
}
