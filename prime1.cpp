#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,fact=0;
  cin>>n;
  for(i=2;i<=n;i++)
  {
     if(n%i==0)
     {
       fact++;
     }
  }
  cout<<"factors="<<fact<<endl;
  if(fact==0)
  {
    cout<<"prime";
  }
  else
  {
    cout<<"not a prime";
  }
  return 0;
}
  
 
