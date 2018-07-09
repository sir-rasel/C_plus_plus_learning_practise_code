#include <iostream>
using namespace std;

class Exception{
    int denominator;
public:
    Exception(int denominator){
        this->denominator=denominator;
    }
    void error_massage(){
        cout<< "Denominator is : "<<denominator<<endl;
        cout<< "Can't divide by zero."<<endl;
    }
};

double divide(int numerator,int denominator){
    try{
        if(denominator==0) throw Exception(denominator);
        return double(numerator)/denominator;
    }
    catch(Exception obj){
        obj.error_massage();
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
