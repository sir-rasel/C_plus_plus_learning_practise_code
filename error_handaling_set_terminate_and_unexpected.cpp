#include <iostream>
using namespace std;

double divide(double numerator,double denominator) throw(int) {
    try{
        if(denominator==0) throw denominator;
        return double(numerator)/denominator;
    }
    catch(int){
        cout<< "Can't divide by zero."<<endl;
        return -1;
    }
}

void terminate_massage(){
    cout<< "Terminated"<<endl;
}

void unexpected_massage(){
    cout<< "Unexpected"<<endl;
}

int main(){

    set_terminate(terminate_massage);
    set_unexpected(unexpected_massage);

    double numerator,denominator;
    cout << "Enter Numerator and Denominator : ";
    cin>>numerator>>denominator;
    double result = divide(numerator,denominator);
    cout<< "Result is : " <<result<<endl;
    return 0;
}
