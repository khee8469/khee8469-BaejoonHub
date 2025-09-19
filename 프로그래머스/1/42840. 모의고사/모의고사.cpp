#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> answer;
    int player1 = 0;
    int player2 = 0;
    int player3 = 0;
    
    for(int i = 0; i < answers.size(); i++)
    {
        //1번
        if(answers[i] == i % 5 + 1)
        {
            ++player1;
        }
        
        //2번
        if(0 == i%2) 
        {
            if(answers[i]==2)
            {
                ++player2;
            }
        }
        else
        {           
            int a =  (i+1) / 2 % 4;
            if(a ==1)
            {
                if(answers[i]==1)
                {
                    ++player2;
                }
            }
            else if(a==0)
            {
                if(answers[i]==5)
                {
                    ++player2;
                }
            }
            else
            {
                if(answers[i]==a+1)
                {
                    ++player2;
                }
            }
        }
        
        //3번
        if(i % 10 == 0 || i % 10 == 1)
        {
            if(answers[i] == 3)
            {
                ++player3;
            }
        }
        else if(i % 10 == 2 || i % 10 == 3)
        {
            if(answers[i] == 1)
            {
                ++player3;
            }
        }
        else if(i % 10 == 4 || i % 10 == 5)
        {
            if(answers[i] == 2)
            {
                ++player3;
            }
        }
        else if(i % 10 == 6 || i % 10 == 7)
        {
            if(answers[i] == 4)
            {
                ++player3;
            }
        }
        else if(i % 10 == 8 || i % 10 == 9)
        {
            if(answers[i] == 5)
            {
                ++player3;
            }
        }
    }
    
    int max = player1;
    if(player2 > max)
    {
        max = player2;
    }
    if(player3 > max)
    {
        max = player3;
    }
    
    if(max ==player1)
    {
        answer.push_back(1);
    }
    if(max ==player2)
    {
        answer.push_back(2);
    }
    if(max ==player3)
    {
        answer.push_back(3);
    }
    
    return answer;
}