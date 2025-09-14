#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <utility>
#define read_vec(v) for(auto& x : v) cin >> x;
#define pb push_back
#define mk make_pair
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;


using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> n >> m;
        vector<pair<int,int>> pares;

        for(int i = 0; i < n; i++){
            int x,y;
            cin >> x >> y;
            pares.pb(mk(x,y));
        }
        int tempo = 0;
        int last_p = 0;
        int pontos = 0;
        for(pair<int,int> par : pares){
            int t,p;
            t = par.first;
            p = par.second;
            int dif = t - tempo;

            if(dif % 2 == 0){
                if(last_p == p){
                    pontos += dif;
                }else{
                    pontos += dif - 1;
                }
            }else{
                if(last_p != p){
                    pontos += dif;
                }else{
                    pontos += dif - 1;
                }
            }

            tempo = t;
            last_p = p;
        }
        if(tempo < m){
            pontos += m - tempo;
        }
        
        cout << pontos << endl;

    }

    
    return 0;
}
// 3
// 2 4
// 2 1
// 4 0
// 2 7
// 1 1
// 4 0
// 4 9
// 1 0
// 2 0
// 6 1
// 9 0
