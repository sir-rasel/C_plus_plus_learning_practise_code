/*  Program that describe hiararcical inheritance
    Author : Saiful Islam Rasel
*/

#include <iostream>
#include <string>
#include <cstdio>
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

class Worker : public Person{
    string workerid;
    int salary;
protected:
    void setworkerid(string workerid);
    void setworkersalary(int salary);
public:
    Worker();
    void setworkerinformation(string name,string id,int age,string workerid,int salary);
    void getworkerinformation();
};

Person::Person(){
    name="Unknown";
    id="Unknown";
    age=0;
}

void Person::setpersoninformation(string name,string id,int age){
    setpersonname(name);
    setpersonid(id);
    setpersonage(age);
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

void Person::getpersoninformation(){
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"Age : "<<age<<endl;
}

Student::Student(){
    studentid="Unknown";
    cgpa=0;
}

void Student::setstudentinformation(string name,string id,int age, string studentid,double cgpa){
    setpersoninformation(name,id,age);
    setstudentid(id);
    setstudentcgpa(cgpa);
}

void Student::setstudentid(string studentid){
    this-> studentid=studentid;
}

void Student::setstudentcgpa(double cgpa){
    this-> cgpa=cgpa;
}

void Student::getstudentinformation(){
    getpersoninformation();
    cout<<"Student ID: "<<studentid<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
}

Worker::Worker(){
    workerid = "unknown";
    salary = 0;
}

void Worker::setworkerinformation(string name,string id,int age,string workerid,int salary){
    setpersoninformation(name,id,age);
    setworkerid(workerid);
    setworkersalary(salary);
}

void Worker::setworkerid(string workerid){
    this -> workerid = workerid;
}

void Worker::setworkersalary(int salary){
    this -> salary = salary;
}

void Worker::getworkerinformation(){
    getpersoninformation();
    cout<<"Worker Id : "<<workerid<<endl;
    cout<<"Worker Salary : "<<salary<<endl;
}

void getinformation(string & name,string & id,int & age, string & studentid, double & cgpa){
    cout<<"Enter Student information: "<<endl;
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Id : ";
    cin>>id;
    cout<<"Age : ";
    cin>>age;
    cout<<"Student ID : ";
    cin>>studentid;
    cout<<"CGPA : ";
    cin>>cgpa;
    getchar();
}

void getinformation(string & name,string &id,int & age, string & workerid, int & salary){
    cout<<"Enter Worker information: "<<endl;
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Id : ";
    cin>>id;
    cout<<"Age : ";
    cin>>age;
    cout<<"Worker ID : ";
    cin>>workerid;
    cout<<"Salary : ";
    cin>>salary;
}

int main(){
    Student a;
    string name,id,studentid;
    int age;
    double cgpa;
    getinformation(name,id,age,studentid,cgpa);
    cout<<endl;
    a.setstudentinformation(name,id,age,studentid,cgpa);
    a.getstudentinformation();
    cout<<endl;
    Worker b;
    string workerid;
    int salary;
    getinformation(name,id,age,workerid,salary);
    cout<<endl;
    b.setworkerinformation(name,id,age,workerid,salary);
    b.getworkerinformation();
    cout<<endl;
    return 0;
}
