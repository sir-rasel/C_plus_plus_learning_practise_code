#include <iostream>
using namespace std;

int main(){
    int *p;
    p=new int;
    p[0]=10;
    cout<<p[0]<<endl;
    delete (p);
    p=new int [10];
    for(int i=0;i<10;i++){
        p[i]=i;
    }
    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }
    delete [] p;
    return 0;
}
