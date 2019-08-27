//scope resolution operatar
#include<iostream.h>
#include<conio.h>
int a=10;
void main()
{
       clrscr();
       cout<<"Enter a number:";
       int a;
       cin>>a;
       cout<<endl<<"Number=:"<<::a;
       getch();
}