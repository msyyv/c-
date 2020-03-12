#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class uni
{
	private:
		long int  uid;
		char uname[30];
		char uadd[40];
		char ustate[20];
		char upin[30];
		long int umob;
	public:
		void uinit();
		void udisp()
		{
			cout<<"\n\t\t University Name   ::"<<uname;
			cout<<"\n\t\t University Id     ::"<<uid;
			cout<<"\n\t\t University Address::"<<uadd;
			cout<<"\n\t\t University State  ::"<<ustate;
			cout<<"\n\t\t University Pincode::"<<upin;
			cout<<"\n\t\t University Contact::"<<umob;

		}
};
	void uni::uinit()
	{
	cout<<"\n\t\t Enter Unversity Details::";
	cout<<"\n University Name::";
	gets(uname);
	cout<<"\n University Id::";
	cin>>uid;
	cout<<"\n University Address::";
	gets(uadd);
	cout<<"\n university Mobile Number::";
	cin>>umob;
	cout<<"\n University State :";
	cin>>ustate;
	cout<<"\n University PIn::";
	cin>>upin;

	}




class stu :public uni
{
	private:
		long int  sid;
		char sname[30];
		char sadd[40];
		char scourse[20];
		long int smob;
	public:
		void sinit();
		void sdisp()
		{
			udisp();
			cout<<"\n Student name          ::"<<sname;
			cout<<"\n Student Registraion Id::"<<sid;
			cout<<"\n Student Address       ::"<<sadd;
			cout<<"\n Student Course        ::"<<scourse;
			cout<<"\n Student Mobile number ::"<<smob;

		}
};

void stu::sinit()
{
	uinit();
	cout<<"\n\t\t Enter Student Details::";
	cout<<"\n Student Name::";
	gets(sname);
	cout<<"\n Student Registrartion Id::";
	cin>>sid;
	cout<<"\n Student Address::";
	gets(sadd);
	cout<<"\n Student Course::";
	gets(scourse);
	cout<<"\n Student Mobile Number::";
	cin>>smob;

}


class emp:public uni
{
	private:
		long int  eid;
		char ename[30];
		char eadd[40];
		char edomain[20];
		long int emob;
	public:
		void einit();
		void edisp()
		{
			udisp();
			cout<<"\n Employee Id            ::"<<eid;
			cout<<"\n Employee name          ::"<<ename;
			cout<<"\n Employee Domain        ::"<<edomain;
			cout<<"\n Employee Address       ::"<<eadd;
			cout<<"\n Employee Mobile number ::"<<emob;

		}
};

void emp::einit()
{
	uinit();
	cout<<"\n\t\t Enter Employee Details::";
	cout<<"\n Employee Name::";
	gets(ename);
	cout<<"\n Employee Id::";
	cin>>eid;
	cout<<"\n Employee Domain(speciality)::";
	cin>>edomain;
	cout<<"\n employee Address::";
	gets(eadd);
	cout<<"\n Employee Mobile Number::";
	cin>>emob;
}

void main()
{
	stu s;
	emp e;
	clrscr();
	s.sinit();
	e.einit();
	cout<<"\n\t\t Employee Details With University details Are::";
	e.edisp();
	cout<<"\n\t\t Student Details With University details Are::";
	s.sdisp();

	getch();


}