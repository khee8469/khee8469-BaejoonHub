#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper)
{
    vector<int> answer;

    int minY = 50;
    int minX = 50;
    int maxY = 0;
    int maxX = 0;

    for (int i = 0; i < wallpaper.size(); i++)
    {
        // 맨왼쪽 맨위쪽 구하기
        for (int j = 0; j < wallpaper[i].size(); j++)
        {
            if (wallpaper[i][j] == '#')
            {
                if (i < minY)
                {
                    minY = i;
                }
                if (j < minX)
                {
                    minX = j;
                }
            }
        }

        // 맨오른쪽 맨아래쪽  구하기
        for (int j = 0; j < wallpaper[i].size(); j++)
        {
            if (wallpaper[i][wallpaper[i].size() - 1 - j] == '#')
            {
                if (maxY < i)
                {
                    maxY = i;
                }
                if (maxX < wallpaper[i].size() - 1 - j)
                {
                    maxX = wallpaper[i].size() - 1 - j;
                }
            }
        }
    }

    answer.push_back(minY);
    answer.push_back(minX);
    answer.push_back(maxY + 1);
    answer.push_back(maxX + 1);

    return answer;
}