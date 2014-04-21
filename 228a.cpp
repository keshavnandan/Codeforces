#include <iostream>
using namespace std;

//works only if a >= b and also both a and b are not zero
long gcd(long a, long b){
    if(a < b) swap(a, b);
     if(b == 0) return a;
     if(a%b == 0) return b;
     return gcd(b, a%b);
}
int A[105];
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) cin>>A[i];
    int g = A[0];
    for(int i = 0; i < n; i++) g = gcd(g, A[i]);
    cout<<g*n<<endl;
}
