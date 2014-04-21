#include <iostream>
using namespace std;

int main(){

    string s;
//    while(cin>>s){
        cin>>s;
        int c = 0;
        int i, j;
        for(i = 0; i < s.size()-1;){
            for(j = i; j < s.size() && s[j] == s[i]; j++);
            if((j-i)%2 == 0) c++;
//            cout<<i<<" "<<j<<endl;
            i = j;
        }
        cout<<c<<endl;
//    }
}
