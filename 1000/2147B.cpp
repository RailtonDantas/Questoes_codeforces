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
        vector<int> seq(2*n);
        for(int i = 0; i < n; i++){
            seq[i] = n - i;
        }
        seq[n] = n;
        for(int i = 1; i < n; i++){
            seq[2*seq[i] + i] = seq[i];
        }

        for(int i = 0; i < 2*n; i++){
            if(i == 2*n - 1){
                cout << seq[i] << endl; 
                break;
            }
            cout << seq[i] << " ";
        }
    }
    return 0;
}