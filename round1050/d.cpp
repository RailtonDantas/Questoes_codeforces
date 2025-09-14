#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <utility>
#define read_vec(v) for(auto& x : v) cin >> x;
#define pb push_back
#define mk make_pair
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


using namespace std;


int main(){_

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> seq(n);
        read_vec(seq);

        vector<ll> pares;
        vector<ll> impares;

        for(ll i:seq){
            if(i % 2 == 0){
                pares.pb(i);
                continue;
            }
            impares.pb(i);
        }

        ll dentes = 0;
        sort(impares.begin(),impares.end());
        bool estado = false;
        if(impares.size() == 0){
            cout << 0 << endl;
            continue;
        }
  
        int l,r;
        l = 0;
        r = impares.size() - 1;

        while(l <= r){
            if(!estado){
                dentes += impares[r];
                r -= 1;
            }else{
                l += 1;
            }
            estado = !estado;
        }
        if(dentes != 0){
            for(ll par : pares){
                dentes += par;
            }
        }
        cout << dentes << endl;
    }

    return 0;
}
// 3
// 3
// 2 4 6
// 4
// 4 2 1 6
// 4
// 1000000000 999999999 1000000000 999999999
