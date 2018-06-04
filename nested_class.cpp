#include <iostream>
#include <string>
using namespace std;

class Student{
    int id;

    class info{
        string name;
        int marks;
    public:
        void set(string n,int m);
        void get();
    };
    info a;

public:
    void set(int i,string n,int m);
    void get();
};

void Student::set(int i,string n,int m){
    id=i;
    a.set(n,m);
}

void Student::get(){
    cout<<"ID : "<<id<<endl;
    a.get();
}

void Student::info::set(string n,int m){
    name = n;
    marks = m;
}

void Student::info::get(){
    cout<<"Name : "<<name<<endl;
    cout<<"Marks : "<<marks<<endl;
}

int main(){
    Student ob;
    string name;
    int id,marks;
    cout<<"Enter id,name,marks: ";
    cin>>id>>name>>marks;
    ob.set(id,name,marks);
    ob.get();
    return 0;
}
