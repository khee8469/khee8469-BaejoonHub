#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int num1 = 1;
    int num2 = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        num1 *= num_list[i];
        num2 += num_list[i];
    }
    
    return num1 < num2*num2 ? 1 : 0;
}