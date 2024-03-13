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

int main(){
    int N,M;
    cin >> N >>M;
    vector<int> a(M);
    rep(i,M) cin>>a[i];
    vector<int> re(N+1);
    rep(i,M) re[a[i]]=1;
    
    // vector<int> a(M);
    // for (auto& x : a) cin >> x;
    // vector<int> re(N + 1);
    // for (auto& x : a) re[x] = 1;
    vector<int> ans;

    for(int i=1,j=1;i<=N;i=++j){
        while(re[j]) j++;
        for(int k=j;k>=i;k--){
            ans.push_back(k);
        }
    }
    for(int i=0;i<N;i++) cout<<ans[i]<<" \n"[i+1==N];
    
    return 0;
}


