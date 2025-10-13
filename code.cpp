// #include <iostream>
// using namespace std;

// int main (){
// char grade='A';

// int value=grade;
// cout<<value<<endl;
// return 0;



// }


#include <bits/stdc++.h>
using namespace std;
int main() {
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
 int n; if(!(cin>>n)) return 0;
 vector<pair<long long,long long>> a(n);
 for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
 sort(a.begin(), a.end(), [](auto &x, auto &y){ return x.second<y.second; });
 long long cnt=0, last_end = LLONG_MIN;
 for(auto &it: a){
 if(it.first>=last_end){
 cnt++; last_end = it.second;
 }
 }
 cout<<cnt<<"\n";
 return 0;
}



