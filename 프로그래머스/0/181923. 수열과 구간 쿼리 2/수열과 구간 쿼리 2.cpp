#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
    
    for(int i =0; i<queries.size(); i++)
    {
        vector<int> query = queries[i];
        int s = query[0];
        int e = query[1];
        int k = query[2];
        
        int min = -1;
        for(int j = s; j <= e; j++)
        {
            if(k < arr[j])
            {
                if(min == -1 || arr[j] < min)
                {
                    min = arr[j];
                }
            }
        }
        
        answer.push_back(min);
    }
    
    return answer;
}