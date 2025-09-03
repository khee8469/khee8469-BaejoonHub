#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    vector<int> vec;
    vec.push_back(0);
    for (int i = 0; i < n; ++i)
    {
        if (vec[0] < 2)
        {
            vec[0] += 1;
        }
        else
        {
            vec[0] = 0;
            if (vec.size() == 1)
            {
                vec.push_back(0);
            }

            for (int j = 1; j < vec.size(); ++j)
            {
                if (vec[j] < 2)
                {
                    vec[j] += 1;
                    break;
                }
                else
                {
                    vec[j] = 0;
                    if (j + 1 == vec.size())
                    {
                        vec.push_back(1);
                        break;
                    }
                    
                }
            }
        }
    }

    int mul = 1;
    for (int i = 0; i < vec.size(); i++)
    {
        answer += vec[vec.size()-1-i] * mul;
        mul *= 3;
    }

    return answer;
}