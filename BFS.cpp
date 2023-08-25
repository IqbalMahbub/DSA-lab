#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a

#include <bits/stdc++.h>
using namespace std;
unordered_map <int,list<int>>adj;
void makingEdg(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(){
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto j:i.second)
            cout<<j<<",";
        cout<<endl;
    }
}
void bfs(unordered_map <int,list<int>> &adj,unordered_map<int,bool> &visited,vector<int>&ans,int node){
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while (!q.empty()){
        int frontNode =q.front();
        q.pop();
        //store frontNode to the ans 
        ans.push_back(frontNode);
        

        // travers the neibhour of frontNode
        for(auto i:adj[frontNode])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=1;

            }
        }
    }    
    
}
int main()
{
    int node,edg;
    cin>>node>>edg;
    for(int i=0;i<edg;i++)
    {
        int u,v;
        cin>>u>>v;
        makingEdg(u,v);
    }
    printGraph();
    unordered_map<int,bool>visited;
    vector<int>ans;
    //travers all component of a graph
    for(int i=0;i<node;i++)
    {
        if(!visited[i]){
            bfs(adj,visited,ans,i);
        }
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
}