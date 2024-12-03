#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;;

int main() {

    int n; cin>>n;
    vector<ll> v1(n);
    vector<ll> v2(n);
    for(int i=0; i<n; i++){
        cin>>v1[i]>>v2[i];
    }
    int res = 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i=0; i<n; i++) {
        int a = abs(v1[i] - v2[i]);
        res += a;
    }
    cout<<res<<endl;
    return 0;
}



