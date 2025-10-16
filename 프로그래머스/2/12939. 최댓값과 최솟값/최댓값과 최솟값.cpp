#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s)
{
    string answer = "";

    istringstream iss(s);
    string token;
    vector<int> numbers;

    while (iss >> token)
    {
        numbers.push_back(stoi(token));
    }

    sort(numbers.begin(), numbers.end());

    answer += to_string(numbers[0]);
    answer += ' ';
    answer += to_string(numbers[numbers.size() - 1]);

    return answer;
}