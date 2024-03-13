#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)
//vector<vector<int>> a(N,vector<int>(M));
//vector<int> a(N);
//a[i].resize(c[i]);

int main(){
    string s,s1;
    cin>>s;

    for(int i=0;i<s.size();i=i+2){
        s1+=s[i+1];
        s1+=s[i];
    }
    if(s.size()%2==1){
        s1+=s[s.size()-1];
    }
    cout<<s1<<endl;
    
    
    return 0;
}


