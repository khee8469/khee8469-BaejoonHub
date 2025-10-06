#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) 
{
    string answer = ""; 
    vector<int> vec = {0,0,0,0,0,0,0,0};
    
    for(int i =0; i < survey.size(); i++)
    { 
        if(survey[i] == "RT")
        {
            switch(choices[i])
            {
                case 1 : vec[0] += 3;
                    break;
                case 2 : vec[0] += 2;
                    break;                    
                case 3 : vec[0] += 1;
                    break;
                case 4 : vec[0] += 0;
                    break;
                case 5 : vec[0] += -1;
                    break;
                case 6 : vec[0] += -2;
                    break;                                        
                case 7 : vec[0] += -3;
                    break;                       
            }
            
        }
        if(survey[i] == "TR")
        {
            switch(choices[i])
            {
                case 1 : vec[1] += 3;
                    break;
                case 2 : vec[1] += 2;
                    break;                    
                case 3 : vec[1] += 1;
                    break;
                case 4 : vec[1] += 0;
                    break;
                case 5 : vec[1] += -1;
                    break;
                case 6 : vec[1] += -2;
                    break;                                        
                case 7 : vec[1] += -3;
                    break;                       
            }
        }
        
        if(survey[i] == "CF")
        {
            switch(choices[i])
            {
                case 1 : vec[2] += 3;
                    break;
                case 2 : vec[2] += 2;
                    break;                    
                case 3 : vec[2] += 1;
                    break;
                case 4 : vec[2] += 0;
                    break;
                case 5 : vec[2] += -1;
                    break;
                case 6 : vec[2] += -2;
                    break;                                        
                case 7 : vec[2] += -3;
                    break;                       
            }
        }
        if(survey[i] == "FC")
        {
            switch(choices[i])
            {
                case 1 : vec[3] += 3;
                    break;
                case 2 : vec[3] += 2;
                    break;                    
                case 3 : vec[3] += 1;
                    break;
                case 4 : vec[3] += 0;
                    break;
                case 5 : vec[3] += -1;
                    break;
                case 6 : vec[3] += -2;
                    break;                                        
                case 7 : vec[3] += -3;
                    break;                       
            }
        }
        
        if(survey[i] == "JM")
        {
            switch(choices[i])
            {
                case 1 : vec[4] += 3;
                    break;
                case 2 : vec[4] += 2;
                    break;                    
                case 3 : vec[4] += 1;
                    break;
                case 4 : vec[4] += 0;
                    break;
                case 5 : vec[4] += -1;
                    break;
                case 6 : vec[4] += -2;
                    break;                                        
                case 7 : vec[4] += -3;
                    break;                       
            }
        }
        if(survey[i] == "MJ")
        {
            switch(choices[i])
            {
                case 1 : vec[5] += 3;
                    break;
                case 2 : vec[5] += 2;
                    break;                    
                case 3 : vec[5] += 1;
                    break;
                case 4 : vec[5] += 0;
                    break;
                case 5 : vec[5] += -1;
                    break;
                case 6 : vec[5] += -2;
                    break;                                        
                case 7 : vec[5] += -3;
                    break;                       
            }
        }
        
        if(survey[i] == "AN")
        {
            switch(choices[i])
            {
                case 1 : vec[6] += 3;
                    break;
                case 2 : vec[6] += 2;
                    break;                    
                case 3 : vec[6] += 1;
                    break;
                case 4 : vec[6] += 0;
                    break;
                case 5 : vec[6] += -1;
                    break;
                case 6 : vec[6] += -2;
                    break;                                        
                case 7 : vec[6] += -3;
                    break;                       
            }
        }
        if(survey[i] == "NA")
        {
            switch(choices[i])
            {
                case 1 : vec[7] += 3;
                    break;
                case 2 : vec[7] += 2;
                    break;                    
                case 3 : vec[7] += 1;
                    break;
                case 4 : vec[7] += 0;
                    break;
                case 5 : vec[7] += -1;
                    break;
                case 6 : vec[7] += -2;
                    break;                                        
                case 7 : vec[7] += -3;
                    break;                       
            }
        }
    }
    
    if(vec[0] >= vec[1])
    {
        answer += 'R';
    }
    else
    {
        answer += 'T';
    }
    
    if(vec[2] >= vec[3])
    {
        answer += 'C';
    }
    else
    {
        answer += 'F';
    }
    
    if(vec[4] >= vec[5])
    {
        answer += 'J';
    }
    else
    {
        answer += 'M';
    }
    
    if(vec[6] >= vec[7])
    {
        answer += 'A';
    }
    else
    {
        answer += 'N';
    }
    
    return answer;
}