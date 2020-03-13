#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class sbasic
{
	private:
		int roll_no;
		char email[20];
		long int mob;
       public:
		char sname[20];
		void init();
		void disp1()
		{
			cout<<"\n student name    : "<<sname;
			cout<<"\n student Roll_no :"<<roll_no;
			cout<<"\n student email   :"<<email;
		}


};
void sbasic::init()
{
	cout<<"\n enter student name: ";
	gets(sname);
	cout<<"\n Enter student roll no:";
	cin>>roll_no;
	cout<<"\n enter student Email::";
	gets(email);
	cout<<"\n Enter student Mob   :";
	cin>>mob;


}

class saccadmic :public sbasic    //st level
{
	private:
		int marks1,marks2,marks3;

       public:

		void init1();
		void disp()
		{
			disp1();
			cout<<"\n marks1:"<<marks1;
			cout<<"\n marks2:"<<marks2;
			cout<<"\n marks3:"<<marks3;
		}


};
void saccadmic::init1()
{       init();
	cout<<"\n Marks1: ";
	cin>>marks1;
	cout<<"\n Marks2: ";
	cin>>marks2;
	cout<<"\n Marks3: ";
	cin>>marks3;

}

class sphy :public saccadmic //2nd level
{
	private:
		int height,weight;
       public:
		void init3();
		void disp3()
		{
			disp();
			cout<<"\n student weight    : "<<weight;
			cout<<"\n student height :"<<height;
		}


};
void sphy::init3()
{
	init1();
	cout<<"\n enter student weight: ";
	cin>>weight;
	cout<<"\n Enter student height:";
	cin>>height;

}

void main()
{
	sphy obj;
	clrscr();
	obj.init3();
	cout<<"\n\t\t student details are:";
	obj.disp3();
	getch();



}