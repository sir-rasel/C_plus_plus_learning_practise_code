#include <bits/stdc++.h>
using namespace std;

/// problem-1: print array reverse order
void reverseArrayPrint(int arr[],int i,int n){
    if(i==n) return;
    reverseArrayPrint(arr,i+1,n);
    printf("%d\n",arr[i]);
}

/// problem-2: print array by pairing first-last order
void pairingArrayPrint(int arr[],int i,int j){
    if(i>j) return;
    printf("%d %d\n",arr[i],arr[j]);
    pairingArrayPrint(arr,i+1,j-1);
}

/// problem-3: remove odd integer
void removeOddInteger(int arr[],int i,int &n){
    if(i==n) return;
    if(arr[i]%2==1){
        for(int j=i;j<n-1;j++) arr[j]=arr[j+1];
        n--;
        removeOddInteger(arr,i,n);
    }
    else removeOddInteger(arr,i+1,n);
}

/// problem-4: print polynomial series
void polynomialSeries(int i,int n){
    if(i==n) return;
    if(i==0 and i!=n-1) printf("1+");
    else if(i==0 and i==n-1) printf("1");
    else if(i==1 and i!=n-1) printf("x+");
    else if(i==1 and i==n-1) printf("x");
    else{
        if(i!=n-1) printf("x^i+");
        else printf("x^%d",i);
    }
    polynomialSeries(i+1,n);
}

/// problem-5: print polynomial series result
long long int polynomialSeriesResult(int i,int n,int x,int sum){
    if(i==n) return sum;
    sum+=pow(x,i);
    polynomialSeriesResult(i+1,n,x,sum);
}

/// problem-6: print factorial result
long long int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

/// problem-7: print fibonacci series result
long long int fibonacciSeriesResult(int n){
    if(n<=2) return 1;
    return fibonacciSeriesResult(n-1)+fibonacciSeriesResult(n-2);
}

/// problem-8: check prime or not
bool isPrime(int i,int srt,int n){
    if(n<2) return false;
    if(i>srt) return true;
    if(n%i==0) return false;
    return isPrime(i+1,srt,n);
}

/// problem-9: calculate gcd
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

/// problem-10: calculate lcm
int lcm(int a, int b, int m){
    if(a*m % b == 0) return a*m;
    return lcm(a, b, m+1);
}

/// problem-11: finding maximum number from array
int Maximum(int arr[], int start, int endd){
    if(start==endd) return arr[start];
    if (start==endd-1) return max(arr[start],arr[endd]);
    int mid = (start+endd)/2;
    int max1 = Maximum(arr,start,mid);
    int max2 = Maximum(arr,mid+1,endd);
    return max(max1,max2);
}

/// problem-12: finding second maximum number from array
int secondMaximum(int arr[], int start, int endd,int flag){
    if(start==endd) return arr[start];
    if (start==endd-1) return max(arr[start],arr[endd]);
    int mid = (start+endd)/2;
    int max1 = secondMaximum(arr,start,mid,flag+1);
    int max2 = secondMaximum(arr,mid+1,endd,flag+1);
    if(flag!=1) return max(max1,max2);
    else return min(max1,max2);
}

/// problem-13: recursive linear search
void linearSearch(int arr[], int start, int endd,int item){
    if(arr[start]==item) {
        printf("%d\n",start);
        return;
    }
    if(start>endd){
        printf("not found\n");
        return;
    }
    linearSearch(arr,start+1,endd,item);
}

/// problem-14: recursive binary search
int binarySearch(int arr[],int low,int hi,int item){
    if(low>hi) return -1;
    int mid=(hi+low)/2;
    if(arr[mid]==item) return mid;
    else if(arr[mid]<item) return binarySearch(arr,mid+1,hi,item);
    else return binarySearch(arr,low,mid-1,item);
}

/// problem-15: recursive reverse of an integer number
int reverseInteger(int n,int res){
    if(n==0) return res;
    res = res*10+n%10;
    return reverseInteger(n/10,res);
}

/// problem-16: recursive reverse string print
void printReverseString(string s,int pos){
    if(pos==s.size()) return;
    printReverseString(s,pos+1);
    printf("%c",s[pos]);
}

/// problem-17: palindrome checking
bool isPalindrome(string s,int start,int endd){
    if(start==endd) return true;
    if( ( isalpha(s[start]) or isdigit(s[start]) )==false) return isPalindrome(s,start+1,endd);
    if( ( isalpha(s[endd]) or isdigit(s[endd]) )==false) return isPalindrome(s,start,endd-1);
    if(s[start]==s[endd]) return isPalindrome(s,start+1,endd-1);
    return false;
}

/// problem-18: strlen,strcmp,strcpy,strcat implementation
int strLen(string s,int pos=0){
    if(s[pos]=='\0') return pos;
    return strLen(s,pos+1);
}

int strCmp(string first,string second,int pos=0){
    if(first[pos]=='\0' and second[pos]=='\0') return 0;
    if(first[pos]!=second[pos]) return first[pos]-second[pos];
    return strCmp(first,second,pos+1);
}

/// problem-19: palindrome checking
void fibonnaciTreeTraversal(int n){
//    printf("%d ",n); /// Pre-order traversal
    if(n<=2){
        printf("%d ",n);
        return;
    }
    fibonnaciTreeTraversal(n-2);
    printf("%d ",n); /// in order traversal
    fibonnaciTreeTraversal(n-1);
//    printf("%d ",n); /// post order traversal
}

/// problem-20: tower of hanoi
void towerOfHanoi(int n,char a,char b,char c){
    if(n==1) {
        printf("%c -> %c\n",a,c);
        return;
    }
    towerOfHanoi(n-1,a,c,b);
    printf("%c -> %c\n",a,c);
    towerOfHanoi(n-1,b,a,c);
}

int main(){
    int arr[]={11,15,25,35,40};
    int n=5;
    /// p-1 call :  reverseArrayPrint(arr,0,n);
    /// p-2 call :  pairingArrayPrint(arr,0,n-1);
    /* p-3 call :
    removeOddInteger(arr,0,n);
    for(int i=0;i<n;i++) printf("%d\n",arr[i]); */
    /// p-4 call :  polynomialSeries(0,n);
    /// p-5 call :  cout<< "Result : "<<polynomialSeriesResult(0,n,2,0);
    /// p-6 call :  cout<< "Result : "<<factorial(n);
    /// p-7 call :  cout<< "Result : "<<fibonacciSeriesResult(n);
    /// p-8 call :  cout<< "Result : "<<isPrime(2,3,n);
    /// p-9 call :  cout<< "Result : "<<gcd(3,9);
    /// p-10 call : cout<< "Result : "<<lcm(3,9,1);
    /// p-11 call : cout<< "Result : "<<Maximum(arr,0,4);
    /// p-12 call : cout<< "Result : "<<secondMaximum(arr,0,4,0);
    /// p-13 call : linearSearch(arr,0,4,50);
    /// p-14 call : cout<< "Result : "<<binarySearch(arr,0,4,15);
    /// p-15 call : cout<< "Result : "<<reverseInteger(15452,0);
    /// p-16 call : printReverseString("hello",0);
    /// p-17 call : cout<< "Result : "<<isPalindrome("madam, i'm adam",0,14);
    /// p-18 call : cout<< "Result : "<<strLen("madam, i'm adam");
    /// p-18 call : cout<< "Result : "<<strCmp("madam","madam");
    /// p-19 call : fibonnaciTreeTraversal(n);
    /// p-20 call : towerOfHanoi(3,'a','b','c');

    return 0;
}
