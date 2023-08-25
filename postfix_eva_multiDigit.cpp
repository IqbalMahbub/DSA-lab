#include <bits/stdc++.h>
using namespace std;
int top;
double stk[100];
class my_stk{
    public:
        void push(double item){
            top=top+1;
            stk[top]=item;
        }
        void pop(){
            top=top-1;
        }
        double topp(){
            return stk[top];
        }
};
double ret_num(string s){
    double num=0;
    int k=1;
    for(int i=s.size()-1;i>=0;i--){
        num+=(s[i]-'0')*k*1.0;
        k=k*10;
    }
    return num;
}
double operation(string s,double b,double a){
    if(s=="+")
        return a+b;
    if(s=="-")
        return a-b;
    if(s=="*")
        return a*b;
    if(s=="/")
        return a/b;
    if(s=="^")
        return pow(a,b);
    
    return INT_MIN;
    
}
int main(){
   my_stk st;
   string s;
   while (1)
   {
        cin>>s;
        if(s==")")break;
        if(s[0]>='0' && s[0]<=57){
            double num = ret_num(s);
            st.push(num);
        }
        else{
            double x=st.topp();
            st.pop();
            double y=st.topp();
            st.pop();
            double ans=operation(s,x,y);
            st.push(ans);
        }
   }
   cout<<st.topp();

}