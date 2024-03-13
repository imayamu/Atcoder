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




int main() {
    int N, Q;
    cin >> N >> Q;


    deque<pair<int, int>> positions;
    for (int i = 1; i <= N; ++i) {
        positions.push_back({i, 0});
    }

    for (int q = 0; q < Q; ++q) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            char C;
            cin >> C;
            // auto& head = positions.front();

            
            // if (C == 'R') head.first++;
            // else if (C == 'L') head.first--;
            // else if (C == 'U') head.second++;
            // else if (C == 'D') head.second--;
            pair<int, int> new_head = positions.front();

            if (C == 'R') new_head.first++;
            else if (C == 'L') new_head.first--;
            else if (C == 'U') new_head.second++;
            else if (C == 'D') new_head.second--;

            positions.pop_back();
            positions.push_front(new_head);
            //(positions.size() > N) positions.pop_back();
        } else if (query_type == 2) {
            int p;
            cin >> p;

            auto pos = positions[p-1];
            cout <<pos.first << " " << pos.second << endl;
        }
    }

    return 0;
}


