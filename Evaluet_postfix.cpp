#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    s.push_back(')');
    stack<int>st;
    
    for(int i=0;s[i]!=')';i++){
        if(s[i]==',')
            continue;
        if(!(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'))
          {
            st.push(s[i]-'0');
            cout<<st.top()<<endl;
          }
        else
            {
                int y=(int)st.top();
                st.pop();
                int x=(int)st.top();
                st.pop();
                //cout<<x<<endl<<y;
                int ans;
                if(s[i]=='+')
                    ans=x+y;
                else if(s[i]=='-')
                    ans=x-y;
                else if(s[i]=='*')
                    ans=x*y;
                else if(s[i]=='/')
                    ans=x/y;
                else if(s[i]=='^')
                    ans=pow(x,y);
                //cout<<ans<<endl;
                st.push(ans);
                
            }
    }
    int f_ans=(int)st.top();
    cout<<f_ans;
}