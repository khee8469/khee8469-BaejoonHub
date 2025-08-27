#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) 
{
    int position = 0;
    auto a = find(seoul.begin(), seoul.end(), "Kim");
    position = a - seoul.begin() ;
    
    ;
    string answer = "김서방은 " + to_string(position) +"에 있다";
    return answer;
}