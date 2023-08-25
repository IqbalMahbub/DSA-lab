#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int ,int>>v;
    v.push_back({1,6});
     v.push_back({6,7});
      v.push_back({1,2});
      sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;



    vector<tuple<int ,int,int>>v1;
    v1.push_back({1,6,5});
     v1.push_back({6,7,8});
      v1.push_back({1,2,6});
      sort(v1.begin(),v1.end());
    for(int i=0;i<v.size();i++)
        cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i]) <<endl;
}
}
