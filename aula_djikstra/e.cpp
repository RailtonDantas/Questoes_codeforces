#include<iostream>
#include<bits/stdc++.h>
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

int find(int p,vector<int>& id){
    return id[p] = (id[p] == p ? p : find(id[p],id));
}

void uni(int a, int b,vector<int>& id, vector<int>& sz){
    a = find(a,id), b = find(b,id);
    if(a == b) return;
    if(sz[a] > sz[b]) swap(a,b);
    id[a] = b;
    sz[b] += sz[a];
}

int main(){_
    int n,m;
    cin >> n >> m;
    vector<tuple<int,int,int>> estradas(m);
    vector<int> id(n);
    
    for(int i = 0; i < n; i++){
        id[i] = i;
    }
    vector<int> sz(n,1);

    for(int i = 0; i < m; i++){
        int a,b,w;
        cin >> a >> b >> w;
        a--,b--;
        estradas.pb(make_tuple(w,a,b));
    }
    sort(estradas.begin(),estradas.end());

    ll cost = 0;
    for(auto t : estradas){
        int w,a,b;
        tie(w,a,b) = t;
        if(find(a,id) != find(b,id)){
            uni(a,b,id,sz);
            cost += w;
        }
    }
    set<int> conj;
    for(int a : id){
        cout << a << endl;
        conj.insert(a);
    }

   
    if(conj.size() > 1){
        cout << "IMPOSSIBLE" << endl;
    }else{
        cout << cost << endl;
    }


    return 0;
}


// 4 3
// 1 2 3
// 3 4 4
// 4 5 5