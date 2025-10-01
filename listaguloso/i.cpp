#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <utility>
#define read_vec(v) for(auto& x : v) cin >> x;
#define pb push_back
#define mk make_pair
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
typedef long long ll;


using namespace std;
int main(){_
    int a,b,c;
    cin >> a >> b >> c;
    c = c % b;

    for(int i = 1; i < b; i++){
        if(a*i % b == c){
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
    return 0;
}