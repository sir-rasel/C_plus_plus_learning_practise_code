#include <iostream>
using namespace std;

namespace myNameSpace{
    double divide(double numerator,double denominator){
        return numerator/denominator;
    }
    double multiply(double firstnumber,double secondnumber){
        return firstnumber*secondnumber;
    }
}

/// merging with previous mynamespace automatically

namespace myNameSpace{
    double add(double firstnumber,double secondnumber){
        return firstnumber+secondnumber;
    }
    double subtract(double firstnumber,double secondnumber){
        return firstnumber-secondnumber;
    }
}

using namespace myNameSpace;

int main(){
    double firstNumber,secondNumber;
    cout<< "Enter two number : ";
    cin>>firstNumber>>secondNumber;
    cout<< "Addition : "<<add(firstNumber,secondNumber)<<endl;
    cout<< "Subtraction : "<<subtract(firstNumber,secondNumber)<<endl;
    cout<< "Division : "<<divide(firstNumber,secondNumber)<<endl;
    cout<< "Multiplication : "<<multiply(firstNumber,secondNumber)<<endl;
    return 0;
}
