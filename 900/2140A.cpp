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
        string s;
        cin >> s;
        vector<int> out;
        for(char a : s){
            out.pb(a - '0');
        }


        int opt = 0; 
        for(int i = 0; i < n; i++){
            if(out[i] == 1){
                int idx = -1;
                int idx2 = -1;
                for(int j = n - 1; j > i; j--){
                    if(out[j] == 0){
                        if(idx != -1){
                            idx2 = j;
                            break;
                        }
                        idx = j;
                    }
                }
                if(idx == -1 && idx2 == -1){
                    break;
                }
                if(idx == -1 || idx2 == -1){
                    opt++;
                    break;
                }
                swap(out[idx2],out[i]);
                swap(out[idx2],out[idx]);
                opt++;
            }
        }
        cout << opt << endl;
    }
    return 0;
}
// 101011