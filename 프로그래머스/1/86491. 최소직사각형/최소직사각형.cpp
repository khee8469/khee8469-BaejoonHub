#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int width = 0;
    int height = 0;
    for(vector<int> vec : sizes)
    {
        if(vec[0] < vec[1])
        {
            if(width < vec[1])
            {
                width = vec[1];
            }
            if(height < vec[0])
            {
                height = vec[0];
            }
        }
        else
        {
            if(width < vec[0])
            {
                width = vec[0];
            }
            if(height < vec[1])
            {
                height = vec[1];
            }
        }
    }
    
    return width * height;
}