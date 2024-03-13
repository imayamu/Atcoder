#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)
using ll = long long;
#define Sort(a) sort(a.begin(), a.end())
#define rSort(a) sort(a.rbegin(), a.rend())
const int INF = 1<<30;
const ll MOD = 1000000007;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//vector<vector<int>> a(N,vector<int>(M));
//a[i].resize(c[i]);
// int max = *std::max_element(v.begin(), v.end());
// int min = *std::min_element(v.begin(), v.end());
// string convert = ".ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// vector<vector<int>> G(N);
//     for(int i=0;i<M;i++){
//         int u,v;
//         cin>>u>>v;
//         G[u].push_back(v);
//         G[v].push_back(u);
//     }
// }

int main(){
    int N,M;
    cin >> N >>M;
    vector<int> A(M);
    rep(i,M) cin>>A[i];
    int sum=0;
    int sum1=0;
    int sum2=0;
    int flag=0;
    int count=0;
    vector<vector<int>> G(N+1);
    for(int i=0;i<M;i++){
        int u,v;
        u=A[i];
        v=A[i]+1;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<int> a;
    vector<int> b;
    
    int p=0;

    for(int i=1;i<N+1;i++){
        for(int j=0;j<G[i].size();j++){
            // vector<int> a;
            
            a.push_back(G[i][j]);
            //cout<<a[j]<<endl;
            //b[p++]=G[i][j];
            
        }

        rSort(a);
        cout<<"-----------------"<<endl;

        for(int k=0;k<a.size();k++){
            //cout<<"a.size():"<<a.size()<<endl;
            cout<<a[k]<<endl;
        }
        for(int j=0;j<G[i].size();j++){
            // vector<int> a;
            
            a.pop_back();
            //cout<<a[j]<<endl;
            //b[p++]=G[i][j];
            
        }

    }

    return 0;
}



