#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <utility>
#define read_vec(v) for(auto& x : v) cin >> x;
#define pb push_back
#define mk make_pair
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


using namespace std;

int main(){_
    int t;
    cin >> t;
    
    while(t--){
        int a;
        cin >> a;
        vector<vector<int>> m(a);

        for(int i = 0; i < a; i++){
            int c;
            cin >> c;
            vector<int> vet(c);
            read_vec(vet);
            m.pb(vet);
        }
        vector<int> base;
        int last_i = 0;
        for(vector<int> vet : m){
            for(int i = last_i; i < vet.size(); i++){
                base.pb(vet[i]);
            }
            last_i = vet.size();
        }
        cout << base[0];
        for(int i = 1; i < base.size(); i++){
            cout << " " << base[i];
        }
        cout << endl;
    }
    return 0;
}

// 4
// 1
// 3 5 2 7
// 2
// 2 2 9
// 3 3 1 4
// 3
// 1 5
// 2 5 1
// 2 5 2
// 3
// 3 4 4 9
// 7 7 6 5 4 3 2 1
// 4 2 4 5 1

// 5 2 7 
// 2 9 4 
// 5 1 
// 2 4 5 1 3 2 1 
