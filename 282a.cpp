#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <cstring>
#include <climits>
#include <cstdio>
#include <cmath>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
vi digit(10);

int main(){

  digit[0] = 2;
  digit[1] = 7;
  digit[2] = 2;
  digit[3] = 3;
  digit[4] = 3;
  digit[5] = 4;
  digit[6] = 2;
  digit[7] = 5;
  digit[8] = 1;
  digit[9] = 2;

  string s;
  cin>>s;
  cout<<digit[(s[0]-'0')]*digit[(s[1]-'0')]<<endl;
}