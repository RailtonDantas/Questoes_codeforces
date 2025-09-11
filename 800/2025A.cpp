#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string a;
        string b;
        cin >> a >> b;
        int z = 0;
        int minimo = min(a.length(),b.length());
        for(int i = 0; i < minimo ; i++){
            if(a[i] == b[i]){
                z++;
                continue;
            }
            break;
        }
        cout << min(a.length() + b.length() + z,a.length() + b.length() - z + 1) << endl;
    }
    return 0;
}

// 3
// GARAGE
// GARAGEFORSALE
// ABCDE
// AABCD
// TRAINING
// DRAINING
