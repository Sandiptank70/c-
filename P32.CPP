#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int no;
	void get()
	{
		cout<<endl<<"enter a number=";
		cin>>no;
	}
};
class b:public a
{
	public:
	void sq()
	{
		get();
		cout<<endl<<"squre="<<no*no;
	}
};
class c:public b
{
	public:
	void cu()
	{       get();
		cout<<endl<<"cube="<<no*no*no;
	}
};
void main()
{
	clrscr();
	c obj;
	b obj1;
	obj1.sq();
	obj.cu();
	getch();
}
