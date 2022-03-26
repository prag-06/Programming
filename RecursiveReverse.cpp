#include<bits/stdc++.h>
using namespace std;

int reverseNum(int num)
{
  static int rev = 0;
  static int base = 1;

  if(num>0)
  {
    reverseNum(num/10);
    rev += (num%10)*base;
    base *= 10;
  }

  return rev;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
  freopen("output.in", "w", stdout);
#endif  
  
  int num;
  cin>>num;
  cout<<reverseNum(num);

  return 0;
}