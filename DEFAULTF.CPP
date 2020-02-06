#include<conio.h>
#include<iostream.h>
class defaultfun
{
	int a,b;
	public:
	void init(int c,int d)
	{
		a=c;
		b=d;

	}
	void sum(int c=10,int d)
	{
	       a= a+c;
	       b= b+d;


	}
	void disp()
	{
	  cout<<"\n sum of "<<a<<" and "<<b<<" is"<<a+b;

	}

};

void main()
{
     defaultfun obj;
     int e,f;
     clrscr();
     cout<<"\n enter number=";
     cin>>e;
     cout<<"\n enter second number=";
     cin>>f;
     obj.init(e,f);
     obj.sum();
     obj.disp();
     getch();

}