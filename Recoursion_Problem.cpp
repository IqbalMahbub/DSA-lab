#include <bits/stdc++.h>
using namespace std;
double factorial(int n){
    if(n==1)
        return 1;
    return n*factorial(n-1);
}
double fib(int x){
    if(x==0||x==1)
        return x;
    return fib(x-1)+fib(x-2);
}
 void towerOfHanoi(int n,char a,char b,char c){
    if(n==1)
        cout<<a<<"-->"<<c<<endl;
    else{
        towerOfHanoi(n-1,a,c,b);
        cout<<a<<"-->"<<c<<endl;
        towerOfHanoi(n-1,b,a,c);
    }
 }
int main(){
   /* int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    int x;
    cin>>x;
    cout<<x<<"'th Fibonacci number   "<<fib(x)<<endl;
    */
    int disk;
    cin>>disk;
    towerOfHanoi(disk,'A','B','C');
}