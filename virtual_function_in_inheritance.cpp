#include <iostream>
using namespace std;

class Nationality{
public:
    virtual void show(){
        cout<< "It gives nationality."<<endl;
    }
};

class Bangladesh:public Nationality{
public:
    void show(){
        cout<< "Bangali"<<endl;
    }
};

class India:public Nationality{
public:
    void show(){
        cout<< "Indian"<<endl;
    }
};

class Pakistan:public Nationality{
public:
    void show(){
        cout<< "Pakistani"<<endl;
    }
};

int main(){
    Nationality *pointer;
    Bangladesh ob1;
    India ob2;
    Pakistan ob3;

    pointer=&ob1;
    pointer->show();

    pointer=&ob2;
    pointer->show();

    pointer=&ob3;
    pointer->show();

    return 0;
}
