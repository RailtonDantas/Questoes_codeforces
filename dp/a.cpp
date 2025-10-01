#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cmath>
#include <utility>
#define read_vec(v) for(auto& x : v) cin >> x;
#define pb push_back
#define mk make_pair
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
typedef long long ll;
using namespace std;

ll pula(ll i, vector<ll>& h,vector<ll>& dp){
    if(i == h.size() - 1){
        return 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }
    return dp[i] = min(abs(h[i] - h[i + 1]) + pula(i + 1,h,dp), abs(h[i] - h[i + 2]) + pula(i + 2,h,dp));
}
int main(){_
    ll n;
    cin >> n;
    vector<ll> dp(n + 1,-1);
    vector<ll> h(n + 1);
    vector<ll> dist;

    for(ll i = 1; i < n + 1; i++){
        cin >> h[i];
    }
    cout << pula(1,h,dp) << endl;
    return 0;
}