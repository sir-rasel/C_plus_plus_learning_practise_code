#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base constructor."<<endl;
    }
    virtual ~Base(){
        cout<< "Base destructor."<<endl;
    }
    virtual void print(){
        cout<< "Base class"<<endl;
    }
};

class Derive:public Base{
public:
    Derive(){
        cout << "Derive constructor."<<endl;
    }
    ~Derive(){
        cout<< "Derive destructor."<<endl;
    }
    void print(){
        cout<< "Derive class"<<endl;
    }
};

int main(){
    Base *pointer = new Derive;
    pointer->print();
    delete pointer;
    return 0;
}
