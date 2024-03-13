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
// substr(開始位置, 取得文字数)
// string s2 = "A23456789TJQK";
// for (int i = 0; i < n; i++) {
// 	if (!count(s2.begin(), s2.end(), s[i][1])) // 処理を行う
// }



int main(){
    int N;
    cin >> N;

    vector<string> S(N);
    rep(i,N) cin >> S[i];

    bool flag = true;

    for(int i=0;i<N;i++){
        
            if(S[i][0]!='H'&&S[i][0]!='D'&&S[i][0]!='C'&&S[i][0]!='S'){
                //cout<<"111"<<endl;
                flag=false;
            }
            if(S[i][1]!='A'&&S[i][1]!='2'&&S[i][1]!='3'&&S[i][1]!='4'&&S[i][1]!='5'&&S[i][1]!='6'&&S[i][1]!='7'&&S[i][1]!='8'&&S[i][1]!='9'&&S[i][1]!='T'&&S[i][1]!='J'&&S[i][1]!='Q'&&S[i][1]!='K'){
                flag=false;
                //cout<<"112"<<endl;
            }
        
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(S[i]==S[j]){
                //cout<<"113"<<endl;
                flag=false;
            }

        }
        
    }

    if(flag){
        cout << "Yes" << endl;
    }else{

        cout << "No" << endl;
    }



    return 0;
}


