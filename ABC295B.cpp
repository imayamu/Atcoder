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

int main(){
    int R,C;
    cin >> R >> C;
    vector<string> B(R);
    rep(i,R) cin>>B[i];
    int sum=0;
    int sum1=0;
    int sum2=0;
    int flag=0;
    int count=0;
    rep(i,R){
        rep(j,C){
            if(B[i][j]!='#'&&B[i][j]!='.'){
                int a=B[i][j]-'0';
                //cout<<a<<endl;
                B[i][j]='.';
                rep(k,R){
                    rep(l,C){
                        if(abs(i-k)+abs(j-l)<=a){
                            if(B[k][l]=='#'){
                                B[k][l]='.';
                            }
                        }

                    }
                }
                
            }
        }
    }
    rep(i,R){
        cout<<B[i]<<endl;
        
    }
    


    
    return 0;
}


