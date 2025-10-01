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
        int a,b;
        cin >> a >> b;
        vector<int> seq(a);
        read_vec(seq);
        sort(seq.begin(),seq.end(),greater<int>());
        ll soma = 0;

        for(int i = 0; i < min(a,b);i++){
            soma += 1ll*seq[i]*max(0,b-i);
        }

        cout << soma << endl;
        
    
        
    }
    return 0;
}
// b
// b + b
// b + b + b
// b + b + b + b

// 3
// 3 4
// 1 2 3
// 3 2
// 1 2 3
// 1 1000
// 100000
