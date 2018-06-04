#include <iostream>
#define pi 3.1416
using namespace std;

double area(int h,int w);
double area(int a);
double area(double r);

int main(){
    int h,w,a;
    double r;

    cout<<"Enter height and weight of rectangle: ";
    cin>>h>>w;
    cout<<"Area of rectangle is : "<<area(h,w)<<endl;

    cout<<"Entera side of square: ";
    cin>>a;
    cout<<"Area of square is : "<<area(a)<<endl;

    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle is : "<<area(r)<<endl;

    return 0;
}

double area(int h,int w){
    return h*w;
}

double area(int a){
    return a*a;
}

double area(double r){
    return pi*r*r;
}
