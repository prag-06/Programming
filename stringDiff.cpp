#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
  freopen("output.in", "w", stdout);
#endif  
  
  string s1,s2;
  cin>>s1;
  cin>>s2;

  int len = s1.length();
  int min = 0;
  int max = len;

  for(int i=0;i<len;i++)
  {
    if(s1[i] == s2[i])
    {
      if(s1[i] == '?' || s2[i] == '?')
      {
        continue;
      }

      else
      {
        max--;
      }
    }

    else if(s1[i] != s2[i])
    {
      if(s1[i] == '?' || s2[i] == '?') continue;

      else min++;
    }
  }
  cout<<min<<" "<<max;

  return 0;
}