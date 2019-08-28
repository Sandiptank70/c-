//pure virtual
#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	virtual void print()=0;
};
class demo1:public demo
{
	public:
	void print()
	{
		cout<<endl<<"this is a pure virtual";
	}
};
void main()
{
	clrscr();
	demo1 obj;
	obj.print();
	getch();
}