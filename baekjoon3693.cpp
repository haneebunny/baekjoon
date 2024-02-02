#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

typedef long long ll;


int main() {


    // 0. 컨테이너 개수 입력 받기
    int N;
    cin >> N; 

    int n = N;

    // 0. pair 클래스 생성

    pair<int, int> pair;

    // 1. 순서쌍 구하기
    for (int = 1; i < n; i++) {
        int j = ceil(n / i); // 가로에 몇 개(i)들어가는 지 알면 세로는 최소 몇 개여야 하는 지 구할 수 있다. 
        pair.append([i,j]);
    }


    // 2. 길이로 변환, 면적 구하기

    

    // 3. 면적이 최소인 순서쌍 구하기

    // 적당히 큰 수로 설정
    int area = 100000; 
    int idx = 100000; 

    for (int i = 1; i < n ; i++) {

        // area보다 작으면, 즉 cal_area가 더 최적이라면, 
        if (area > cal_area) {
            area = cal_area; 
            idx = i; 
        }
    }

    // pair[idx] 가 best choice 
    int test_cases;
    cin >> test_cases;

 

    return 0;
}
