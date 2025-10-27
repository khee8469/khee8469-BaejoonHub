#include <vector>

using namespace std;

int solution(vector<int> arr)
{
    int answer = 0;
    int max = arr[0];
    int min = 0;



    for (int i = 0; i < arr.size() - 1; i++)
    {
        //최대 공약수 구하기
        for (int j = max; j > 0; j--)
        {
            if (max % j == 0 && arr[i + 1] % j == 0)
            {
                min = j;
                break;
            }
        }

        //최소 공배수
        max = (max * arr[i + 1]) / min;
    }

    answer = max;

    return answer;
}