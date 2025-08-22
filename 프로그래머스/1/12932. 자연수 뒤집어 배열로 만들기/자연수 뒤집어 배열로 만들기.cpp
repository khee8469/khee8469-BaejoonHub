#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n)
{
	string str = to_string(n);
	vector<int> answer(str.size());

    for(int i = 0; i < str.size(); ++i)
    {
		answer[i] = str[str.size() - 1 - i] - '0';
	}

    return answer;
}