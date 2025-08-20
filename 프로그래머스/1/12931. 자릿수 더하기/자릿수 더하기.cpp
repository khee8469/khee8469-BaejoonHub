#include <iostream>

using namespace std;
int solution(int n)
{
	int sum = 0;
	char str[10];
	sprintf(str, "%d", n);

	for (int i = 0; i < 10; ++i)
	{
		if (str[i] == '\0')
		{
			break;
		}
		sum += str[i] - 48;
	}
    return sum;
}