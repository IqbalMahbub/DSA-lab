#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a

#include <bits/stdc++.h>
using namespace std;
unordered_map<int,list<int>>adj;
void addEdg(int u,int v,bool direction){
    adj[u].push_back(v);
    if(direction==0)
    {
        adj[v].push_back(u);
    }
}
void printGraph(){
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto j:i.second)
            cout<<j<<",";
        cout<<endl;
    }
}
int main(){
    int node,edg;
    cout<<"enter the number of nodes"<<endl;
       cin>>node;
     cout<<"enter the number of edg"<<endl;
        cin>>edg;

    
    for(int i=0;i<edg;i++)
    {
        int u,v;
        cin>>u>>v;
        addEdg(u,v,0);
    }
    printGraph();
}