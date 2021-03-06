/*  Program that describe multiple inheritance
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

class School{
    string schoolname;
    string Department;
protected:
    void setschoolname(string schoolname);
    void setDepartment(string Department);
public:
    School();
    void setschoolinformation(string schoolname,string Department);
    void getschoolinformation();
};

class Student : public Person,public School{
    string studentid;
    double cgpa;
protected:
    void setstudentid(string studentid);
    void setstudentcgpa(double cgpa);
public:
    Student();
    void setstudentinformation(string name,string id,int age,string schoolname,string Department,string studentid,double cgpa);
    void getstudentinformation();
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

School::School(){
    schoolname = "unknown";
    Department = "unknown";
}

void School::setschoolinformation(string schoolname,string Department){
    setschoolname(schoolname);
    setDepartment(Department);
}

void School::setschoolname(string schoolname){
    this -> schoolname = schoolname;
}

void School::setDepartment(string Department){
    this -> Department = Department;
}

void School::getschoolinformation(){
    cout<<"School Name : "<<schoolname<<endl;
    cout<<"section : "<<Department<<endl;
}


Student::Student(){
    studentid="Unknown";
    cgpa=0;
}

void Student::setstudentinformation(string name,string id,int age,string schoolname,string Department,string studentid,double cgpa){
    setpersoninformation(name,id,age);
    setschoolinformation(schoolname,Department);
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
    getschoolinformation();
    cout<<"Student ID: "<<studentid<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
}

void getinformation(string & name,string & id,int & age,string & schoolname,string & Department,string & studentid,double & cgpa){
    cout<<"Enter Student information: "<<endl;
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Id : ";
    cin>>id;
    cout<<"Age : ";
    cin>>age;
    getchar();
    cout<<"School Name: ";
    getline(cin,schoolname);
    cout<<"Department ; ";
    cin>>Department;
    cout<<"Student ID : ";
    cin>>studentid;
    cout<<"CGPA : ";
    cin>>cgpa;
}

int main(){
    Student a;
    string name,id,studentid,schoolname,Department;
    int age;
    double cgpa;
    getinformation(name,id,age,schoolname,Department,studentid,cgpa);
    cout<<endl;
    a.setstudentinformation(name,id,age,schoolname,Department,studentid,cgpa);
    a.getstudentinformation();
    cout<<endl;
    return 0;
}
