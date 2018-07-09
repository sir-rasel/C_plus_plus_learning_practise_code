#include <iostream>
using namespace std;

double divide(int numerator,int denominator){
    try{
        if(denominator==0) throw denominator;
        return double(numerator)/denominator;
    }
    catch(int){
        cout<< "Can't divide by zero."<<endl;
        throw;
    }
}

int main(){
    int numerator,denominator;
    cout << "Enter Numerator and Denominator : ";
    cin>>numerator>>denominator;
    try{
        double result = divide(numerator,denominator);
        cout<< "Result is : " <<result<<endl;
    }
    catch(int){
        cout<< "Denominator is zero"<<endl;
    }
    return 0;
}
