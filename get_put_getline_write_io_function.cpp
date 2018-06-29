#include <iostream>
#include <string>
using namespace std;

int main(){
    char ch,name1[30];
    string name;

    /// get() and put()
    cout<< "Enter Charecter: ";
    ch=cin.get();
    cout << "Charecter is : ";
    cout.put(ch);
    cout<<endl;
    cin.get();

    /// get() and put()
    cout<< "Enter Charecter: ";
    cin.get(ch);
    cout << "Charecter is : ";
    cout.put(ch);
    cout<<endl;
    cin.get();

    /// getline()
    cout<< "Enter Name: ";
    cin.getline(name1,sizeof(name1),'.');
    cout<< "Name is: ";
    cout.write(name1,6);
    cout<<endl;
    cin.get();

    /// getline()
    cout<< "Enter name: ";
    getline(cin,name);
    cout<< "Name is: ";
    cout<<name<<endl;

    return 0;
}
