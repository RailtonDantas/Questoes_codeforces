#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a;
        cin >> a;
        vector<int> seq(a);
        for(int i = 0; i < a; i++){
            cin >> seq[i];
        }
        int maior = *max_element(seq.begin(),seq.end());
        vector<int> resp(a);
        int d = 0;
        for(int i = 0; i < a; i++){
            if(seq[i] == maior){
                resp[i] = 2;
                d++;
            }
            else{
                resp[i] = 1;
            } 
        }
        if(d >= a){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << resp[0];
        for(int i = 1; i < a; i++){
            cout << " " << resp[i];
        }
        cout << "\n";
    }
}

// 3
// 4
// 1 20 51 9
// 4
// 5 5 5 5
// 3
// 1 2 2
// Yes
// 2 2 1 1
// No
// Yes
// 1 2 2
