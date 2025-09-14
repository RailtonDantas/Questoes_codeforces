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
        int a,b;
        cin >> a >> b;
        if(b % 2 == 0){
            cout << 0 << endl;
        }
        else{
            cout << a << endl;
        }
    }
    
    return 0;
}