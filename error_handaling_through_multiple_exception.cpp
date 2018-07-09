#include <iostream>
using namespace std;

int main(){
    double numerator,denominator;
    cout << "Enter Numerator and Denominator : ";
    cin>>numerator>>denominator;
    try{
        if(denominator==0) throw 0;
        if(denominator==0.1) throw denominator;
        double result = double(numerator)/denominator;
        cout<< "Result is : "<<result<<endl;
    }
    catch(int){
        cout<< "Can't divide by zero (integer)."<<endl;
    }
    catch(double){
        cout<< "Can't divide by zero (double)."<<endl;
    }
    return 0;
}
