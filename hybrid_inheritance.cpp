#include <iostream>
#include <string>
using namespace std;

class Person{
    string personname;
    string personid;
    string ocassion;
protected:
    void setpersonname(string name){
        personname = name;
    }
    void setpersonid(string id){
        personid = id;
    }
    void setpersonocassion(string ocassion){
        this->ocassion = ocassion;
    }
public:
    Person(){
        personname = "Unknown";
        personid = "Unknown";
        ocassion = "Unknown";
    }
    void setpersoninformation(string name,string id,string ocassion){
        setpersonname(name);
        setpersonid(id);
        setpersonocassion(ocassion);
    }
    void getpersoninformation(){
        cout<<"Name: "<<personname<<endl;
        cout<<"Personal Id: "<<personid<<endl;
        cout<<"Ocassion: "<<ocassion<<endl;
    }
};

class Income{
    int workingrate;
    int workinghour;
protected:
    void setworkingrate(int rate){
        workingrate = rate;
    }
    void setworkinghour(int hour){
        workinghour = hour;
    }
public:
    Income(){
        workingrate = 0;
        workinghour = 0;
    }
    void setincomeinformation(int rate,int hour){
        setworkingrate(rate);
        setworkinghour(hour);
    }
    int getincomeinformation(){
        return (workingrate*workinghour);
    }
};

class Salary:private Income{
    int amountofsalary;
public:
    Salary(){
        amountofsalary = 0;
    }
    void setsalaryinformation(int rate,int hour){
        setincomeinformation(rate,hour);
        amountofsalary = getincomeinformation();
    }

    int getamountofsalary(){
        return amountofsalary;
    }
};

class Worker:private Person,private Salary{
    string workerid;
    string officename;
protected:
    void setworkerid(string workerid);
    void setworkerofficename(string officename);
public:
    Worker(){
        workerid = "Unknown";
        officename = "Unknown";
    }
    void setworkerinformation(string name,string id,string ocassion,string workerid,string officename,int rate,int hour){
        setpersoninformation(name,id,ocassion);
        setsalaryinformation(hour,rate);
        this -> workerid=workerid;
        this -> officename=officename;
    }
    void getworkerinformation(){
        getpersoninformation();
        cout<<"Worker Id: "<<workerid<<endl;
        cout<<"Office name: "<<officename<<endl;
        cout<<"Total Salary: "<<getamountofsalary()<<endl;
    }
};

void getinformation(string &name,string &id,string &ocassion,string &workerid,string &officename,int &rate,int &hour){
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Personal Id: ";
    getline(cin,id);
    cout<<"Ocassion: ";
    getline(cin,ocassion);
    cout<<"Worker Id: ";
    getline(cin,workerid);
    cout<<"Office name: ";
    getline(cin,officename);
    cout<<"Working rate: ";
    cin>>rate;
    cout<<"Working hour: ";
    cin>>hour;
}


int main(){
    Worker object;
    string name,id,workerid,ocassion,officename;
    int workinghour,rate;
    getinformation(name,id,ocassion,workerid,officename,rate,workinghour);
    cout<<endl;
    object.setworkerinformation(name,id,ocassion,workerid,officename,rate,workinghour);
    object.getworkerinformation();
    return 0;
}
