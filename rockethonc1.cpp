#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n, k;
    cin>>n>>k;
    int p[200005], e[200005];
    for(int i = 0; i < n; i++) cin>>p[i]>>e[i];
    int mineffort = INT_MAX;
    for(int i = 0; i < (1<<n); i++){
        int A[200005];
        for(int t = 0; t < n; t++) A[t] = p[t];
        int effort = 0, val = 0;
        int B[200005];
        for(int j = 0; j < n; j++){
            //if ith player loses against Manao
            if(((1<<j)&i)){
                B[j] = 1;
                effort += e[j];
                val++;
            }
            else{
                B[j] = 0;
                A[j] += 1;
            }

        }
        //calculate the rank of Manao
        int rank = 1;
        for(int t = 0; t < n; t++) if(A[t] > val || (A[t] == val && B[t] == 0)) rank++;
//        cout<<i<<" "<<rank<<" "<<val<<" "<<effort<<endl;
        if(rank <= k && effort < mineffort) mineffort = effort;
    }
    if(mineffort > 1000000000) mineffort = -1;
    cout<<mineffort<<endl;
}
