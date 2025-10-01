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



int find(int p, vector<int>& id){
    return id[p] = (id[p] == p ? p : find(id[p],id));
}

void uni(int p, int q, vector<int>& id, vector<int>& sz){
    p = find(p,id), q = find(q,id);

    if(p == q) return;
    if(sz[p] > sz[q]) swap(p,q);
    id[p] = q;
    sz[q] += sz[p];
}

int main(){_
    int n,q;
    cin >> n >> q;
    vector<int> id(n + 1);
    vector<int> sz(n + 1,1);
    for(int i = 0; i < n + 1; i++){
        id[i] = i;
    }

    for(int i = 0; i < q; i++){

        int a,b,c;
        cin >> a >> b >> c;

        if(a == 1){
            int pb = find(b,id);
            int pc = find(c,id);
            if(pb == pc){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }else{
            uni(b,c,id,sz);
        }
    }

    return 0;
}