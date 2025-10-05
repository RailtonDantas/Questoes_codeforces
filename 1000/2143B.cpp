#include<bits/stdc++.h>
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
    while(t--){
        int a,b;
        cin >> a >> b;
        priority_queue<int> pq,pq_c;
        for(int i = 0,k; i < a; i++){
            cin >> k;
            pq.push(k);
        }
        for(int i = 0,k; i < b; i++){
            cin >> k;
            pq_c.push(-k);
        }
        ll preco = 0;
        while(!pq_c.empty() and !pq.empty()){
            int cupom = -pq_c.top();
            pq_c.pop();

            int cont_el = 0;
            while(!pq.empty()){
                int prod = pq.top();
                cont_el++;
                pq.pop();
                if(cont_el < cupom){
                    preco += 1ll*prod;
                    continue;
                }
                break;
            }
        }

        if(!pq.empty()){
            while(!pq.empty()){
                preco += 1ll*pq.top();
                pq.pop();
            }
        }
        cout << preco << endl;
    }
    return 0;
}

