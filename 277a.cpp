//
//  a.cpp
//  277
//
//  Created by Keshav Nandan on 17/11/14.
//  Copyright (c) 2014 Keshav Nandan. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int A[3005];

int main(){
    
    int n;
    vector<pair<int, int> > res;
    cin>>n;
    for(int i = 0; i < n; i++) cin>>A[i];
    
    for(int i = 0; i < n-1; i++){
        int mini = i;
        for(int j = i+1; j < n; j++)
            if(A[mini] > A[j]) mini = j;
        if(i != mini) res.push_back(make_pair(i, mini));
        swap(A[i], A[mini]);
    }
    n = res.size();
    cout<<n<<endl;
    for(int i = 0; i < n; i++) cout<<res[i].first<<" "<<res[i].second<<endl;
}