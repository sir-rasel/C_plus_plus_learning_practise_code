#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double number;
    cout<< "Enter a double number: ";
    cin>>number;
    cout<<number<<endl;

    /// precision()
    cout.precision(3);
    cout<<number<<endl;
    cout<<number<<endl;

    cout.precision(2);
    cout<<number<<endl;
    cout<<number<<endl;

    cout.precision(0);
    cout<<number<<endl;
    cout<<number<<endl;

    /// setprecision()
    cout<<setprecision(3)<<number<<endl;
    cout<<setprecision(0)<<number<<endl;

    return 0;
}
