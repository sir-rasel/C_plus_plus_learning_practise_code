#include <iostream>
#include <string>
using namespace std;

template <class T,int size=10>
class Matrix{
    T store[size];
public:
    Matrix(){
        for(int i=0;i<size;i++) store[i]=0;
    }
    Matrix(T number){
        for(int i=0;i<size;i++) store[i]=(i+1)*number;
    }
    T GetTotal();
    T GetTotalSize();
    void print(){
        for(int i=0;i<size;i++) cout<<store[i]<<endl;
    }
};

template <class T,int size>
T Matrix<T,size>::GetTotal(){
    T temp=0;
    for(int i=0;i<size;i++) temp+=store[i];
    return temp;
}

template <class T,int size>
T Matrix<T,size>::GetTotalSize(){
    T temp=sizeof(store);
    return temp;
}

int main(){
    Matrix <int,20> object(5);
    object.print();
    cout<< "Total: "<<object.GetTotal()<<endl;
    cout<< "Total Size: "<<object.GetTotalSize()<<endl;
    return 0;
}
