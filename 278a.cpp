//
//  main.cpp
//  Codeforces
//
//  Created by Keshav Nandan on 21/11/14.
//  Copyright (c) 2014 Keshav Nandan. All rights reserved.
//

#include <iostream>
using namespace std;
int lucky(int x){
    if(x < 0) x = -x;
    while(x > 0){
        int r = x%10;
        if(r == 8) return 1;
        x = x/10;
    }
    return 0;
}


int main() {
    
    int a;
    cin>>a;
    for(int i = 1; i <= 20; i++){
        int y = a+i;
        if(lucky(y)){
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
}