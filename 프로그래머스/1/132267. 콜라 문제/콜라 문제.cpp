#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) 
{
    int sumCora = 0;
    int curEmptyBottle = n;
    while(a <= curEmptyBottle)
    {
        int remainder = curEmptyBottle % a;
        int newCora = curEmptyBottle / a * b;
        sumCora += newCora;
        curEmptyBottle = newCora + remainder;
    }
    
    return sumCora;
}