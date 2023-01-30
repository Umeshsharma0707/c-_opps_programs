// Assume that a bank maintains two kinds of accounts for customer, one called
// as saving account and other as current accounts provides Simple interest and
// withdraw facilities but no Cheque book facility.
// a) The current account provides Cheque book facility but no interest.
// b) Current account holders should maintain a minimum balance and if the
// balance falls below this level a service charges is imposed 

#include<iostream>
#include<math.h>
using namespace std;

class account
{
      public:  int acc_no;
        public : char name[50];
        public : float balance;
        public: void set_data()
        {       
                
                cout<<"enter account no: "<<endl;
                cin>>acc_no;

                cout<<"enter account Holder name: "<<endl;
                cin>>name;

                cout<<"enter account balance: "<<endl;
                cin>>balance;
        }
    int bal;
        public: void withdraw()
        {
            cout<<"enter amount to withdraw"<<endl;
            cin>>bal;
            balance-=bal;
            cout<<"Main Balance: "<<balance<<endl;

        }
         public: void deposit()
        {
            cout<<"enter amount to deposit"<<endl;
            cin>>bal;
            balance+=bal;
            cout<<"Main Balance: "<<balance<<endl;

        }
        public: void acc_display()
        {
            cout<<"Account no : \t"<<acc_no<<endl;

            cout<<"Account name : \t"<<name<<endl;

            cout<<"Account balance : \t"<<balance<<endl;



        }
        
};


class current : public account
{
    //    public:  float penalty;

       public: void penalty()
       {
        if(balance <500 )
        {
                cout<<"main balance is less"<<balance;
                balance=balance-100;
        }
       }
                

};

class saving : public account
{
public: int time;
        public: void interest()
        {
            cout<<"enter time of interest year "<<endl;
            cin>>time;
            float y;
            y=7.5*balance;
            float d =y*time;
            cout<<"balnce after intrest is "<<d<<endl;
        }

};

int main()
{
    account obj;
    saving s;
    current c;
    int a;
    string n;
    int select;
    re:
    cout<<"enter accont type: \t 1.saving account \t 2. current account"<<endl;
    cin>>select;
    {
        if(select==1)
        {
            cout<<"saving account"<<endl;
            
            obj.set_data();
            obj.withdraw();
            obj.deposit();
            obj.acc_display();
            s.interest();
            obj.acc_display();
            goto re;
        }
        else if(select==2)
        {
            cout<<"current account"<<endl;
            obj.set_data();
            c.penalty();
            goto re;
            
        }
        else
        {
            goto re;
        }
        
    }
    
}