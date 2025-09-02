#include <vector>

using namespace std;

vector<int> solution(int n, int m) 
{
    vector<int> answer;
    
    if(n < m)
    {
       for(int i = n; 0 < i; --i)
       {
          if(n % i == 0 && m % i == 0)
          {
             answer.push_back(i);
             answer.push_back(n*m/i);
             break;
          }
       }
    }
    else
    {
       for(int i = m; 0 < i; --i)
       {
          if(n % i == 0 && m % i == 0)
          {
             answer.push_back(i);
             answer.push_back(n*m/i);
             break;
          }
       }
    }
    
 //  int saveN = n;
 //  int saveM = m;
 //  while(true)
 //  {

 //      if(n < m)
 //      {
 //          n += saveN;
 //          if(n == m)
 //          {
 //              answer.push_back(n);
 //              break;
 //          }
 //      }
 //      else if(m < n)
 //      {
 //          m += saveM;
 //          if(n == m)
 //          {
 //              answer.push_back(n);
 //              break;
 //          }
 //      }
 //      else
 //      {
 //          answer.push_back(n);
 //          break;
 //      }
 //  }


    return answer;
}