#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++) {
    //for space n-i-1
    for(int j=1;j<n-i-1;j++) {
      cout<<" ";
    }
    //for num 1
    for(int j=1;j<=i+1;j++) {
      cout<<j;
    }
    //for num 2
    for(int j=i;j>0;j--){
      cout<<j;
  }
  cout<<endl;
}
}