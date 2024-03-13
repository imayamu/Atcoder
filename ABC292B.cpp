#include<bits/stdc++.h>
//#include "atcoder/dsu.hpp"
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)
using ll = long long;
#define Sort(a) sort(a.begin(), a.end());
#define rSort(a) sort(a.rbegin(), a.rend());
const int INF = 1<<30;
const ll mod = 998244353;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//vector<vector<int>> a(N,vector<int>(M));
//a[i].resize(c[i]);
// int max = *std::max_element(v.begin(), v.end());
// int min = *std::min_element(v.begin(), v.end());
// string convert = ".ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     vector<vector><int> G(N);
//     for(int i=0;i<M;i++){
//         int u,v;
//         cin>>u>>v;
//         u--;v--;
//         G[u].push_back(v);
//         G[v].push_back(u);
//     }
// void dfs_recursive(const vector< vector<int> > &adj, int s, vector<bool> &seen){
// 	seen[s] = true; // sに訪問
// 	for (auto to: adj[s])
// 		if (!seen[to])// 未訪問頂点を辿る
// 			dfs_recursive(adj, to, seen);
// }
// int a=stoi(s)+1;//文字列→int型


int main(){
    int N,Q;
    cin >> N >>Q;
    vector<int> x(N+1,0);
    for(int i=0;i<Q;i++){
        int a,b;
        cin>>a>>b;
        if(a==1){
            x[b]++;
        }
        else if(a==2){
            x[b]+=2;
        }
        else if(a==3){
            if(x[b]>=2){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    int sum=0;
    int sum1=0;
    int sum2=0;
    int flag=0;
    int count=0;
    
    return 0;
}


