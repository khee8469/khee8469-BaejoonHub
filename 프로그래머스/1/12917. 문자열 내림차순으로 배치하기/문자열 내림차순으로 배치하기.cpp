#include <string>
#include <algorithm>

using namespace std;

bool compare(const char a, const char b)
{
    return a > b;
}

string solution(string s)
{
    sort(s.begin(), s.end(), compare);

    return s;
}