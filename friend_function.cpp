#include<iostream>
#include<conio.h>

using namespace std;
class demo
{
	private : int a;

	friend 	int add(demo);


};
int add(demo d)
{
	d.a=5;
	return d.a;
}
int main()
{
	
	demo obj;
	cout<<add(obj) ;
	getch();
	return 0;
}