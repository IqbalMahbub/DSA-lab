#include <bits/stdc++.h>
using namespace std;
int precedence(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}
int main()
{
    string s;
    cin>>s;
    s.push_back(')');
    stack<char> st;
    st.push('(');
    vector<char>p;
    int i=0;
    while (!st.empty())
    {
        if(s[i]>='A'&&s[i]<='Z')
            p.push_back(s[i]);

        else if(s[i]=='(')
            st.push(s[i]);
         else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
        {
            while (st.top()!='(')
            {
                if(precedence(st.top())>=precedence(s[i]))
                {
                     p.push_back(st.top());
                     st.pop();
                }
                
            }
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while (st.top()!='(')
            {
                p.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        i++;

    }
    for(int k=0;k<p.size();k++)
        cout<<p[k];



}
