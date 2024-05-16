#include<bits/stdc++.h>
#define MAX_N 20001
using namespace std;
int n , m;
struct Node{
vector<int> adj;
vector<int> rev_adj;
};
Node g[MAX_N];
stack <int>S;
bool visited[MAX_N];
int nc =0;
void dfs1(int x){
visited[x] = true;
for(int i =0; i<g[x].adj.size();i++){
    if(!visited[g[x].adj[i]])
        dfs1(g[x].adj[i]);
}
S.push(x);
}
void dfs2(int x){
    cout<<x;
visited[x] = true;
for(int i =0; i<g[x].rev_adj.size();i++){
    if(!visited[g[x].rev_adj[i]])
        dfs2(g[x].rev_adj[i]);
}
}
void kr(){
    for(int i = 1; i<=n;i++)
    visited[i]= false;
for(int i = 1; i<=n;i++)
    if(!visited[i])
    dfs1(i);
for(int i = 1; i<=n;i++)
    visited[i]= false;
    while(!S.empty()){
        int v = S.top();
        S.pop();
        if(!visited[v]){
            cout<<nc<<" ";
            dfs2(v);
            nc++;
            cout<<endl;
        }
    }
}

int main(){
cin>>n>>m;
int a,b;
while(m--){
    cin>>a>>b;
    g[a].adj.push_back(b);

    g[b].rev_adj.push_back(a);

    }
    kr();
    cout<<"No of components"<<nc<<endl;
    return 0;
}
