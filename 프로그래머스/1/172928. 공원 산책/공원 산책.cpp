#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes)
{
    vector<int> answer;
    vector<vector<int>> parkMatrix;
    int yLength = park.size();
    int xLength = park[0].size();
    int yIndex = 0;
    int xIndex = 0;

    for (int i = 0; i < park.size(); i++)
    {
        vector<int> row;
        parkMatrix.push_back(row);
    }

    for (int i = 0; i < park.size(); i++)
    {
        for (int j = 0; j < park[i].size(); j++)
        {
            if (park[i][j] == 'X')
            {
                parkMatrix[i].push_back(0);
            }
            else
            {
                parkMatrix[i].push_back(1);
                if (park[i][j] == 'S')
                {
                    yIndex = i;
                    xIndex = j;
                }
            }
        }
    }

    for (string route : routes)
    {
        int moveCount = route[2] - 48;
        if (route[0] == 'E')
        {
            if (xIndex + moveCount < xLength)
            {
                bool block = false;
                for (int i = 1; i <= moveCount; i++)
                {
                    if (parkMatrix[yIndex][xIndex + i] == 0)
                    {
                        block = true;
                        break;
                    }
                }
                if (!block)
                {
                    xIndex += moveCount;
                }
            }
        }
        else if (route[0] == 'W')
        {
            if (xIndex - moveCount >= 0)
            {
                bool block = false;
                for (int i = 1; i <= moveCount; i++)
                {
                    if (parkMatrix[yIndex][xIndex - i] == 0)
                    {
                        block = true;
                        break;
                    }
                }
                if (!block)
                {
                    xIndex -= moveCount;
                }
            }
        }
        else if (route[0] == 'S')
        {
            if (yIndex + moveCount < yLength)
            {
                bool block = false;
                for (int i = 1; i <= moveCount; i++)
                {
                    if (parkMatrix[yIndex+i][xIndex] == 0)
                    {
                        block = true;
                        break;
                    }
                }
                if (!block)
                {
                    yIndex += moveCount;
                }
            }
        }
        else if (route[0] == 'N')
        {
            if (yIndex - moveCount >= 0)
            {
                bool block = false;
                for (int i = 1; i <= moveCount; i++)
                {
                    if (parkMatrix[yIndex-i][xIndex] == 0)
                    {
                        block = true;
                        break;
                    }
                }
                if (!block)
                {
                    yIndex -= moveCount;
                }
            }
        }
    }

    answer.push_back(yIndex);
    answer.push_back(xIndex);
    cout << answer[0] << "," << answer[1] << endl;
    return answer;
}

