#include<bits/stdc++.h>
//#include "atcoder/dsu.hpp"
using namespace std;
using ll = long long;
#define rep(i,N) for(ll i=0;i<N;i++)
#define Sort(a) sort(a.begin(), a.end());
#define rSort(a) sort(a.rbegin(), a.rend());
const int INF = 1<<30;
const ll mod = 998244353;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
//const vector<int> dx = {0, 0, 1, -1};
//const vector<int> dy = {1, -1, 0, 0};

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
// main関数内で関数のように再起を行う方法？
// auto dfs = [&](auto &dfs, int i, int j) -> void {
//         seen[i][j] = true;
//         for (int k = 0; k < 4; k++) {
//             int ni = i + dx[k];
//             int nj = j + dy[k];
//             if (ni < 0 or ni >= h or nj < 0 or nj >= w) continue;
//             if (s[ni][nj] != next[s[i][j]]) continue;
//             if (seen[ni][nj]) continue;
//             dfs(dfs, ni, nj);
//         }
//     };
// int a=stoi(s)+1;//文字列→int型
// int pos=lower_bound(A+1,A+N+1,X)-A; A_i>=Xを満たす最小の整数iが記録される 二分探索




int main(){
    int N,M;
    cin >> N >> M;

    vector<string> A(N);
    vector<string> B(M);


    rep(i,N) cin >> A[i];
    rep(i,M) cin >> B[i];

    int sum=0;
    int flag=0;

    for(int i=0;i<N;i++){
        flag=0;
        for(int j=0;j<M;j++){
            if(flag==1){
                break;
            }
            for(int k=0;k<3;k++){
                if(A[i][3+k]!=B[j][k]){
                    //cout<<i<<j<<k<<endl;
                    break;
                }
                if(k==2){
                    sum++;
                    flag=1;
                }

            }
            

        }
    }
    
    cout<<sum<<endl;



    return 0;
}


