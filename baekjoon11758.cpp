#include <iostream>
using namespace std;

    struct Coord {
        int x;
        int y;
    }; // x, y 구조체 생성 
    
    // (헷갈려서 열거형을 사용하였으나 없어도 될 것 같음)
    enum Direction {
        COUNTER_CLOCKWISE = 1, // 반시계 방향
        CLOCKWISE = -1, // 시계 방향
        COLLINEAR = 0, // 일직선
    };
    
    // 외적 후 결과 반환 함수 
    Direction getCrossProduct(const Coord& p1, const Coord& p2, const Coord& p3) {
     int crossProduct = (p2.x - p1.x) * (p3.y - p2.y) - (p2.y - p1.y) * (p3.x - p2.x);
     
     if (crossProduct > 0) return COUNTER_CLOCKWISE;
     else if (crossProduct < 0) return CLOCKWISE; 
     else return COLLINEAR; 
    };
        
int main () {

    Coord coords[3];
    
    for (int i = 0; i < 3; i++) 
    {
        cin >> coords[i].x >> coords[i].y;
    }; // 좌표 세 개 입력 받기
    
    // 좌표를 넣은 뒤 외적한 결과 값을 받는다. 
    Direction result = getCrossProduct(coords[0], coords[1], coords[2]);
    
    
    cout << result << endl;
    return 0;
}