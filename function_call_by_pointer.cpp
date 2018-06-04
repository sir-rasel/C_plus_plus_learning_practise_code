#include <iostream>
using namespace std;

void area(int h,int w,double *a);

int main(){
    int h,w;
    cout<<"Enter height and weight: ";
    cin>>h>>w;
    double a;
    area(h,w,&a);
    cout<<"Area is : "<<a<<endl;
    return 0;
}

void area(int h,int w,double *a){
    *a = h*w;
}

