#include<iostream.h>
#include<conio.h>
class complexsum
{

	int a,b;
	public:
	void init()
	{
		cout<<"\n enter number:";
		cin>>a;
		cout<<"\n enter imaginary number:";
		cin>>b;


	}
	void sum(complexsum n,complexsum m)
	{
	       a=n.a +m.a;
	       b=n.b + m.b;

	}

	void disp()
	{
		cout<<"\n";
		cout<<a<<" + i"<<b;

	}
};


void main()
{

 complexsum obj,obj1,obj3;
 clrscr();
 obj.init();
 obj1.init();
 obj3.sum(obj,obj1);
 obj3.disp();
 getch();

}