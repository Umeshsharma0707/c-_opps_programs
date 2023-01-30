// Write a program of two concatenate the two strings using Operator
// Overloading 

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
class demo
{
	char s1[25],s2[25];

	public :demo (char str1[], char str2[])
	{
	       strcpy(s1, str1);
	       strcpy(s2,str2);
	}
	void operator +()
	{
	       cout<<strcat(s1,s2);

	}
};
void main()
{
	demo obj("umesh","sharma");
	+obj;
	getch();
}
