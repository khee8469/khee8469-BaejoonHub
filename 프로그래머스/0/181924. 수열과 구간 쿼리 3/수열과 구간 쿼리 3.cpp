#include <string>
#include <vector>
#include <algorithm> // swap 함수를 사용하기 위해 필요합니다

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    // 각 쿼리를 순회하며 원소 교환하기
    for (int i = 0; i < queries.size(); i++) {
        int idx1 = queries[i][0];
        int idx2 = queries[i][1];
        
        // C++ 표준 라이브러리의 swap 함수를 사용해 두 값의 위치를 바꿉니다.
        swap(arr[idx1], arr[idx2]);
    }
    
    return arr;
}