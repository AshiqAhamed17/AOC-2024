#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

const int N = 1000;

int main() {

    vector<ll> v1;
    vector<ll> v2;
    for(int i=0; i<N; i++){
        int x, y;
        cin>>x>>y;
        v1.push_back(x);
        v2.push_back(y);
    }
    
    
    ll res = 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i=0; i<N; i++) {
        int a = abs(v1[i] - v2[i]);
        res += a;
    }
    cout<<res<<endl;
    return 0;
}



