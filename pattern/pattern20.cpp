/*#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
 int iniS = 2*n -2;
  for(int i=1;i<=2*n-1;i++){
    int stars =i;
    if(i>n) stars = 2*n -i;
    
      for(int j=1;j<=stars;j++){
          cout<<"*";
      }
      for(int j=1;j<=iniS;j++){
          cout<<" ";
      }
      for(int j=1;j<=stars;j++){
          cout<<"*";
      }
      cout<<endl;
      if(i<n) iniS-=2;
    else iniS +=2;
  }
}*/

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/