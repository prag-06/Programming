#include<bits/stdc++.h>
using namespace std;

int processArray(std::vector<int> &array) {
  
    int count = 0;
    int length = 0;
    int total = -1;
    for(int i=0;i<array.size();i++)
    {
      for(int j=i;j<array.size();j++)
      {
        if(array[j]%2==0) break;

        else if(array[j]%2==1)
        {
          length++;
          if(array[j] > 10) count++;
        }
      }


      if(count>0)
      {
        total = std::max(total,length);
        
        if(total >= array.size()/2) break;

        length = 0;
      }
      length = 0;
    }


      if(total>0) return total;

  return 0;
}



int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
  freopen("output.in", "w", stdout);
#endif  
  
  vector<int> array;
  int val;
  while (cin >> val) {
    if (val < 0) break;
    array.push_back(val);
  }
  cout << processArray(array) << endl;

  return 0;
}
