//
//  b.cpp
//  277
//
//  Created by Keshav Nandan on 17/11/14.
//  Copyright (c) 2014 Keshav Nandan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int B[105], G[105];
    int n, m;
    cin>>n;
    for(int i = 0; i < n; i++) cin>>B[i];
    cin>>m;
    for(int i = 0; i < m; i++) cin>>G[i];
    sort(B, B+n);
    sort(G, G+m);
    
    int i = 0, j = 0, p = 0;
    while(i < n && j < m){
        if(abs(B[i] - G[j]) <= 1){
            p++; i++; j++;
        }
        else{
            if(B[i] < G[j]) i++;
            else j++;
        }
    }
    cout<<p<<endl;
}