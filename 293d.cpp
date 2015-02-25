#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <cmath>
#include <utility>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <sstream>
using namespace std;
double e[2005][2005];

int main(){

    int n, t;
    // for(int i = 0; i <= 2000; i++)
    //     for(int j = 0; j <= 2000; j++)
    //         e[i][j] = (double)0;

    double p;
    cin>>n>>p>>t;
    double q = (double)1 - p;
    e[1][1] = p;
    e[0][1] = q;
    for(int tt = 2; tt <= t; tt++){
        for(int k = 0; k <= min(n, tt); k++){
            double x = (double)0;
            if(k >= 1) x += p*e[k-1][tt-1];
            if(k < n) x += q*e[k][tt-1];
            else x += e[k][tt-1];
            e[k][tt] = x;
            // cout<<"E["<<k<<"]["<<tt<<"] = "<<e[k][tt]<<endl;
        }
    }

    double res = (double)0;
    for(int k = 0; k <= min(n, t); k++){
        res += k*e[k][t];
    }
    // cout<<res<<endl;
    printf("%lf\n", res);
}