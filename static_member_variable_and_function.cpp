#include <iostream>
using namespace std;

class Static{
    static int a;
public:
    Static();
    void set();
    static void get();
};

void Static::set(){
    cin>>a;
}

void Static::get(){
    cout<<a<<endl;
}

Static::Static(){
    a++;
}

int Static::a;

int main(){
    Static a;
    a.set();
    a.get();
    Static b;
    b.get();
    return 0;
}
