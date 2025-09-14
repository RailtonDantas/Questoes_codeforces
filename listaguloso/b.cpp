#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <utility>
#define read_vec(v) for(auto& x : v) cin >> x;
#define pb push_back
#define mk make_pair
#define endl "\n"
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


using namespace std;

void choose(ll i,vector<vector<ll>>& subsets, vector<ll>& subset, vector<ll>& macas,int t, ll limite){
    if(i == t){
        subsets.pb(subset);
        return;
    }
    choose(i + 1,subsets,subset,macas,t,limite);
    subset.pb(macas[i]);
    ll s = 0;
    for(ll i : subset){
        s += i;
    }
    if(s > limite){
        subset.pop_back();
        return;
    }
    choose(i + 1,subsets,subset,macas,t,limite);
    subset.pop_back();
}


int main(){_
    vector<ll> subset;
    vector<vector<ll>> subsets;

    int t;
    
    cin >> t;
    vector<ll> macas(t);
    read_vec(macas);

    ll soma = 0;
    for(ll s:macas) soma += s;
    ll limite = floor(soma/2);
    choose(0,subsets,subset,macas,t,limite);

    ll maior = -1;

    for(vector<ll> v : subsets){
        ll s = 0;
        for(ll p : v) s += p;
        if(s > floor(soma/2)) continue;

        if(s > maior){
            maior = s;
        }
    }
    cout << soma - 2*maior << endl;
    
    return 0;
}