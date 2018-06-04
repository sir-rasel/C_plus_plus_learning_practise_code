#include <iostream>
using namespace std;

struct student{
    string name;
    int roll;
};

union Student{
    char name[30];
    int roll;
};

enum st{rasel=4,roni,opu};

int main(){
    student a;
    Student b;
    st r=rasel;
    cout<<r<<endl;
    cin>>a.name;
    cin>>a.roll;
    cout<<a.name<<" "<<a.roll<<endl;
    cin>>b.name;
    cout<<b.name<<endl;
    cin>>b.roll;
    cout<<b.roll<<endl;
    cout<<b.name<<" "<<b.roll<<endl;///only roll print because of union
    return 0;
}
