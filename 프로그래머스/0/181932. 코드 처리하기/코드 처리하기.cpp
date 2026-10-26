#include <string>
#include <vector>

using namespace std;

string solution(string code) 
{
    bool mode = false;
    string answer = "";
    
    for(int idx = 0; idx < code.size(); idx++)
    {
        if( code[idx] == '1' ){ mode = !mode; continue; }
        
        if( mode == false && idx % 2 == 0 )
        {
            answer += code[idx];
        }
        else if ( mode == true && idx % 2 != 0  )
        {
            answer += code[idx];
        }
    }
    
    return answer == "" ? "EMPTY" : answer;    
}