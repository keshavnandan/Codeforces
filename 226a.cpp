#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
int cost[101];
int main(){
    int n, c;
    cin>>n>>c;
    for(int i = 1; i <= n; i++) cin>>cost[i];
    int md = 0;
    for(int i = 1; i < n; i++) md = max(md, cost[i] - cost[i+1]);
    int ans = 0;
    ans = max(ans, md-c);
    cout<<ans;
}
