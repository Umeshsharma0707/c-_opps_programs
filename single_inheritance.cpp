//  Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer .Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance) 

#include<iostream>

using namespace std;

class batsman
{
    int avgruns;
    int innings,notout,runs,best_perfomance;
    char bname[25];


  public : void calcavg()
    {
        avgruns= runs/2;
    }
   
    public: void getdata()
    {
        cout<<"enter Batsman Name: "<<endl;
        cin>>bname;

        cout<<" enter innings: "<<endl;
        cin>>innings;
        cout<<" enter Notouts: "<<endl;
        cin>>notout;
        cout<<" enter total runs: "<<endl;
        cin>>runs;
         cout<<" best perfomance no of times: "<<endl;
        cin>>best_perfomance;
    }

    public: void display()
    {
        cout<<"  batsman name: "<<bname<<endl<<"total runs: "<<runs<<endl<<"best perfomances : "<<best_perfomance<<endl;
        cout<<"avg runs: "<<avgruns;
    }

};

class data : public batsman
{
    
};

int main()
{
    data obj;

    obj.getdata();
    obj.calcavg();
    obj.display();
}