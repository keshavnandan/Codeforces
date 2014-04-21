#include <iostream>
using namespace std;

int main(){

    string s;
    cin>>s;
    int n = s.size();
    int maxc = 1;
    int i, j;
    for(j = 0; j < 26; j++){
        //jth character of alphabet
        char c = 'A'+j;
        //first occurrence of c in s
        for(i = 0; i < n && s[i] != c; i++);
        if(i < n){
            int cc = 1;
            //count of c's at odd distance from i
            for(int t = i+1; t < n;){
                    if(s[t] == c){
                        cc++;
                        t++;
                    }
                    else t += 2;
            }
            if(cc > maxc) maxc = cc;
//            cout<<c<<" "<<i<<" "<<cc<<endl;
        }
    }
    cout<<maxc<<endl;
}
