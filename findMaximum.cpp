#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
using namespace std;

int main(){
    long int n;
    cin>>n;
    vector<long int> a(n), m(n), sa(n);
    for(long int i = 0; i < n; i++) cin>>a[i];
    string s;
    cin>>s;
    for(long int i = 0; i < n; i++){
        if(s[i] == '0') m[i] = 0;
        else m[i] = 1;
    }
    long int sum1 = 0, sum2 = 0, sum3 = 0;
    long int i, j;
    for(i = n-1; i >= 0 && m[i] == 0; i--);
//    cout<<"i = "<<i<<endl;
    for(j = i-1; j >= 0 && m[j] == 0; j--);
//    cout<<"j = "<<j<<endl;
    if(i < 0){
        cout<<"0"<<endl;
        exit(0);
    }
    if(i == 0){
        cout<<a[0]<<endl;
        exit(0);
    }

    sa[0] = a[0];
    sum2 = a[0]*m[0];
    for(long int k = 0; k < i; k++) sum1 += a[k];
    for(long int k = 1; k < n; k++) {
        sum2 += a[k]*m[k];
        sa[k] = a[k]+sa[k-1];
    }
    long int sum = a[i];

    while(j >= 0){
        long int temp = 0;
//        for(long int k = 0; k < j; k++) temp += a[k];
       if(j > 0 )
       temp = sa[j-1];

        if(temp+sum > sum3) sum3 = (temp + sum);
        sum += a[j]; j--;
        while(j >=0 && m[j] == 0) j--;
    }
//    cout<<sum1<<","<<sum2<<","<<sum3<<endl;
    long int max1 = max(sum1, sum2);
    cout<<max(max1, sum3)<<endl;

}
