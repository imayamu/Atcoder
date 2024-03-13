#include<bits/stdc++.h>
//#include 'atcoder/dsu.hpp'
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
// string convert = '.ABCDEFGHIJKLMNOPQRSTUVWXYZ';
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
    char s1,s2,t1,t2;
    cin >> s1 >> s2;
    cin >> t1 >> t2;
    int a=0,b=0;

    if(s1=='A'&&s2=='B'||s1=='B'&&s2=='A'){
        a=1;
    }
    if(s1=='A'&&s2=='C'||s1=='C'&&s2=='A'){
        a=2;
    }
    if(s1=='A'&&s2=='D'||s1=='D'&&s2=='A'){
        a=2;
    }
    if(s1=='A'&&s2=='E'||s1=='E'&&s2=='A'){
        a=1;
    }
    if(s1=='B'&&s2=='C'||s1=='C'&&s2=='B'){
        a=1;
    }
    if(s1=='B'&&s2=='D'||s1=='D'&&s2=='B'){
        a=2;
    }
    if(s1=='E'&&s2=='B'||s1=='B'&&s2=='E'){
        a=2;
    }
    if(s1=='D'&&s2=='C'||s1=='C'&&s2=='D'){
        a=1;
    }
    if(s1=='E'&&s2=='C'||s1=='C'&&s2=='E'){
        a=2;
    }
    if(s1=='D'&&s2=='E'||s1=='E'&&s2=='D'){
        a=1;
    }
    if(t1=='A'&&t2=='B'||t1=='B'&&t2=='A'){
        b=1;
    }
    if(t1=='A'&&t2=='C'||t1=='C'&&t2=='A'){
        b=2;
    }
    if(t1=='A'&&t2=='D'||t1=='D'&&t2=='A'){
        b=2;
    }
    if(t1=='A'&&t2=='E'||t1=='E'&&t2=='A'){
        b=1;
    }
    if(t1=='B'&&t2=='C'||t1=='C'&&t2=='B'){
        b=1;
    }
    if(t1=='B'&&t2=='D'||t1=='D'&&t2=='B'){
        b=2;
    }
    if(t1=='E'&&t2=='B'||t1=='B'&&t2=='E'){
        b=2;
    }
    if(t1=='D'&&t2=='C'||t1=='C'&&t2=='D'){
        b=1;
    }
    if(t1=='E'&&t2=='C'||t1=='C'&&t2=='E'){
        b=2;
    }
    if(t1=='D'&&t2=='E'||t1=='E'&&t2=='D'){
        b=1;
    }
    if(a==b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    



    return 0;
}


