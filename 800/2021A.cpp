#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> seq(n);
        for(int i = 0; i < n; i++){
            cin >> seq[i];
        }
        sort(seq.begin(),seq.end());
        int out = floor((seq[0] + seq[1])/2);
        
        for(int i = 2; i < n; i++){
            out = floor((out + seq[i])/2);
        }

        cout << out << endl;
    }

    return 0;
}
