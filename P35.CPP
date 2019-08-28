//virtual method
#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	virtual void print()
	{
		cout<<endl<<"this is virtual method";\
	}

};
class demo1:public demo
{
		public:
		void print()
		{
			cout<<endl<<"method demo 1";
		}
};
void main()
{
	clrscr();
	demo1 obj;
	obj.print();
	getch();
}