#include <iostream>
using namespace std;
char M[55][55];

int main(){
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            M[i][j] = '.';
    for(int i = 0; i < n; i = i+4){
        for(int j = 0; j < m; j++)
            M[i][j] = '#';
        if(i+2 < n){
            for(int j = 0; j < m; j++)
                M[i+2][j] = '#';
        }
        if(i+1 < n) M[i+1][m-1] = '#';
        if(i+3 < n) M[i+3][0] = '#';
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout<<M[i][j];
        cout<<endl;
    }
}