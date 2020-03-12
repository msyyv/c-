#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class cons
{
	private:
		int a,b;
	public:
		cons()
		{
			a=10;
			b=20;
			disp();
			cout<<"\n default constructor:";
		}
		cons(int n,int p)
		{
			a=n;
			b=p;
			cout<<"\n Parameterized Constructor::";
		}


		void disp()
		{
			int sum;
			sum=a+b;
			cout<<"\n sum of "<<a <<" and "<<b <<" is:"<<sum;


		}

};

void main()
{
	int a,b;
	cons obj;
	clrscr();
	cout<<"\n Enter Two Number for sum ::";
	cin>>a>>b;
	cons obj1(a,b);
	getch();

}