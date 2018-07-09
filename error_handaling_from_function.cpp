#include <iostream>
using namespace std;

double divide(int numerator,int denominator){
    try{
        if(denominator==0) throw denominator;
        return double(numerator)/denominator;
    }
    catch(int){
        cout<< "Can't divide by zero."<<endl;
        return -1;
    }
}

int main(){
    int numerator,denominator;
    cout << "Enter Numerator and Denominator : ";
    cin>>numerator>>denominator;
    cout<< "Result is : " <<divide(numerator,denominator)<<endl;
    return 0;
}
