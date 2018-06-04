#include<iostream>
using namespace std;

long long int factorial(int n);

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    long long int fact;
    fact=factorial(n);
    cout<<"Factorial of number : "<<fact<<endl;
    return 0;
}

long long int factorial(int n){
    if(n<2) return n;
    return n*factorial(n-1);
}
