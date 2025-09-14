#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define read_vec(v) for(auto& x : v) cin >> x;
typedef long long ll;


using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        vector<int> h(n);
        read_vec(h);
    
        vector<int> v(m);
        read_vec(v);
        cout << n + m << endl;
        
    }
    return 0;
}

// 2
// 1 1 2 2
// 1
// 1
// 2 1 100000 100000
// 42 58
// 32
