
#include<bits/stdc++.h>
using namespace std;
int precedence(char op)
{
    switch (op) {
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
    cout<<"Input your expression"<<endl;
    cin>>s;



    stack<char>st;
     int count=0;

    for(int i=0;count<=s.length();i++)
    {
        int ch =precedence(s[i]);
        if(ch == -1){
            cout<<s[i];
            count++;

        }
        else{
            if(st.empty()){
                st.push(s[i]);
                continue;
            }


            if(s[i]=='('){
                st.push(s[i]);
                continue;
            }
            if(s[i]==')'){

                while (st.top()!='(')
                {
                    cout<<st.top();
                    count=count+2;
                    st.pop();
                }
                st.pop();
                continue;

            }
            if(precedence(st.top())<precedence(s[i]))
             {
                st.push(s[i]);
                continue;
             }
            else if(precedence(st.top())>=precedence(s[i])&&i!=s.length()+1)
                {
                    cout<<st.top();
                    count++;
                    st.pop();
                    st.push(s[i]);
                    continue;
                }
            while (!st.empty())
            {
                cout<<st.top();
                count++;
                st.pop();
            }


        }
    }

}
