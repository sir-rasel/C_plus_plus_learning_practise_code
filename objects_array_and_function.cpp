#include <iostream>
using namespace std;

class Account{
    int id;
    int amount;
public:
    void set(int i,int a);
    void get();
};

void Account::set(int i,int a){
    id=i;
    amount=a;
}

void Account::get(){
    cout<<"Id: "<<id<<endl;
    cout<<"Amount: "<<amount<<" Tk"<<endl;
}

void object_set_get(Account a);

int main(){
    Account arr[10];
    for(int i=0;i<10;i++){
        object_set_get(arr[i]);
    }
    return 0;
}

void object_set_get(Account a){
    int id,amount;
    cout<<"Enter user id and amount: ";
    cin>>id>>amount;
    a.set(id,amount);
    cout<<"User: "<<endl;
    a.get();
}
