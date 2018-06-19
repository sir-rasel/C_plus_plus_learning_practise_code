/*  Program that describe inheritance and constructor
    Author : Saiful Islam Rasel
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

class Person{
protected:
    string name;
    string id;
    int age;
public:
    Person(string name,string id,int age):name(name),id(id){
        this->age=age;
    }
    void getpersoninformation(){
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class Student : public Person{
protected:
    string studentid;
    double cgpa;
public:
    Student(string name,string id,int age, string studentid,double cgpa):Person(name,id,age){
        this-> studentid=studentid;
        this-> cgpa=cgpa;
    }
    void getstudentinformation(){
        getpersoninformation();
        cout<<"Student ID: "<<studentid<<endl;
        cout<<"CGPA : "<<cgpa<<endl;
    }
};

class Studentaccount : protected Student{
protected:
    string accountnumber;
    double balance;
public:
    Studentaccount(string name,string id,int age,string studentid,double cgpa,string accountnumber,double balance)  :
        Student(name,id,age,studentid,cgpa){
        this -> accountnumber = accountnumber;
        this -> balance = balance;
    }
    void getstudentaccountinformation(){
        getstudentinformation();
        cout<<"Account number: "<<accountnumber<<endl;
        cout<< "Balance : "<<balance<<endl;
    }
};

void getinformation(string &name,string &id,int &age, string &studentid, double &cgpa, string &accountnumber,double &balance){
    cout<<"Enter Student account information: "<<endl;
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Id : ";
    cin>>id;
    cout<<"Age : ";
    cin>>age;
    getchar();
    cout<<"Student ID : ";
    cin>>studentid;
    cout<<"CGPA : ";
    cin>>cgpa;
    cout<< "Account number :";
    cin>>accountnumber;
    cout<< "Balance on account: ";
    cin>>balance;
    getchar();
}

void getinformation(string &name,string &id,int &age, string &studentid, double &cgpa){
    cout<<"Enter Student account information: "<<endl;
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Id : ";
    cin>>id;
    cout<<"Age : ";
    cin>>age;
    getchar();
    cout<<"Student ID : ";
    cin>>studentid;
    cout<<"CGPA : ";
    cin>>cgpa;
    getchar();
}


int main(){
    string name,id,studentid,accountnumber;
    int age;
    double cgpa,balance;
    getinformation(name,id,age,studentid,cgpa);
    Student ob(name,id,age,studentid,cgpa);
    cout<<endl;
    ob.getstudentinformation();
    cout<<endl;
    getinformation(name,id,age,studentid,cgpa,accountnumber,balance);
    Studentaccount object(name,id,age,studentid,cgpa,accountnumber,balance);
    cout<<endl;
    object.getstudentaccountinformation();
    cout<<endl;
    return 0;
}
