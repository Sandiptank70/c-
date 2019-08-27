//method outside
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	void print();
};
void a::print()
{
	cout<<"hello this is method outside of class";
};
void main()
{
	clrscr();
	a obj;
	obj.print();
	getch();
}

