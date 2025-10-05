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
        int n,m;
        cin >> n >> m;
        vector<int> seq(m);
        read_vec(seq);

        bool f = true;
        for(int i = 0; i < m - 1; i++){
            if(seq[i] != seq[i + 1] - 1){
                f = false;
                break;
            }
        }

        if(f){
            int max = *max_element(seq.begin(),seq.end());
            cout << n - max + 1 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}