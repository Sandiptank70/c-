//hybride inheritance
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int a;
	a()
	{
		cout<<endl<<"this is a class a";
	}
};
class b:virtual public a
{
	public:
	int b ;
	b()
	{
		cout<<endl<<"this is class b";
	}

};
class c:virtual public a
{
	public:
	int c;
	c()
	{
		cout<<endl<<"this is class c";
	}
};
class d:public b,public c
{
	public:
	d()
	{
		cout<<endl<<"class d";
	}
	void get()
	{
	     cout<<endl<<"enter a  number a=";
	     cin>>a;
	     cout<<endl<<"entar a number b";
	     cin>>b;
	}
	void put()
	{
		cout<<endl<<a<<endl<<b<<endl<<c;
	}
};
void main()
{
	clrscr();
	d obj;
	obj.get();
	obj.put();
	getch();
}