#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    string s1 = to_string(a) + to_string(b);
    int num1 = stoi(s1);
    int num2 = 2*a*b;
    if(num1 >= num2)
    {
        answer = num1;
    }
    else
    {
        answer = num2;
    }
    return answer;
}