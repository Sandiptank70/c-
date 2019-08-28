//single inheritance
#include<iostream.h>
#include<conio.h>
class base
{
	public:
	int a,b;
	void get()
	{
	cout<<endl<<"Enter a number=";
	cin>>a;
	cout<<endl<<"Enter a secound number:";
	cin>>b;
	}

};
class derived:public base
{
	public:
	void put()
	{
		cout<<endl<<"a="<<a<<endl<<"b="<<b;
	}
};
void main()
{
	clrscr();
	derived obj;
	obj.get();
	obj.put();
	getch();
}