#include <bits/stdc++.h>
using namespace std;
int tree[10];
int root(int key)
{
    if(tree[0]=='\0')
        tree[0]=key;
    else
        cout<<"Already Had a root ";
    return 0;
}
void left(int key,int parent_index){
    tree[(parent_index*2)+1]=key;
} 
void right(int key,int parent_index){
    tree[(parent_index*2)+2]=key;
} 
void print(){
    for(int i=0;i<10;i++)
    {
        if(tree[i]!='\0')
            cout<<tree[i];
        else
            cout<<"-";
    }
}
int main()
{
   root(1);
   left(2,0);
   right(3,0);
   left(4,1);
   right(5,1);
   right(6,2);
    print();
}
