#include <iostream>
#include <string>
using namespace std;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  for(int i=1; i<=t; i++){
    int arr[10]={0,};
    int k = 1;
    int n; cin>>n;
    string str = to_string(n);
    while(1){
      for(int j=0; j<str.size(); j++){
        int num = str[j]-'0';
        arr[num]++;
      }        
      int cnt = 0;
      for(int j=0; j<10; j++){
        if(arr[j]>0) cnt++;
      }
      if(cnt==10) break;
      k++;
      str = to_string(n*k);
    }
    cout<<"#"<<i<<" "<<str<<"\n";
  }
}