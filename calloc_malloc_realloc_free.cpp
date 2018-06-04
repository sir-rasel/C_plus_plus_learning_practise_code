#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int *p;
    p=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        cin>>p[i];
    }
    cout<<"Number are: ";
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    p=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        cin>>p[i];
    }
    cout<<"Number are: ";
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    p=(int*)realloc(p,10*sizeof(int));
    for(int i=5;i<10;i++){
        cin>>p[i];
    }
    cout<<"Number are: ";
    for(int i=0;i<10;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    free(p);
    return 0;
}
