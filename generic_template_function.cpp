#include <iostream>
#include <string>
using namespace std;

template <class T>
void TakeInput(T &object,T &object1){
    cout<< "Enter Numbers: ";
    cin>>object>>object1;
}

template <class T>
void TakeInput(T &object){
    cout<< "Enter Number: ";
    cin>>object;
}

template <class T1,class T2>
void TakeInput(T1 &object, T2 &object1){
    cout<< "Enter Numbers: ";
    cin>>object>>object1;
}

void TakeInput(string &object){
    cout<< "Enter First Name: ";
    getline(cin,object);
}

void TakeInput(string &object,string &object1){
    cout<< "Enter Name: ";
    getline(cin,object);
    getline(cin,object1);
}

template <class T>
T Sum(T object, T object1){
    return (object+object1);
}

template <class T>
T Sum(T object){
    return object;
}

template <class T1,class T2>
T2 Sum(T1 object, T2 object1){
    return (object+object1);
}

string Sum(string object, string object1){
    return (object+object1);
}

string Sum(string object){
    return object;
}

int main(){
    int number,number1;
    double number2;
    string FirstName,LastName;

    TakeInput(number,number1);
    cout<<Sum(number,number1)<<endl;

    TakeInput(number2);
    cout<<Sum(number,number1)<<endl;

    TakeInput(number,number2);
    cout<<Sum(number,number2)<<endl;
    cin.get();

    TakeInput(FirstName);
    cout<<Sum(FirstName)<<endl;

    TakeInput(FirstName,LastName);
    cout<<Sum(FirstName,LastName)<<endl;

    return 0;
}
