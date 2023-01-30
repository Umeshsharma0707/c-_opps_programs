#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("tops.txt", ios :: in | ios ::out | ios :: trunc);

    if(!file.is_open())
    {
        cout<<"not found";

    }
    else{
        cout<<"success";
        file.close();
    }
}