#include<bits/stdc++.h>
using namespace std;

long long int calculateGoodVibes(vector<int> &v, int n){
    if(n==2){
        sort(v.begin(),v.end(),greater<int>());
        return v[0];
    }
    int j = 1;
    int cnt = 2;
    sort(v.begin(),v.end(),greater<int>());
   long long int gdvibes=v[0];
    for(int i=2; i<=n-1; i++){
        if(cnt==0){
            j++;
            cnt=2;
        }
        gdvibes+=v[j];
        cnt--;
    }
    return gdvibes;
  }



int main(){
  int n;
  cin>>n;
  vector<int> v;

  for(int i=0;i<n;i++)
  {
    int num;
    cin >> num;
      v.push_back(num);
  }

  long long int res = calculateGoodVibes(v,n);
  cout<<res;

}