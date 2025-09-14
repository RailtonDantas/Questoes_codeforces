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

void choose(int i,string& principal,set<string>& conj){
    if(i == principal.size()){
        conj.insert(principal);
        return;
    }

    for(int c = i; c < principal.size(); c++){
        swap(principal[c],principal[i]);
        choose(i + 1,principal,conj);
        swap(principal[c],principal[i]);
    }

}

int main(){_

    string s;
    set<string> conjunto;

    cin >> s;
    choose(0,s,conjunto);
    for(string str : conjunto){
        cout << str << endl;
    }
    cout << conjunto.size() << endl;
    
    return 0;
}

// escolhe um
// segue a logica escolhendo ele
// volta
// não escolhe ele agr