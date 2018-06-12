/*  Program that describe multilevel inheritance
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
    void setstudentinformation(string studentid,double cgpa);
    void getstudentinformation();
};

class School : public Student{
    string schoolname;
    string section;
protected:
    void setschoolname(string schoolname);
    void setsection(string section);
public:
    School();
    void setschoolinformation(string schoolname,string section);
    void getschoolinformation();
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

void Student::setstudentinformation(string studentid,double cgpa){
    setstudentid(studentid);
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

School::School(){
    schoolname = "unknown";
    section = "unknown";
}

void School::setschoolinformation(string schoolname,string section){
    setschoolname(schoolname);
    setsection(section);
}

void School::setschoolname(string schoolname){
    this -> schoolname = schoolname;
}

void School::setsection(string section){
    this -> section = section;
}

void School::getschoolinformation(){
    getstudentinformation();
    cout<<"School Name : "<<schoolname<<endl;
    cout<<"School section : "<<section<<endl;
}

void getinformation(string & name,string & id,int & age){
    cout<<"Enter Person information: "<<endl;
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Id : ";
    cin>>id;
    cout<<"Age : ";
    cin>>age;
    getchar();
}

void getinformation(string & studentid, double & cgpa){
    cout<<"Enter Student information: "<<endl;
    cout<<"Student ID : ";
    cin>>studentid;
    cout<<"CGPA : ";
    cin>>cgpa;
    getchar();
}

void getinformation(string & schoolname,string & section){
    cout<<"Enter School information: "<<endl;
    cout<<"School Name: ";
    getline(cin,schoolname);
    cout<<"section : ";
    cin>>section;
}

int main(){
    Student a;
    string name,id,studentid;
    int age;
    double cgpa;
    getinformation(name,id,age);
    getinformation(studentid,cgpa);
    cout<<endl;
    a.setpersoninformation(name,id,age);
    a.setstudentinformation(studentid,cgpa);
    a.getstudentinformation();
    cout<<endl;

    School b;
    string schoolname;
    string section;
    getinformation(schoolname,section);
    cout<<endl;
    b.setpersoninformation(name,id,age);
    b.setstudentinformation(studentid,cgpa);
    b.setschoolinformation(schoolname,section);
    b.getschoolinformation();
    cout<<endl;
    return 0;
}
