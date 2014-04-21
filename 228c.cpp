#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n, k;
    cin>>n;
    vector<int> v(101);
    fill(v.begin(), v.end(), 0);
    for(int i = 0; i < n; i++){
        cin>>k;
        v[k]++;
    }
    int sol = 0;
    while(!v.empty()){
        vector<int> vv, vvv;
        for(int i = 0; i < v.size(); i++)
            if(v[i] != 0) vv.push_back(v[i]);
        int mm = *min_element(vv.begin(), vv.end());
        sol += mm;
        for(int i = 0; i < vv.size(); i++) if(vv[i] > mm) vvv.push_back(vv[i] - mm);
        v = vvv;
//        cout<<mm<<" "<<sol<<endl;
    }
    cout<<sol<<endl;
}
