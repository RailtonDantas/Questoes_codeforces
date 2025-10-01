#include<bits/stdc++.h>
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

int find(int i,vector<int>& id){
    return id[i] = (id[i] == i ? i : find(id[i],id));
}

void unio(int p, int q,vector<int>& id,vector<int>& sz){
    p = find(p,id),q = find(q,id);
    if(p == q) return;
    if(sz[p] > sz[q]) swap(p,q);
    id[p] = q;
    sz[q] += sz[p];

}


int main(){_

    int t;
    cin >> t;
    vector<tuple<int,int>> vet_pares;
    vector<int> id(t);
    vector<int> sz(t);
    for(int i = 0; i < t; i++){
        id[i] = i;
        sz[i] = 1;
    }
    for(int i = 0; i < t - 1; i++){
        int a,b;
        cin >> a >> b;
        a--,b--;
        vet_pares.pb(make_tuple(a,b));
    }
    vector<tuple<int,int>> inutil;
    for(auto par : vet_pares){
        int x;
        int y;
        x = get<0>(par);
        y = get<1>(par);
        
        if(find(x,id) != find(y,id)){
            unio(x,y,id,sz);
        }else{
            inutil.pb(make_tuple(x,y));
        }
    }

    set<int> components;
    vector<int> pais;
    
    for(int i = 0; i < t; i++){
        components.insert(find(i,id));
        if(find(i,id) == i){
            pais.pb(i);
        }
    }
    
    cout << components.size() - 1 << endl;
    int pai_base = pais[0];
    for(int i = 1; i < pais.size(); i++){
        tuple<int,int> tp = inutil[i - 1];
        cout << get<0>(tp) + 1 << " " << get<1>(tp) + 1 << " " << pai_base + 1 << " " << pais[i] + 1<< endl;
    }

    

    return 0;
}

