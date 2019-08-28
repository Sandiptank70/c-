//multipul inheritance
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int a;
	a()
	{
		cout<<endl<<"A class";
	}
};
class b:public a
{
	public:
	int b;
	b()
	{
		cout<<endl<<"B class";
	}
};
class c:public b
{
	public:
	int c;
	c()
	{
		cout<<endl<<"C class";
	}
	void get()
	{
		cout<<endl<<"Enter first number=";
		cin>>a;
		cout<<endl<<"Enter secound number=";
		cin>>b;
		cout<<endl<<"Enter third number=";
		cin>>c;
	}
	void put()
	{
		cout<<endl<<"A="<<a<<endl<<"b="<<b<<endl<<"c="<<c;
	}

};
void main()
{
	clrscr();
	c obj;
	getch();
}