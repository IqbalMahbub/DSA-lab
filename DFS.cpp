#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a

#include <bits/stdc++.h>
using namespace std;
unordered_map<int,list<int>>adjlist;
void getNode(int u,int v,int d)
{
    adjlist[u].push_back(v);
    if(d==0)
        adjlist[v].push_back(u);
}
void printGraph(){
    for(auto i:adjlist)
    {
        cout<<i.first<<"->";
        for(auto j:i.second)
        cout<<j<<",";
        cout<<endl;
    }
}
void dfs(int node,unordered_map<int ,bool>&visited,vector<int>&ans){
    ans.push_back(node);
    visited[node]=true;
    for(auto i:adjlist[node]){
        if(!visited[i])
            dfs(i,visited,ans);
    }
}
int main(){
    int node,edg;
    cin>>node>>edg;
    int direction;
    cin>>direction;//0 if unorderd ;else 1
    for(int i=0;i<edg;i++)
    {
        int u,v;
        cin>>u>>v;
        getNode(u,v,direction);
    }
    printGraph();
    unordered_map<int ,bool>visited;
    vector<int>ans;
    for(int i=0;i<node;i++)
    {
        if(!visited[i])
            dfs(i,visited,ans);
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<"  ";
}