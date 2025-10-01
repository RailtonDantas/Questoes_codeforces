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
    vector<int> vet(4);
    for(int i = 0; i < 4; i++){
        cin >> vet[i];
    }
    string s;
    cin >> s;
    int sum = 0;
    for(char a : s){
        int b = a - '0';
        sum += vet[b - 1];
    }
    cout << sum << endl;

    return 0;
}