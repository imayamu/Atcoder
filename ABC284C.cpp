#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)
using ll = long long;
#define sort(a) sort(a.begin(), a.end());
const int INF = 1<<30;
const ll MOD = 1000000007;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//vector<vector<int>> a(N,vector<int>(M));
//a[i].resize(c[i]);
// int max = *std::max_element(v.begin(), v.end());
// int min = *std::min_element(v.begin(), v.end());
// string convert = ".ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// void dfs_recursive(const vector< vector<int> > &adj, int s, vector<bool> &seen){
// 	seen[s] = true; // sに訪問
// 	for (auto to: adj[s])
// 		if (!seen[to])// 未訪問頂点を辿る
// 			dfs_recursive(adj, to, seen);
// }
int N,M;
vector<int> vis;
vector<vector<int>> g;



void dfs(int c){
    vis[c]=true;
    for(auto &d:g[c]){
        if(vis[d]) continue;
        dfs(d);
    }
}

int main(){

    cin >> N >> M;
    // vector<int> v(N);
    // rep(i,N) cin>>v[i];
    g.resize(N);
    for(int i=0;i<M;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ans=0;
    int sum=0;
    int sum1=0;
    int sum2=0;
    int flag=0;
    int count=0;

    vis.resize(N);
    for(int i=0;i<N;i++){
        if(!vis[i]) ans++;dfs(i);
    }
    cout<<ans<<endl;

    


    

    
    
    return 0;
}


