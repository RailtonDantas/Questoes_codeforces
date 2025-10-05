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
        int c;
        cin >> c;
        int zeros = 0;
        int m1 = 0;
        for(int i = 0; i < c; i++){
            int h;
            cin >> h;
            if(h == -1) m1++;
            if(h == 0) zeros++;
        }
        cout << zeros + 2*(m1%2) << endl;

    }
    return 0;
}

// 3
// 3
// -1 0 1
// 4
// -1 -1 0 1
// 5
// -1 -1 -1 0 0
