#include<iostream.h>
#include<conio.h>
class a
{
	public:
	int a;
	void get()
	{
		cout<<"enter a number=";
		cin>>a;
	}
	void put()
	{
		cout <<a;
	}
};
void main()
{
	clrscr();
	a obj;
	obj.get();
	obj.put();
	getch();
}