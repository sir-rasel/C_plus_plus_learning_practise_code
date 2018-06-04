#include <iostream>
using namespace std;

class reactangle{
    int height;
    int weight;
public:
    reactangle();
    reactangle(int height,int weight=1);
    int area();
    ~reactangle();
};

reactangle::reactangle(){
    height=0;
    weight=0;
}
reactangle::reactangle(int height,int weight){
    this->height=height;
    this->weight=weight;
}
int reactangle::area(){
    return height*weight;
}

reactangle::~reactangle(){
    cout<<"Destroy: "<<area()<<endl;
}

int main(){
    reactangle a;
    cout<<"Area is : "<<a.area()<<endl;
    reactangle b(10,5);
    cout<<"Area is : "<<b.area()<<endl;
    reactangle c(10);
    cout<<"Area is : "<<c.area()<<endl;
    return 0;
}
