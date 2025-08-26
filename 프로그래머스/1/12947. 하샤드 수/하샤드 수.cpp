#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
	string str = to_string(x); //"10";
	int sum = 0;
	for (char c : str)
	{
		sum += c-48;
	}
	printf("sum : %d", sum);
	if (x % sum == 0) 
	{
		return true;
	}
	
	return false;
}