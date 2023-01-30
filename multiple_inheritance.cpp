
// • Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance) 

#include<iostream>

using namespace std;

class person
{
       public: string name;
        int age;

        public: void get_person(int a, string n)
        {
            name=n;
            age=a;
        }

        public: void person_display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};

class student : person
{
    float percentage;
    public:
		void setStudent(string n, int a, float p){
			percentage = p;
			get_person(a,n);
		}
        void displayStudent(){
			cout<<"Student details are: \n";
			person_display();
			cout<<"Percentage is:  "<<percentage<<endl;
		}
};

class teacher : person
{
        private:
		float salary;
	public:
		void setTeacher(string n, int a, float s){
			salary = s;
			get_person(a,n);
		}
		void displayTeacher(){
			cout<<"Teachers details are: \n";
			person_display();
			cout<<"Salary:  "<<salary<<endl;
		}
};
int main()
{
   student s;
	s.setStudent("Umesh", 19,99.99);
	s.displayStudent();
	teacher t;
	t.setTeacher("Rakesh", 55, 49000.98);
	t.displayTeacher();
}