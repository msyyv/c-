#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class sbasic
{
	private:
		int roll_no;
		char email[20];
		long int mob;
		char sname[20];
       public:

		//void init();
       sbasic()
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

		void disp1()
		{
			cout<<"\n student name    : "<<sname;
			cout<<"\n student Roll_no :"<<roll_no;
			cout<<"\n student email   :"<<email;
		}


};

class saccadmic :public sbasic    //st level
{
	private:
		int marks1,marks2,marks3;

       public:

		saccadmic():sbasic()
		{
			cout<<"\n Marks1: ";
			cin>>marks1;
			cout<<"\n Marks2: ";
			cin>>marks2;
			cout<<"\n Marks3: ";
			cin>>marks3;

		}
		void disp()
		{
			disp1();
			cout<<"\n marks1:"<<marks1;
			cout<<"\n marks2:"<<marks2;
			cout<<"\n marks3:"<<marks3;
		}


};

class sphy :public saccadmic //2nd level
{
	private:
		int height,weight;
       public:
       sphy():saccadmic()
	{
		cout<<"\n enter student weight: ";
		cin>>weight;
		cout<<"\n Enter student height:";
		cin>>height;

	}
		void disp3()
		{
			disp();
			cout<<"\n student weight    : "<<weight;
			cout<<"\n student height :"<<height;
		}


};

void main()
{
	clrscr();
	sphy obj;

	cout<<"\n\t\t student details are:";
	obj.disp3();
	getch();



}