#include <string>
#include <vector>

using namespace std;


string solution(string phone_number)
{
    const char* str = phone_number.c_str();
    char arr[32];

    int i;
    for (i = 0; i < phone_number.length(); i++)
    {
        if (i < phone_number.length() - 4)
        {
            arr[i] = '*';
        }
        else
        {
            arr[i] = str[i];
        }
    }
    
    arr[i] = '\0';
    return arr;
}