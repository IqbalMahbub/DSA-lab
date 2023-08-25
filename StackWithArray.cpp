#include<bits/stdc++.h>
using namespace std;
#define N 5
int top=-1;
int stc[N];
void push(){
    int item;
    cin>>item;
    if(top>=N-1){
        cout<<"stc overflow:"<<endl;
    }
    else{
        top++;
        stc[top]=item;
    }
}
void pop(){
    int item;
    if(top==-1){
        cout<<"stc underflow"<<endl;
    }
    else{
        item=stc[top];
        top--;
    }
}
void peek(){
    if(top==-1){
        cout<<"stc is empty"<<endl;
    }
    else{
        cout<<stc[top];
    }
}
void disply(){
    for(int i=top;i>=0;i--){
        cout<<stc[i]<<endl;
    }

}
int main()
{
    int ch;


    do{
            cout<<"Enter Your option(1 for puush,2 for pop,3 for top/peek and 4 for trava=ersing)"<<endl;
          cin>>ch;
        switch(ch){

            case 1:push();
                    break;
            case 2: pop();
                    break;
            case 3:peek();
                   break;
            case 4:disply();
                    break;
            default :
                cout<<"invalide option"<<endl;

        }
    }while(ch!=0);{
      cin>>ch;
    }
}
