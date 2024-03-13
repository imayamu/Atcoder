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
    int N;
    cin >> N;
    string s;
    cin>>s;
    int sum=0;
    int sum1=0;
    int sum2=0;
    int flag=0;
    int count=0;
    
    for(int i=1;i<=N-1;i++){
        int l=0;
        int k=1;
        while(k+i<=N&&s[k-1]!=s[k+i-1]&&l<=N-i){
            l=k;
            k++;
        }
        cout<<l<<endl;

    }

    
    
    return 0;
}


