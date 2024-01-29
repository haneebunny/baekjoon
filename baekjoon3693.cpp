#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;


int main() {


    int test_cases;
    cin >> test_cases;

    // 가장 좋은 주차장의 길이와 너비를 구하기 위해
    while (test_cases--) {

        ll n; // 컨테이너 갯수 n
        cin >> n;

        // 5개 묶음 처리
        n = (n + 4) / 5;

        // 같은 둘레의 최대 넓이 -> 정사각형일 때(가장 이상적)
        ll optimum = (int)sqrt(2 * n);

        // 그러나 정사각형엔 넣을 수 없으니, 최선의 길이와 너비를 찾아야 하는데 . ..
       

       
    }

    return 0;
}
