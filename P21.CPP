//const keyword

#include<iostream.h>
#include<conio.h>
class check
{
	public:
	int a;
	void get()
	{
		cout<<endl<<"enter a vale:";
		cin>>a;
	}
	void put()const
	{
		cout<<endl<<"value is"<<a;
	}
};
void main()
{
	clrscr();
	check obj;
	obj.get();
	obj.put();
	getch();
}
