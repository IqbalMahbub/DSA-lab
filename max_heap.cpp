#include <bits/stdc++.h>
using namespace std;
int tree[100];
class Tree{
    public:
int index(int item)
{
    for(int i=0;i<30;i++){
        if(tree[i]==item)
            return i;
    }
}
void root(int c){
    if(tree[1]=='\0')
        tree[1]=c;
    else{
        cout<<"This tree already has a root"<<endl;
    }
}
void left_child(int parent,int kye){
   int parent_indx=index(parent);
   tree[parent_indx*2]=kye;
}
void right(int parent ,int kye ){
    int parent_indx=index(parent);
   tree[(parent_indx*2)+1]=kye;
}
};
void display(){
    for(int i=0;i<100;i++){
        if(tree[i]=='\0')
           cout<<"-"<<" ";
        else  
          cout<<tree[i]<<"  ";
    }
    cout<<endl;        
}
int pos_last(){
    for(int i=100;i>0;i--)
        if(tree[i]!='\0')
            return i;
}
void Add_item(int item,int pos){

    tree[pos*2]=item;
    pos=pos*2;
    while(pos>1){
      int  par=pos/2;
        
            if(tree[pos]<=tree[par]){
                tree[pos]=item;
                return;
            }
            else{
                tree[pos]=tree[par];
                tree[par]=item;
                pos=par;
                  
            }
        }
        tree[1]=item;
            return;
        
    }
    

int main(){
    Tree tr;
    
    tr.root(38);
    tr.left_child(38,14);
    tr.right(38,42);
    tr.left_child(14,10);
    tr.left_child(10,7);
    tr.right(10,12);
    tr.left_child(12,11);
    tr.right(12,12);
    tr.left_child(42,40);
    tr.right(42,45);
    int n=pos_last();
    cout<<n<<endl;
    display();
    //search
    cout<<"Add item::"<<endl;
    int item;cin>>item;
   // search(item,n);
   Add_item(item,n);
    display();
}