#include <string>

using namespace std;

bool solution(string s) 
{
    if(s.size() != 4 && s.size() != 6)
    {
        return false;
    }
    
    for(char a : s)
    {
        if(a<48 || 57<a)
        {
            return false;
        }
    }
    
    return true;
}