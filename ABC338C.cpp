#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,N) for(ll i=0;i<N;i++)
#define Sort(a) sort(a.begin(), a.end());
#define rSort(a) sort(a.rbegin(), a.rend());
const int INF = 1<<30;
const ll mod = 998244353;
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> chords;

    for (int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        if (A > B) swap(A, B); 
        chords.emplace_back(A, B);
    }

    
    sort(chords.begin(), chords.end());

    int maxB = 1;
    int start=1;
    start=chords[0].first;
    maxB=chords[0].second;
    for(int i=1;i<N;i++){
        if(chords[i].first<maxB){
            if(chords[i].second>maxB){
                cout << "Yes" << endl;
                return 0;
            }
        }
        else{
            maxB=chords[i].second;
        }   
    }
    cout << "No" << endl;
    return 0;
}



