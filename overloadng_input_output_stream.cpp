#include <iostream>
using namespace std;

class rectangle{
    int height;
    int weight;
public:
    friend istream &  operator >>(istream &,rectangle &);
    friend ostream &  operator <<(ostream &,rectangle &);
};

istream & operator >>(istream &symbol,rectangle &object){
    symbol >> object.height >> object.weight;
    return symbol;
}
ostream & operator <<(ostream &symbol,rectangle &object){
    symbol << "Height : "<< object.height << endl << "Weight : "<< object.weight;
    return symbol;
}
int main(){
    rectangle object;
    cin>>object;
    cout<<object<<endl;
    return 0;
}
