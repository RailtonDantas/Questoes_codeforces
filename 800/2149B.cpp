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
        int n;
        cin >> n;
        vector<int> seq(n);
        read_vec(seq);
        sort(seq.begin(),seq.end());
        int maximo = -10000000000;
        for(int i = 0; i < n - 1; i += 2){
            if(seq[i + 1] - seq[i] > maximo){
                maximo = seq[i + 1] - seq[i];
            }
        }

        cout << maximo << endl;
    }
    return 0;
}

