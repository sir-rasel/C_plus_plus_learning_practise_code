#include <iostream>
using namespace std;

class square{
    int side;
public:
    square(){
        side=0;
    }
    square(int side){
        this->side=side;
    }
    void print(){
        cout<<"Length of Side : "<<side<<endl;
    }
    operator int(){
        return (side*side);
    }
};

class rectangle{
    int height;
    int weight;
public:
    rectangle(){
        height=0;
        weight=0;
    }
    rectangle(int height,int weight){
        this -> height = height;
        this -> weight = weight;
    }
    rectangle(int side){
        height=side;
        weight=side;
    }
    void print(){
        cout<<"Height : "<<height<<endl;
        cout<<"Weight : "<<weight<<endl;
    }
    int getside(){
        return (height+weight);
    }
    operator square(){
        square object(height);
        return object;
    }
    operator int(){
        return (height*weight);
    }
};

int main(){
    rectangle object(5,6);
    int area = object;
    cout<<"Area is : "<<area<<endl;
    object = 10;
    object.print();

    square object1;
    object1 = 15;
    object1.print();
    int area1 = object1;
    cout<<"Area is : "<<area1<<endl;

    object1 = object;
    object1.print();
    return 0;
}
