#include <iostream>
using namespace std;

class base{
    int basemember;
public:
    void set(int number){
        basemember=number;
    }
    void get(){
        cout<< "Base member : "<<basemember<<endl;
    }
};

class derive:public base{
    int derivemember;
public:
    void set(int number){
        derivemember=number;
    }
    void get(){
        cout<< "Drive member: "<<derivemember<<endl;
        base::get();
    }
};

int main(){
    derive object;
    int number;
    cout<< "Enter number: ";
    cin>>number;
    object.set(number);
    object.base::set(number+10);
    object.get();
    base *pointer=&object;
    pointer->set(number-5);
    pointer->get();
    return 0;
}
