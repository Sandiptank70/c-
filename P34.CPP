//this keyword

#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int no;
	demo(int no)
	{
		this->no=no;
	}
	void print()
	{
		cout<<endl<<"no="<<no;
	}
};

void main()
{
	clrscr();
	demo obj(10);
	obj.print();
	getch();
}