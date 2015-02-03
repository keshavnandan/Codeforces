#include <iostream>
using namespace std;
int X[4] = {1, -1, 0, 0};
int Y[4] = {0, 0, 1, -1};
char C[55][55];
int M[55][55];
pair<int, int> P[55][55];
int done = 0;
int n, m;


int dfs(int i, int j){
    M[i][j] = 1;
    for(int k = 0; k < 4; k++){
        int ii = i + X[k], jj = j + Y[k];
        if(0 <= ii && ii < n && 0 <= jj && jj < m && C[ii][jj] == C[i][j]){
            if(M[ii][jj] == 1 && P[i][j] != make_pair(ii, jj)){
                // cout<<"Cycle found at "<<i<<" "<<j<<" to "<<ii<<" "<<jj<<" of "<<C[i][j]<<endl;
                // cout<<"Parent of "<<ii<<" "<<jj<<" is "<<P[ii][jj].first<<" "<<P[ii][jj].second<<endl;
                done = 1;
                return 1;
            }
            if(M[ii][jj] == 0){
                P[ii][jj] = make_pair(i, j);
                dfs(ii, jj);
            }
        }
    }
    M[i][j] = 2;
}

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>C[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            if(M[i][j] == 0){
                P[i][j] = make_pair(i, j);
                dfs(i, j);
                if(done == 1) break;
            }
        }
    if(done) cout<<"Yes";
    else cout<<"No";
    cout<<endl;

}