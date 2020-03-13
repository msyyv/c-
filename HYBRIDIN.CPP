#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class u
{
	private:
		char uname[40];
		char uadd[30];
		long int upin;
		long int uphone;
	 public:
		void init();
		void disp()
		{
			cout<<"\n\t\t "<<uname;
			cout<<"\n\t\t "<<uadd;
			cout<<"\n\t\t "<<upin;
			cout<<"\n\t\t "<<uphone;
		}
};

void u::init()
{
	cout<<"\n enter  University name::";
	gets(uname);
	cout<<"\n enter  University address::";
	gets(uadd);
	cout<<"\n enter  University mobile::";
	cin>>uphone;
	cout<<"\n enter  University pincode::";
	cin>>upin;
}
class stu:public u
{
	private:
		char sname[20];
		long int sreg_no;
		char scourse[20];
	public:
		void sinit();
		void sdisp()
		{
			disp();
			cout<<"\n Student Name: "<<sname;
			cout<<"\n Student registration numner: "<<sreg_no;
			cout<<"\n Student Course "<<scourse;


		}


};
	void stu::sinit()
{
	init();
	cout<<"\n enter  Student name::";
	gets(sname);
	cout<<"\n enter  Student Reg NUMBER::";
	cin>>sreg_no;
	cout<<"\n enter  Styudent course::";
	gets(scourse);
}

class emp:public u
{
	private:
		char ename[20];
		long int ereg_no;
		int esal;
	public:
		void einit();
		void edisp()
		{
			disp();
			cout<<"\n employee Name: "<<ename;
			cout<<"\n employee registration numner: "<<ereg_no;
			cout<<"\n employee esal "<<esal;


		}


};

  void emp::einit()
{
	init();
	cout<<"\n enter  employee name::";
	gets(ename);
	cout<<"\n Employee reg_no::";
	cin>>ereg_no;
	cout<<"\n enter  Salary::";
	cin>>esal;
}

class staff:public emp,public stu
{
	private:
		int stid;
		char stname[30];
		char stdept[30];
	 public:
		void disp4()
		{
			cout<<"\n staff id::"<<stid;
			cout<<"\n staff name::"<<stname;
			cout<<"\n staff department:"<<stdept;


		}
		void init4()
		{
			cout<<"\n enter staff id::";
			cin>>stid;
			cout<<"\n enter staff name::";
			gets(stname);
			cout<<"\n staff department::";
			gets(stdept);


		}
};


void main()
{
	staff st;
	clrscr();
	st.init4();
	st.disp4();

	getch();

}