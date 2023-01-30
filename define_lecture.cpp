// Define a class to represent lecture details. Include the following members and
// the program should handle at least details of 5 lecturer.
// Data members:
// a) Name of the lecturer
// b) Name of the subject
// c) Name of course
// d) Number of lecturers
//  Data functions:
// a) To assign initial values
// b) To add a lecture details
// c) To display name and lecture details 

#include<iostream>

    using namespace std;

class lecture
{
    public:
    char lecturer[30];
    char subject[30];
    char course[30];
    int lectures[1];
            public : void lec_data()
            {
                cout<<"Name of Lecturer: "<<endl;
                cin>>lecturer;

                cout<<"Name of subject: "<<endl;
                cin>>subject;

                cout<<"Name of course: "<<endl;
                cin>>course;

                cout<<"Numbers of Lectures: "<<endl;
                cin>>lectures[1];

            }

            public : void display()
            {
                cout<<"Name of Lecturer: "<<lecturer<<endl;
               

                cout<<"Name of subject: "<<subject<<endl;
                

                cout<<"Name of course: "<<course<<endl;
                

                cout<<"Numbers of Lectures: "<<lectures<<endl;
                

            }
            

};

main()
{

    lecture obj;
    
    
    int i;
    for(i=0;i<=5;i++)
    {
      obj.lec_data();  
    }
    int count=1;
for(i=0;i<=5;i++)
    {
       
    obj.display();
    count++;
    cout<<" inputs: "<<count<<endl;
    }
}
