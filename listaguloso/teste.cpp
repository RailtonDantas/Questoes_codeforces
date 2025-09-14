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
int main(){_

    set<string> ab;
    for(int i = 0; i < 20; i++){
        string s;
        cin >> s;
        ab.insert(s);
    }
    cout << ab.size() << endl;
    return 0;
}