#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10];
bool visited[10];
void dfs (int s)
{
    visited[s]= true;
    cout<<s<<" ";
    for(int  i = 0;i<adj[s].size();i++){
        if(visited[adj [s][i]]==false)
            dfs(adj[s][i]);
    }

}

void initialize(){
for(int i = 0; i<10;i++)
visited[i] = 0;

}

int main(){
int nodes, edges,x,y, cc=0;
cout<<"Nodes "<<endl;
cin>> nodes;
cout<<"edges "<<endl;
cin>>edges;
for(int i =0; i<edges ;i++){
    cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}
initialize();
for(int i = 1;i<=nodes;i++){
    if(visited[i]==false){
            dfs(i);
        cc++;
    }
    cout<<endl;
}
cout<< "NO of CC "<<cc<<endl;
return 0;
}
