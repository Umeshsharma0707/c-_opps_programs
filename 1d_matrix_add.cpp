//  Write a Program of Two 1D Matrix Addition using Operator Overloading

 #include<iostream>
 using namespace std;

 class matrix
 {

    public: int a[2][2];

    public: void user_get()
    {
        cout<<"enter matrix element : "<<endl;
        int i,j;

        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cout<<" ";
                cin>>a[i][j];
            }
        }
    }

    public: void display()
    {
        int i,j;

        for(i=0;i<2;i++)
        {
                cout<<" ";
            for(j=0;j<2;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }

    }
    

    public: void operator +(matrix x)
    {
        int i,j;
        int Ans[2][2];
        for( i=0; i<2; i++)
        {
                for( j=0; j<2; j++)
                {
                        Ans[i][j]=a[i][j]+a[i][j];
                }
        }
        cout<<"addition of matrix: \n ";
        for(i=0;i<2;i++)
        {
            cout<<" ";
            for(j=0;j<2;j++)
            {
                cout<<Ans[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

 };

 int main()
 {
    matrix r;
    matrix c;
    r.user_get();
    c.user_get();
    cout<<"first matrix: "<<endl;
    r.display();

    cout<<"second matrix: "<<endl;
    c.display();

   r+c;
    return 0;
 }