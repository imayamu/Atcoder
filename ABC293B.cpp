#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)
//vector<vector<int>> a(N,vector<int>(M));
//vector<int> a(N);
//a[i].resize(c[i]);

int main(){
    int N;
    cin >> N;
    vector<int> v(N+1);
    vector<int> a(N+1,0);
    vector<int> s;
    for(int i=1;i<N+1;i++){
    cin>>v[i];
    }
    for(int i=1;i<N+1;i++){
        if(a[i]==0){
            a[v[i]]=1;
        }
    }
    for(int i=1;i<N+1;i++){
        if(a[i]==0){
            s.push_back(i);
        }
    }
    sort(s.begin(),s.end());

    cout<<s.size()<<endl;

    for(int i=0;i<s.size()-1;i++){
        cout<<s[i]<<' ';
    }
    cout<<s[s.size()-1];
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<endl;
    // }

    
    
    return 0;
}


