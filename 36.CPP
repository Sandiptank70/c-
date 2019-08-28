//virtual with defauly args
#include<iostream.h>
#include<conio.h>
class base
{        public:
	virtual void print(int a=10)
	{
		cout<<endl<<a;
	}
};
class drived:public  base
{
	public:
	void print(int b=20)
	{
		cout<<endl<<b;
	}
};
void main()
{
	clrscr();
	drived obj;
	obj.print();
	getch();
}