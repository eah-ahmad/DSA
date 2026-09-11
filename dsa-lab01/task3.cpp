#include <iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    int marks;
    void display(){

        cout<<"Roll Number : "<<rollNumber<<"\n"<<"marks"<<marks<<endl;
    }};

int main(){
    Student s1;
    s1.rollNumber=1;
    s1.marks=75;
     Student s2;
    s2.rollNumber=2;
    s2.marks=90;
    s1.display();
    s2.display();
    //this above  will print the original values of the variables
    //now i am goign  to update s1.marks
    cout<<"Now lets change s1 marks "<<endl<<endl;
    s1.marks=80;
    s1.display();
    s2.display();
    return 0;
//here , I revised the basicx syntax of using classes in c++
}
