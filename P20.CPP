//friend function
#include<iostream.h>
#include<conio.h>
class check
{       public:
	int pint;
	friend void test(check c1);

};
void test(check c1)
{
	cout<<endl<<c1.pint;
}
void main()
{
	clrscr();
	check c1;
	test(c1);
	getch();
}