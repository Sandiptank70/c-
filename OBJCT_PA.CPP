//pass object in method
#include<iostream.h>
#include<conio.h>
class a
{       int no,amt;
	public:
	 void get();
	 void put();
	 a trans(a obj1,float amt1);

};
void a::get()
{
	cout<<"Enter a number=";
	cin>>no;
	cout<<"Enter a amt=";
	cin>>amt;
}
void a::put()
{
	cout<<endl<<"number="<<no<<endl<<"amount="<<amt;
}
a::trans(a obj1,float amt1)
{
	obj1.amt=obj1.amt+amt1;
	return obj1;
}
void main()
{
	clrscr();
	a o1,o2,o3;
	o1.get();
	o2.get();
	o3=o1.trans(20,100);
	o1.put();
	o2.put();
	o3.put();
	getch();
}