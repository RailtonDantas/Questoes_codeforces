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

        if(z == 0){
            z += a.length() + b.length();
        }
        else{
            z += a.length() + b.length() - 2*z + 1;
        }

       

        cout << z << endl;
    }
    return 0;
}