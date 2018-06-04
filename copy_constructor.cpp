#include <iostream>
using namespace std;

class Copyconstructor{
    int *pointer;
public:
    Copyconstructor();
    Copyconstructor(Copyconstructor &object);
    ~Copyconstructor();
};

Copyconstructor::Copyconstructor(){
    pointer = new int(0);
    cout<<"Construct "<<*pointer<<endl;
}

Copyconstructor::Copyconstructor(Copyconstructor &object){
    pointer = new int(10);
     cout<<"Copy Construct "<<*pointer<<endl;
}

Copyconstructor::~Copyconstructor(){
    cout<<"Destroy : "<<*pointer<<endl;
    delete pointer;
}

int main(){
    Copyconstructor object;
    Copyconstructor object1 = object;
    return 0;
}
