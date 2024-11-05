#include<bits/stdc++.h>
using namespace std;

int main (){
  int n;
  int x;
  int tong1 = 0;
  int tong = 0;
  cin>>n;
  for(int i=0;i<n-1;i++){
    cin>>x;
    tong1+=x;
  }
    tong=n*(n+1)/2;
    cout<<tong-tong1;
}