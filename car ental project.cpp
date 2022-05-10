#include<iostream>
#include<string.h>
#include<time.h>
#include<windows.h>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void menu();
void pwd();
void note();
void thank();
void gotoxy(short x=0, short y=0)
{
	COORD pos{x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
class rental
{
	public:
		string name;
		long long mno;
		int age;
		char dlno[20];
		rental()
		{
			name="NULL";
			mno=0;
			age=0;
		}
};
class booking:public rental
{
	public:
		int tov,b,t,d,total,pr;
		string cname,seater;
		void get()
		{   system("color 4F");
		    gotoxy(70,5);
			cout<<"Enter your name";
			fflush(stdin);
			gotoxy(70,7);
			cin>>name;
			gotoxy(70,9);
			cout<<"Enter your mobile number";
			fflush(stdin);
			gotoxy(70,11);
			cin>>mno;
			gotoxy(70,13);
			cout<<"Enter your dl number";
			fflush(stdin);
			gotoxy(70,15);
			cin>>dlno;
			gotoxy(70,17);
			cout<<"Enter your age";
			fflush(stdin);
			gotoxy(70,19);
			cin>>age;
			gotoxy(70,21);
			cout<<"Enter total distance to travel(min distance = 250km)";
			fflush(stdin);
			gotoxy(70,23);
			cin>>d;
			gotoxy(70,25);
			cout<<"Enter total time for rental";
			fflush(stdin);
			gotoxy(70,27);
			cin>>t;
			
		}
		void selection()
		{
			system("color 4F");
			gotoxy(70,10);
	       cout<<"Select your type of vehicle";
	       gotoxy(70,11);
		   cout<<"1=>> 7 SEATER";
		   gotoxy(70,13);
		   cout<<"2=>> 4 SEATER";
		   gotoxy(70,14);
		   cin>>tov;
		   sleep(1);
		   system("cls");
		   if(tov==1)
		   {
		   	  gotoxy(70,10);
		      cout<<"Selcet your brand ";
		      gotoxy(70,12);
		      cout<<"Sno  BRAND      PRICE";
		      gotoxy(70,14);
			  cout<<"1=>> HYUNDAI    $25/km";
			  gotoxy(70,16);
			  cout<<"2=>> TOYOTA     $30/km";
			  gotoxy(70,18);
			  cout<<"3=>> FORD       $30/km";
			  gotoxy(70,20);
			  cout<<"4=>> MERCEDES   $35/km";	
			  gotoxy(70,21);
			  cin>>b;
			  seater="7 SEATER";
			  if(b==1)
			  {
			  	cname="HYUNDAI";
			  	pr=25;
			  	if(t>16)
			  	{
			  		total=(d*25)+250;
				}
				else if(t<=16)
				{
					
					total=(d*25);
				}
			  }
			  else if(b==2)
			  {
			  	cname="TOYOTA";
			  	pr=30;
			  	if(t>16)
			  	{
			  		total=(d*30)+250;
				}
				else if(t<=16)
				{
					total=(d*30);
				}
			  }
			 else if(b==3)
			  {
			  	cname="FORD";
			  	pr=30;
			  	if(t>16)
			  	{
			  		total=(d*30)+250;
				}
				else if(t<=16)
				{
					total=(d*30);
				}
			  }
			   else if(b==4)
			  {
			  	cname="MERCEDES";
			  	pr=35;
			  	if(t>16)
			  	{
			  		total=(d*35)+250;
				}
				else if(t<=16)
				{
					total=(d*35);
				}
			  }
		   	
		   }
		   else if(tov==2)
		   {
		   	
		   	  gotoxy(70,10);
		      cout<<"Selcet your brand ";
		      gotoxy(70,12);
		      cout<<"Sno  BRAND      PRICE";
		      gotoxy(70,14);
			  cout<<"1=>> HYUNDAI    $10/km";
			  gotoxy(70,16);
			  cout<<"2=>> TOYOTA     $20/km";
			  gotoxy(70,18);
			  cout<<"3=>> FORD       $10/km";
			  gotoxy(70,20);
			  cout<<"4=>> MARUTI     $5/km";	
			  gotoxy(70,21);
			  cin>>b;
			  seater="4 SEATER";
			   if(b==1)
			  {
			  	cname="HYUNDAI";
			  	pr=10;
			  	if(t>16)
			  	{
			  		total=(d*10)+250;
				}
				else if(t<=16)
				{
					total=(d*10);
				}
			  }
			  else if(b==2)
			  {
			  	cname="TOYOTA";
			  	pr=20;
			  	if(t>16)
			  	{
			  		total=(d*20)+250;
				}
				else if(t<=16)
				{
					total=(d*20);
				}
			  }
			 else if(b==3)
			  {
			  	cname="FORD";
			  	pr=10;
			  	if(t>16)
			  	{
			  		total=(d*10)+250;
				}
				else if(t<=16)
				{
					total=(d*10);
				}
			  }
			   else if(b==4)
			  {
			  	cname="MARUTI";
			  	pr=5;
			  	if(t>16)
			  	{
			  		total=(d*5)+250;
				}
				else if(t<=16)
				{
					total=(d*5);
				}
			  }
		   	
		   }
		}
};
class dis:public booking
{
	public:
		void disply()
		{
			int i,j;
			gotoxy(78,7);
			cout<<"-------BILL-------";
		  	gotoxy(70,9);
		for(i=0;i<41;i++)
		{
			cout<<"-";
		}
		  for(i=10;i<=34;i++)
		  {
	
		  	for(j=1;j<=10;j++)
		  	{
		  		gotoxy(69,i);
		  		cout<<"|";
			  }
		  }
		   for(i=10;i<=34;i++)
		  {
	
		  	for(j=1;j<=10;j++)
		  	{
		  		gotoxy(111,i);
		  		cout<<"|";
			  }
		  }
		  gotoxy(71,35);
		for(i=1;i<=40;i++)
		{
			cout<<"-";
		}
		gotoxy(71,12);
		cout<<"NAME          => "<<name;
		gotoxy(71,14);
		cout<<"MOBILE NUMBER => "<<mno;
		gotoxy(71,16);
		cout<<"AGE           => "<<age<<"yr";
		gotoxy(71,18);
		cout<<"DL NUMBER     => "<<dlno;
		gotoxy(71,20);
		cout<<"TIME          => "<<t<<"hr";
		gotoxy(71,22);
		cout<<"DISTANCE      => "<<d<<"km";
		gotoxy(71,24);
		cout<<"BOOKED CAR    => "<<cname;
		gotoxy(71,26);
		cout<<"SEATER        => "<<seater;
		gotoxy(71,28);
		cout<<"PRICE PER KM  => "<<pr<<"/KM";
		gotoxy(71,30);
		for(i=0;i<39;i++)
		{
			cout<<"-";
		}
		gotoxy(71,32);
		cout<<"TOTAL         => $"<<total;
	    ofstream f;
	    f.open("RENT.txt",ios::app);
	    f<<"\n_________________________________________________________________________\n";
	    f<<"\n1  NAME         =>"<<name;
	    f<<"\n2  MOBILE NO    =>"<<mno;
	    f<<"\n3  DL NO        =>"<<dlno;
	    f<<"\n4  AGE          =>"<<age;
	    f<<"\n5  TIME         =>"<<t;
	    f<<"\n6  DISTANCE     =>"<<d;
	    f<<"\n7  SEATER TYPE  =>"<<seater;
	    f<<"\n8  BOOKED CAR   =>"<<cname;
	    f<<"\n9  PRICE PER KM =>"<<pr<<"/KM";
	    f<<"\n*****************************************";
	    f<<"\n\tTOTAL AMOUNT =>"<<"$"<<total;
	    f.close();
		  
	}
	
};
void pwd()
{ 
	dis di;
 	char c[5],d[5]="1234",b[]="**********ENTER PASSWORD TO ACCESS THE PROGRAM**********",x[]="ENTER YOUR PASS HERE => ",ch[]="SORRY OUT OF ATTEMPT";
	int i,count;
	gotoxy(53,15);
	system("color 4F");
	for(i=0;i<strlen(b);i++)
	{
		cout<<b[i];
		usleep(2000);
	}
	gotoxy(53,17);
	for(i=0;i<strlen(x);i++)
	{
		cout<<x[i];
		usleep(2000);
	}
	for(i=0;i<4;i++)
	{
		c[i]=getch();
		if(c[i]=='\r')
		{
			break;
		}
		cout<<"*";
	}
	sleep(1);
	system("cls");
	if(strcmp(c,d)==0)
	{
		system("color 4F");
		char ch[]="ACCESS GRANTED";
		gotoxy(70,20);
		for(i=0;i<strlen(ch);i++)
		{
			cout<<ch[i];
			usleep(3000);
		}
		sleep(2);
		system("cls");
		menu();
	}
	else if(strcmp(c,d)!=0)
	{    
	    char y[]="INVALID CREDENTIALS";
	    count++;
	    system("color 4F");
	    gotoxy(70,20);
	    for(i=0;i<strlen(y);i++)
	    {
	    	cout<<y[i];
		    usleep(2000);
		}
		sleep(2);
		system("cls");
		pwd();
	}
}
void menu()
{
	dis di;
	int s,i;
	char ch[]="WELCOME TO AUTOMOBILE RENTAL";
	system("color 4F");
	for(i=0;i<70;i++)
	{
		cout<<"|";
		usleep(2000);
	}
	for(i=0;i<strlen(ch);i++)
	{
		cout<<ch[i];
		usleep(2000);
    }
	for(i=0;i<70;i++)
	{
		cout<<"|";
		usleep(2000);
	}
	note();
	sleep(10);
	system("cls");
		do
	{
		system("color 4F");
		gotoxy(70,8);
		cout<<"****MENU****";
		gotoxy(70,10);
		cout<<"1=>> rent car";
		gotoxy(70,12);
		cout<<"2=>> EXIT";
		gotoxy(70,13);
		cin>>s;
		sleep(2);
		system("cls");
		if(s==1)
		{
			di.get();
			sleep(5);
			system("cls");
			di.selection();
			sleep(5);
			system("cls");
			di.disply();
			sleep(30);
			system("cls");
			gotoxy(0,10);
			thank();
			sleep(10);system("cls");
		}
		
		else if(s==2)
		{
			gotoxy(0,10);
			thank();
			sleep(10);
			break;
		}
	}while(s!=2);	
	
} 
void note()
{
	int i,j;
	system("color 4F");
	char ch1[]="****NOTE****",ch2[]="1=>> DRIVER SHOULD HAVE DRIVING LICENCE",ch3[]="2=>> AGE OF THE DRIVER SHOULD BE ABOVE 25",
	ch4[]="3=>> MINMUM DISTACE TO TRAVELL IS 250KM",ch5[]="4=>> IF YOUR RENTAL TIME IS ABOVE 16HRS THEN 250 RUPEES ARE CHARGED";
	gotoxy(45,10);
	for(i=0;i<strlen(ch1);i++)
	{
		cout<<ch1[i];
		usleep(5000);
	}
	gotoxy(45,12);
	for(i=0;i<strlen(ch2);i++)
	{
		cout<<ch2[i];
		usleep(5000);
	}
	gotoxy(45,13);
	for(i=0;i<strlen(ch3);i++)
	{
		cout<<ch3[i];
		usleep(5000);
	}
	gotoxy(45,14);
	for(i=0;i<strlen(ch4);i++)
	{
		cout<<ch4[i];
		usleep(5000);
	}
	gotoxy(45,15);
	for(i=0;i<strlen(ch5);i++)
	{
		cout<<ch5[i];
		usleep(5000);
	}
}
void thank()
{
	int i,j;
	system("color 4F");
		for(i=1;i<=3;i++)
		{
			cout<<"\t\t\t\t\t\t\t\t\t\t";
			for(j=1;j<=15;j++)
			{
				if(j>=4-i&&j<=4+i||j>=12-i&&j<=12+i)
				{
					cout<<"*";
					usleep(3000);
				}
				else
				{
					cout<<" ";
				}
			}
			cout<<"\n";
		}
			for(i=1;i<=8;i++)
			{
				cout<<"\t\t\t\t\t\t\t\t\t\t";
				for(j=1;j<=15;j++)
				{
					
					if(j>=i&&j<=16-i)
					{
						cout<<"*";
						usleep(3000);
					}
					else
					{
						cout<<" ";
					}
				}
				cout<<"\n";
			}
		char ch[]="****THANK YOU VISIT AGAIN****";
  	
  	    gotoxy(75,22);
  	    for(i=0;i<strlen(ch);i++)
  	  {
  		cout<<ch[i];
  		usleep(3000);
	  }
	
}
int main()
{
     pwd();
}