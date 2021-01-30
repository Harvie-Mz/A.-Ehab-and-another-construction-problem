#include<bits/stdc++.h>
using namespace std;
int main(){
int x,a,b,c,d; 
cin >>x;
for (int i =1 ; i<=x ; i++)
{
for (int j =1 ; j<=x; j++)
{ if (i*j>x && i/j<x && i%j ==0)
  {
  cout << i <<" "<<j;
  return 0;
  }
  }
}
cout << -1;
return 0;


}
