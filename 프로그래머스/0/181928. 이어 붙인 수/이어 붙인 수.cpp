#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    string odd_str = "";
    string even_str = "";
    
    for( int i = 0; i < num_list.size(); i++ )
    {
        if( num_list[i] % 2 != 0)
        {
            odd_str += to_string(num_list[i]);
        }
        else
        {
            even_str += to_string(num_list[i]);
        }
    }
    
    return stoi(odd_str) + stoi(even_str);
}