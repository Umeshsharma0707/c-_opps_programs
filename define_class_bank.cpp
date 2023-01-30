// Define a class to represent a bank account. Include the following members:
// Data Member: -
// a) Name of the depositor -
// b) Account Number -
// c) Type of Account -
// d) Balance amount in the account -
//  Member Functions -
// f) To assign values -
// g) To deposited an amount -
// h) To withdraw an amount after checking balance -
// i) To display name and balance 

#include<iostream>
#include<conio.h>
    using namespace std;

class bank
{
    public:
     char name[50];
    int acc_num;
    char type_acc[50];
    int balance;


    public: void information()
    {


        cout<<"enter name of depositor :";
        cin>>name;
        cout<<"enter account number "<<endl;
        cin>>acc_num;
        cout<<"enter account type "<<endl;
        cin>>type_acc;
        cout<<"enter balance "<<endl;
        cin>>balance;
    }
    public: void deposit()
    {
    int bal;
        cout<<"enter amount to deposit"<<endl;
        cin>>bal;
        balance+=bal;
        cout<<"amount deposited successfully\n New Balance: "<<balance;

    }
    public: void withdraw()
    {
        int bal;
        cout<<"main balance:"<<balance;
        cout<<"enter amount to withdraw"<<endl;
        cin>>bal;

        if(bal<=balance)
        {
            balance-=bal;
            cout<<"remaining balance"<<balance;

        }
        else
        {
            cout<<"error";
        }
    }
    public : void display()
    {
        cout<<"\n your name"<<name;
        cout<<"\n account number"<<acc_num;
        cout<<"\n account type"<<type_acc;
        cout<<"\n bank balance"<<balance;
    }


};

int main()
{
    int i;
    bank obj;
    obj.information();
    
    // options to select



    cout<<"select any options"<<endl;

    cout<<"\n 1. your Information \n 2.withraw amount \n 3. Deposit amount \n";
    cin>>i;

    if(i==1)
    {
        obj.display();

    }
    else if(i==2)
    {
        obj.withdraw();
    }
    else if(i==3)
    {
        obj.deposit(); 
    }
    else{
        cout<<"wrong input"<<endl;
        
    }
return 0;
}
