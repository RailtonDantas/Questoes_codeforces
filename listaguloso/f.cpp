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

    int t;
    cin >> t;
    vector<int> seq(t);
    read_vec(seq);

    vector<bool> seq2(t,false);
    int moedas = 0;
    if(seq[t - 1] > seq[0]){
        for(int i = t - 1; i > 0; i--){
            if(seq2[i] and seq[i] > 0){
                seq2[i - 1] = true;
                seq[i]--;
                continue;
            }

            if(!seq2[i] and seq[i] == 0){
                moedas++;
                seq2[i] = true;
                if(seq[i - 1] > 0){
                    seq2[i - 1] = true;
                    seq[i - 1]--;
                }
                continue;
            }

            if(!seq2[i]){
                seq2[i] = true;
                if(seq[i] > 0){
                    seq2[i - 1] = true;
                    seq[i]--;
                }
                moedas++;
            }
        }
    }else{
        for(int i = 0; i < t - 1; i++){
            if(seq2[i] and seq[i] > 0){
                seq2[i + 1] = true;
                seq[i]--;
                continue;
            }
            if(!seq2[i] and seq[i] == 0){
                moedas++;
                seq2[i] = true;
                if(seq[i + 1] > 0){
                    seq2[i + 1] = true;
                    seq[i + 1]--;
                }
                continue;
            }
            if(!seq2[i]){
                seq2[i] = true;
                if(seq[i] > 0){
                    seq2[i + 1] = true;
                    seq[i]--;
                }
                moedas++;
            }
        }
    }
    cout << moedas << endl;

    return 0;
}