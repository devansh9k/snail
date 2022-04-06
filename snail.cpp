#include<iostream>
#include<vector>
using namespace std;

vector<int> snail(const vector<vector<int>> &snail_map) {
  
  vector<int> result;
  int n = snail_map.size();
  if(n == 1)
  {
      return snail_map[0];
  }
  
  int rs = 0, re = n-1, cs = 0, ce = n-1;

  for(int i = 0; i < n/2 ; i++)
  {
      for(int j = rs; j <= re; j++)
      {
          result.push_back(snail_map[cs][j]);
      }
      cs++;

      for(int j = cs; j <= ce; j++)
      {
          result.push_back(snail_map[j][re]);
      }
      re--;

      for(int j = re; j >= rs; j--)
      {
          result.push_back(snail_map[ce][j]);
      }
      ce--;

      for(int j = ce; j >= cs; j--)
      {
          result.push_back(snail_map[j][rs]);
      }
      rs++;


      
  }

  if(n%2 != 0)
  {
      result.push_back(snail_map[rs][cs]);
  }

  return result;
  
}