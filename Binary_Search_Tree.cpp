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
    for(int i=0;i<30;i++){
        if(tree[i]=='\0')
           cout<<"-"<<" ";
        else  
          cout<<tree[i]<<"  ";
    }
    cout<<endl;        
}
void search(int item,int root){

        if(item==tree[root]){
                cout<<"The index is found at index   "<<root<<endl;
                return;
           }
        else{
            
            if(tree[root]>item){
                if(tree[root*2]!='\0')
                   search(item,root*2);
                else{
                    cout<<"item not found"; 
                      tree[root*2]=item;                                  
                }

            }
           
           else{
               if(tree[(root*2)+1]!='\0')
                   search(item,(root*2)+1);
               else{
                cout<<"item not found";
                   tree[(root*2)+1]=item;
               }
                  

             
         }
    }
    
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

    display();
    //search
    cout<<"Search item::"<<endl;
    int item;cin>>item;
    search(item,1);
    display();
}