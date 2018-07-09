#include <iostream>
using namespace std;

int main(){
    int numerator,denominator;
    cout << "Enter Numerator and Denominator : ";
    cin>>numerator>>denominator;
    try{
        if(denominator==0) throw denominator;
        double result = double(numerator)/denominator;
        cout<< "Result is : "<<result<<endl;
    }
    catch(int){
        cout<< "Can't divide by zero."<<endl;
    }
    return 0;
}
