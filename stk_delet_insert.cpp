#include <bits/stdc++.h>
using namespace std;
int tp=0;
int stk[1000];
class my_stk
{
public:
    void push(int item)
    {
        stk[tp] = item;
        tp = tp + 1;
    }
    void pop()
    {
        tp = tp - 1;
    }
    int top()
    {
        return stk[tp];
    }
};
void display()
{
    for (int i = 0; i < tp; i++)
        cout << stk[i] << endl;
        cout<<endl;
}
int main()
{
    my_stk st; // declar object

    // insert in stack
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int item;
        cin >> item;
        st.push(item);
    }
    display();
    st.pop();

    display();

     st.push(12);
    display();

}