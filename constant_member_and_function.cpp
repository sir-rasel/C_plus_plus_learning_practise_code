#include <iostream>
using namespace std;

class constant{
    int a;
public:
    constant();
    void get() const;
    void set(int num);
};

constant::constant(){
    a=0;
}
void constant::set(int num){
    a=num;
}
void constant::get()const{
    cout<<a<<endl;
}

int main(){
    constant a;
    a.get();
    a.set(5);
    a.get();
    return 0;
}
