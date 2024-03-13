#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)
//vector<vector<int>> a(N,vector<int>(M));
//vector<int> a(N);
//a[i].resize(c[i]);

int main(){
    vector<string> s(8);
    for(int i=0;i<8;i++){
        cin>>s[i];
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(s[i][j]=='*'){
                cout<<char(97+j)<<8-i<<endl;
                //cout<<"abcdefg"[4]<<endl;
                return 0;
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


