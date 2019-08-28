//multi lavel inheritance
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	a()
	{
		cout<<endl<<"class a";
	}
	void sq(int a)
	{
	       cout<<endl<<"squre="<<a*a;
	}
};
class b
{
	public:
	b()
	{
		cout<<endl<<"class b";
	}
	void cube(int b)
	{
		cout<<endl<<"cube="<<b*b* b;
	}
};
class c:public a,public b
{
	public:
	int a,b;
	c()
	{
		cout<<endl<<"c class";
	}
	void get()
	{    //   int a,b;
		cout<<endl<<"enter a number a=";
		cin>>a;
	       //	cout<<endl<<"enter a number b=";
	       //	cin>>b;
	}
	void put()
	{
		sq(a);
		cube(a);
	}
};
void main()
{
	clrscr();
	c obj;
	obj.get();
	obj.put();
	getch();
}
