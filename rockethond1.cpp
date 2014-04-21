#include <iostream>
#include <climits>
using namespace std;
int X[100000][3], Y[100000][3];

int main(){

    int n, m;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>X[i][0]>>X[i][1]>>X[i][2];
    }
    for(int i = 0; i < m; i++){
        cin>>Y[i][0]>>Y[i][1]>>Y[i][2];
    }
    int maxval = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x = X[i][0], c = X[i][1], d = c + X[i][2];
            int y = Y[j][1], a = Y[j][0], b = a + Y[j][2];
//            cout<<x<<" "<<c<<" "<<d<<" "<<y<<" "<<a<<" "<<b<<endl;
            if(a < x && x < b && c < y && y < d) maxval = max(maxval, min(min(x-a, b-x), min(y-c, d-y)));
        }
    }
    cout<<maxval;
}
