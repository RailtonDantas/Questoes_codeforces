#include<bits/stdc++.h>
#define read_vec(v) for(auto& x : v) cin >> x;
#define pb push_back
#define mk make_pair
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
typedef long long ll;
using namespace std;

int main(){_
    int t;
    cin >> t;
    while(t--){
        ll c;
        cin >> c;
        ll res = 1;
        while(c > 3){
            c = c/4;
            res = res * 2;
        }
        cout << res << endl;
    }
    return 0;
}

