#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    for(int i = 0; i < queries.size(); i++)
    {
        int idx1 = queries[i][0];
        int idx2 = queries[i][1];
        int temp1 = arr[idx1];
        int temp2 = arr[idx2];
        arr[idx1] = temp2;
        arr[idx2] = temp1;
    }
    
    return arr;
}