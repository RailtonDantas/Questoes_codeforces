
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t,a;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> a;
        vector<int> v1;
        vector<int> v2;
        for(int i = 0; i < a;i++){
            int b;
            cin >> b;
            v1.push_back(b);
        }
        for(int i = 0; i < a;i++){
            int b;
            cin >> b;
            v2.push_back(b);
        }
        int dif = 0;
        for(int i = 0; i < a; i++){
            if(v1[i] > v2[i]){
                dif += v1[i] - v2[i];
            }
        }
        cout << max(dif,0) + 1 << endl;

    }
    
    return 0;
}
