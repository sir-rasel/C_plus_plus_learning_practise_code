#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    string id;
    int age;
protected:
    void setpersonname(string name);
    void setpersonid(string id);
    void setpersonage(int age);
public:
    Person();
    void setpersoninformation(string name,string id,int age);
    void getpersoninformation();
};

class Student : public Person{
    string studentid;
    double cgpa;
protected:
    void setstudentid(string studentid);
    void setstudentcgpa(double cgpa);
public:
    Student();
    void setstudentinformation(string name,string id,int age, string studentid,double cgpa);
    void getstudentinformation();
};

Person::Person(){
    name="Unknown";
    id="Unknown";
    age=0;
}

void Person::setpersonname(string name){
    this->name=name;
}

void Person::setpersonid(string id){
    this->id=id;
}

void Person::setpersonage(int age){
    this->age=age;
}

void Person::setpersoninformation(string name,string id,int age){
    setpersonname(name);
    setpersonid(id);
    setpersonage(age);
}

void Person::getpersoninformation(){
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"Age : "<<age<<endl;
}

Student::Student(){
    studentid="Unknown";
    cgpa=0;
}

void Student::setstudentid(string studentid){
    this-> studentid=studentid;
}

void Student::setstudentcgpa(double cgpa){
    this-> cgpa=cgpa;
}

void Student::setstudentinformation(string name,string id,int age, string studentid,double cgpa){
    setpersoninformation(name,id,age);
    setstudentid(id);
    setstudentcgpa(cgpa);
}

void Student::getstudentinformation(){
    getpersoninformation();
    cout<<"Student ID: "<<studentid<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
}

void getinformation(string & name,string & id,int & age, string & studentid, double & cgpa){
    cout<<"Enter Student information: "<<endl;
    cout<<"Name: ";
    cin>>name;
    cout<<"Id : ";
    cin>>id;
    cout<<"Age : ";
    cin>>age;
    cout<<"Student ID : ";
    cin>>studentid;
    cout<<"CGPA : ";
    cin>>cgpa;
}

int main(){
    Student a;
    string name,id,studentid;
    int age;
    double cgpa;
    getinformation(name,id,age,studentid,cgpa);
    a.setstudentinformation(name,id,age,studentid,cgpa);
    a.getstudentinformation();
    return 0;
}
