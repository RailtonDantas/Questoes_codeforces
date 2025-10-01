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

int main(){_
    ll c;
    cin >> c;
    vector<ll> dp(c + 1);
    dp[0] = 1;
    ll mod = pow(10,9) + 7;

    for(ll i = 1; i < c + 1; i++){

        for(ll d = 1; d < 7; d++){
            if(i - d >= 0){
                dp[i] = (dp[i] + dp[i - d]) % mod;
            }
        }
    }
    cout << dp[c] << endl;

    return 0;
}