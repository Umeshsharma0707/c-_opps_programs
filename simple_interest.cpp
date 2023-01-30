// Write a program of find the simple interest using constructor with dynamic
// initialization. Make constructor like Interest (int principal, int year, int rate)
// Interest (int principal, int year, float rate = 2.5)

#include <iostream>
#include<string.h>
using namespace std;

class interest
{
public:
    int year;
    float rate = 2.5;
    
    
   private: int amount;
    
public:interest(int p)
    {

        amount= p *1+rate*year;

       
    }
    

};

class get : public interest
{
    int amount;
        public : void display()
    {
        cout<<amount;
    }
};
int main()
{
    int principal,year;
    
   
    
    cout << "enter principal: " << endl;
    cin >> principal;
      cout << "enter no of years : " << endl;
      cin>>year;
    
     
}