#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score)
{
    // 사과 k 점수까지 분류
    // 사과상자 크기 m
    // 상자중 가장 낮은 점수 * m 이 상자 가격
    // score는 사과 점수들 이걸로 가장 많이 벌기
    int answer = 0;
    sort(score.begin(), score.end());

    if(score.size() % m == 0)
    {
       for (int i = 0; i < score.size(); i++)
       { 
          if (i % m == 0)
          {
             answer += score[i] * m;
          }
       }
    }
    else
    {
        int a = score.size() % m;
        for (int i = a; i < score.size(); i++)
        {
            if((i-a) % m == 0)
            {
                answer += score[i] * m;  
            }
        }
    }

    return answer;
}
