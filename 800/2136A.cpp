#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ma = max(a,b);
        int minab = min(a,b);
        if(minab < ma/3){
            cout << "NO" << endl;
            continue;
        } 

        int md = max(c,d);
        int mindc = min(c,d);
        if(mindc < md/3){
            cout << "NO" << endl;
            continue;
        } 

        cout << "YES" << endl;
    }

    return 0;
}
