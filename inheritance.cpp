#include<iostream>
#include<conio.h>
using  namespace std;
class single 
{

    public: void one()
    {
        cout<<"first";

    }
};
class second  
{

    public: void two()
    {
        cout<<"second";
        
    }
};

class multi : public single, second
{

    {
        cout<<"third";
        
    }
};

void main()
{
    multi obj;

    obj.third();

}