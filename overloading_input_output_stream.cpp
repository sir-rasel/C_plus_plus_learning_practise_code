#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student{
public:
    string name;
    int salary;
public:
    friend ostream & operator <<(ostream &out,Student &object);
    friend istream & operator >>(istream &in,Student &object);
};

ostream & operator <<(ostream &out,Student &object){
    cout<< "Student name: ";
    out<<object.name<<endl;
    cout<< "Salary: ";
    out<<object.salary<<endl;
    return out;
}

stream & operator >>(istream &in,Student &object){
    cout<< "Student name: ";
    in>>object.name;
    cout<< "Salary: ";
    in>>object.salary;
    return in;
}

ostream &outputname(ostream &object){
    cout.fill('*');
    cout.width(20);
    cout<< "Student name : ";
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
