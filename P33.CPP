#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int no;
	void get()
	{
		cout<<endl<<"Enter a number=";
		cin>>no;
	}
	void put()
	{
		cout<<endl<<"no="<<no;
	}
};
void main()
{
	clrscr();
	demo *obj;
	demo obj2;
	obj=&obj2;
	obj->get();
	obj->put();
	get();
}