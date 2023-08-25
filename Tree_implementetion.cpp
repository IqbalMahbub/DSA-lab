#include <bits/stdc++.h>
using namespace std;

char tree[30];
class Tree{
    public:
int index(char item)
{
    for(int i=0;i<30;i++){
        if(tree[i]==item)
            return i;
    }
}
void root(char c){
    if(tree[1]=='\0')
        tree[1]=c;
    else{
        cout<<"This tree already has a root"<<endl;
    }
}
void left_child(char parent,char kye){
   int parent_indx=index(parent);
   tree[parent_indx*2]=kye;
}
void right(char parent ,char kye ){
    int parent_indx=index(parent);
   tree[(parent_indx*2)+1]=kye;
}
};
 void display(){
    for(int i=0;i<30;i++){
        if(tree[i]=='\0')
           cout<<"-"<<" ";
        else  
          cout<<tree[i]<<"  ";
    }
    cout<<endl;        
}
int index(char item)
{
    for(int i=0;i<30;i++){
        if(tree[i]==item)
            return i;
    }
}
//Function for preOrder traversel
void preorder_Tr(){
    stack<char>st;
   vector<char>v;
    st.push('\0');
     int ptr=1;
     while (tree[ptr]!='\0')
     {
        v.push_back(tree[ptr]);
        if(tree[(ptr*2)+1]!='\0')
            st.push(tree[(ptr*2)+1]);
        if(tree[ptr*2]!='\0')
            ptr=ptr*2;
        else{
            ptr=index(st.top());
            st.pop();
        }
     }
     for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
}
void inOrder_Tr(){
    stack<char>st;
    vector<char>v;
    st.push('\0');
    int ptr=1;
    lebel:
        while(tree[ptr]!='\0'){
        st.push(tree[ptr]);
        ptr=ptr*2;
        }
         ptr=index(st.top());
        
         //cout<<st.top();
          while (tree[ptr]!='\0')
         {
            v.push_back(tree[ptr]);
              st.pop();
              
             if(tree[(ptr*2)+1]!='\0'){
               ptr=(ptr*2)+1;
               goto lebel;
             }
             
            ptr=index(st.top());
          }
         
    
    
   
     for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
    
}

void postOrder_Tr(){
    stack<char>st;
    vector<char>v;
    st.push('\0');
    int ptr=1;
    while(!st.empty()){
        st.push(tree[ptr]);
         if(tree[(ptr*2)+1]!='\0')
            st.push(-tree[(ptr*2)+1]);
        if(tree[ptr*2]!='\0')
            st.push(tree[ptr*2]);
        ptr=ptr*2;
    }
    ptr=index(st.top());
    while (tree[ptr]!='\0'){

        if(tree[ptr]>0){
        v.push_back(tree[ptr]);
            st.pop(); 
              
        }
        else{
            st.pop();
            st.push(-)
        }
        
           
    }
    
         
    
    
   
     for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
}
int main(){
    
    //make a tree;
   cout<<tree[1];
    Tree tr;
   
    tr.root('A');
    tr.left_child('A','B');
    tr.right('A','C');
    tr.left_child('B','D');
    tr.right('B','E');
    tr.left_child('E','H');
    tr.left_child('C','F');
    tr.right('C','G');
    display();
    //PreOrder Traversal
    cout<<"PreOrder Traversal"<<endl;
    preorder_Tr();
    //inOrder Traversal
    cout<<"InOrder Traversal"<<endl;
    inOrder_Tr();
    cout<<"PostOrder Traversal"<<endl;



}