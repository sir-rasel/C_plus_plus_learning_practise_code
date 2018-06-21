#include <iostream>
#include <string>
using namespace std;

class Taxes{
protected:
    double amount;
public:
    void set(double amount){
        this->amount=amount;
    }
    double get(){
        return amount;
    }
};

class Product:public Taxes{
protected:
    double price;
    double amount;
public:
    void set(double price){
        this->price=price;
        amount=price + price*(Taxes::get()/100.0);
    }
    void get(){
        cout<< "Product total cost: "<<amount<<endl;
    }
};

int main(){
    Product object;
    double price,tax;
    cout<< "Enter price and tax of product: ";
    cin>>price>>tax;
    object.Taxes::set(tax);
    object.set(price);
    object.get();
    return 0;
}
