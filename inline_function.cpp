#include <iostream>
using namespace std;

inline double area(int h,int w);

int main(){
    int h,w;
    cout<<"Enter height and weight: ";
    cin>>h>>w;
    double a=area(h,w);
    cout<<"Area is : "<<a<<endl;
    return 0;
}

inline double area(int h,int w){
    return h*w;
}
