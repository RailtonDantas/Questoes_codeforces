#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define read_vec(v) for(auto& x : v) cin >> x;
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n";
typedef long long ll;


using namespace std;


int main(){_

    int a;
    cin >> a;
    while(a--){
        string s;
        cin >> s;
        if(s.length() <= 2){
            cout << "NO" << endl;
            continue;

        }
        int o,c;
        o = 0,c = 0;
        for(int i = 1; i < s.length() - 1; i++){
            if(s[i] == '(') o++;
            else c++;

            if(c > o) break;
        }
        if(c != o){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }

    return 0;
}