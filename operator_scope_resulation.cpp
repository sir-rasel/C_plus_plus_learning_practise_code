#include <iostream>
using namespace std;

class scope_check{
    int a;
public:
    void set();
    void get();
};

void scope_check::set(){
    cin>>a;
}

void scope_check::get(){
    cout<<a<<endl;
}

int main(){
    scope_check a;
    a.set();
    a.get();
    return 0;
}
