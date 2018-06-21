#include <iostream>
#include <string>
using namespace std;

class Computer{
    string model;
    double displaysize;
    int price;
public:
    Computer(){
        model="Unknown";
        displaysize=0;
        price=0;
    }
    void set(string model,double displaysize,int price){
        this->model=model;
        this->displaysize=displaysize;
        this->price=price;
    }
    void get(){
        cout<< "Computer model: "<<model<<endl;
        cout<< "Display size: "<<displaysize<<"Inch."<<endl;
        cout<< "Price: "<<price<< "tk"<<endl;
    }
    int getprice(){
        return price;
    }
};

class Mobile{
    string model;
    double displaysize;
    int price;
public:
    Mobile(){
        model="Unknown";
        displaysize=0;
        price=0;
    }
    void set(string model,double displaysize,int price){
        this->model=model;
        this->displaysize=displaysize;
        this->price=price;
    }
    void get(){
        cout<< "Mobile model: "<<model<<endl;
        cout<< "Display size: "<<displaysize<<" Inch."<<endl;
        cout<< "Price: "<<price<< " tk"<<endl;
    }
    int getprice(){
        return price;
    }
};

class Purchase:public Computer,public Mobile{
    int totalcost;
public:
    Purchase(){
        totalcost=0;
    }
    void set(string model,double displaysize,int price,string model1,double displaysize1,int price1){
        Computer::set(model,displaysize,price);
        Mobile::set(model1,displaysize1,price1);
        totalcost=price+price1;
    }
    void get(){
        Computer::get();
        Mobile::get();
        cout << "Total cost: "<<totalcost<< " tk"<<endl;
    }
};

void getinformation(string &model,double &displaysize,int &price,string &model1,double &displaysize1,int &price1){
    cout<< "Enter Purchase Information"<<endl;
    cout<< "Computer Model: ";
    cin>>model;
    cout<< "Computer display size: ";
    cin>>displaysize;
    cout<< "Computer price: ";
    cin>>price;
    cout<< "Mobile Model: ";
    cin>>model1;
    cout<< "Mobile display size: ";
    cin>>displaysize1;
    cout<< "Mobile price: ";
    cin>>price1;
}

int main(){
    string model,model1;
    double displaysize,displaysize1;
    int price,price1;
    getinformation(model,displaysize,price,model1,displaysize1,price1);
    cout<<endl;
    Purchase object;
    object.set(model,displaysize,price,model1,displaysize1,price1);
    object.get();
    return 0;
}
