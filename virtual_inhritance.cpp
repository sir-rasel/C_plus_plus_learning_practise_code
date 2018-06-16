#include <iostream>
#include <string>
using namespace std;

class Product{
public:
    string brandname;
    double price;
};

class Television:virtual public Product{
public:
    double televisionprice;
    string televisionmodel;
};


class Computer:virtual public Product{
public:
    double computerprice;
    string computermodel;
};

class Purchase:public Television,public Computer{
public:
    Purchase(){
        brandname = "Unknown";
        price = 0;
        televisionprice = 0;
        computerprice = 0;
        televisionmodel = "Unknown";
        computermodel = "Unknown";
    }
    void setpurchaseinformation(string brandname,string televisionmodel,double televisionprice,string computermodel,double computerprice){
        this->brandname = brandname;
        this->televisionprice = televisionprice;
        this->computerprice = computerprice;
        price = (televisionprice + computerprice);
        this->televisionmodel = televisionmodel;
        this->computermodel = computermodel;
    }
    void getpurchaseinformation(){
        cout<<"Brand Name: "<<brandname<<endl;
        cout<< "Television Model: "<<televisionmodel<<endl;
        cout<< "Computer Model: "<<computermodel<<endl;
        cout << "Total Cost: "<<price<<endl;
    }
};

void getinformation(string &brandname,string &televisionmodel,double &televisionprice,string &computermodel,double &computerprice){
    cout<< "Brand name: ";
    cin>>brandname;
    cout<< "Television model: ";
    cin>>televisionmodel;
    cout << "Television price: ";
    cin>>televisionprice;
    cout<< "Computer model: ";
    cin>>computermodel;
    cout<< "Computer price: ";
    cin>>computerprice;
}

int main(){
    Purchase object;
    string brandname,televisionmodel,computermodel;
    double televisionprice,computerprice;
    getinformation(brandname,televisionmodel,televisionprice,computermodel,computerprice);
    object.setpurchaseinformation(brandname,televisionmodel,televisionprice,computermodel,computerprice);
    cout<<endl;
    object.getpurchaseinformation();
    return 0;
}
