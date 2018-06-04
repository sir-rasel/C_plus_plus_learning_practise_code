#include <iostream>
using namespace std;

class Book{
    int price;
    int pages;
    int weight;
public:
    void set(int pr,int pa,int w);
    void get();
};

void Book::set(int pr,int pa,int w){
    price=pr;
    pages=pa;
    weight=w;
}

void Book::get(){
    cout<<"Price : "<<price<<" TK"<<endl;
    cout<<"Pages : "<<pages<<" piece"<<endl;
    cout<<"Weight : "<<weight<<" KG"<<endl;
}

int main(){
    Book a;
    int pr,pa,w;
    cout<<"Enter price,pages,weight: ";
    cin>>pr>>pa>>w;
    a.set(pr,pa,w);
    a.get();
    return 0;
}
