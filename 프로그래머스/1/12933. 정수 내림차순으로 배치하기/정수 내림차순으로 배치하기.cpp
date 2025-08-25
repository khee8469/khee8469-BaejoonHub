#define _CRT_SECURE_NO_WARNINGS

#include <cstring>
#include <iostream>
using namespace std;

long long solution(long long n)
{
    char buf[32];
    sprintf(buf, "%lld", n);

    int size = strlen(buf);

    for (int i = 0; i < size; ++i)
    {
        int maxIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if(buf[maxIndex] < buf[j])
            {
                maxIndex = j;
			}
        }

		int temp = buf[i];
        buf[i] = buf[maxIndex];
		buf[maxIndex] = temp;
    }

    return atoll(buf);;
}