#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student{
public:
    string name;
    int salary;
};

istream & operator >>(istream &object,Student &ob){
    cout<< "Enter student name: ";
    object>>ob.name;
    cout<< "Enter salary : ";
    object>>ob.salary;
    return object;
}

ostream & operator <<(ostream &object,Student &ob){
    cout.fill('*');
    cout.width(20);
    cout<< "Student name : ";
    object<<setw(20)<<ob.name<<endl;
    cout<<setfill('.');
    cout.width(20);
    cout<< "Enter salary: ";
    object<<setw(20)<<ob.salary<<endl;
    return object;
}

ostream &outputname(ostream &object){
    cout.fill('*');
    cout.width(20);
    cout<< "Student name :";
    return object;
}

ostream &outputsalary(ostream &object){
    cout<<setfill('.');
    cout.width(20);
    cout<< "Enter salary: ";
    return object;
}

int main(){
    Student ob;
    cin>>ob;
    cout<<ob<<endl;
    cout<<outputname<<ob.name<<endl;
    cout<<outputsalary<<ob.salary<<endl;
    return 0;
}
