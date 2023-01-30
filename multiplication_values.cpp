// Write a program to find the multiplication values and the cubic values using
// inline function.

#include<iostream>


using namespace std;

class value
{
    public: inline float multiply(float x,float y)

    {
        return(x*y);
    }

   public: inline float cube(float x)

    {
        return(x*x*x);
    }
};

int main()
{
    value obj;

    float a,b;

    cout<<"enter values"<<endl;
    cin>>a>>b;

    cout<<"multiplication value is: " <<obj.multiply(a,b)<<endl;
    cout<<"cube value is "<<obj.cube(a)<<endl<<obj.cube(b);
   

}