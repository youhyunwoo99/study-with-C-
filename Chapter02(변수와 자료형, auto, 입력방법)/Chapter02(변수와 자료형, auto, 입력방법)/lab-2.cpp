//종합 실습 예제-2
//화씨 온도를 섭씨 온도로 바꾸기
//섭씨 온도 = 5/9(화씨온도 -32) -> 공식
//소수점을 반드시 나타내도록 한다.
//화씨온도는 사용자한테 입력받도록 한다.
// 
//출력결과
//화씨온도 60도는 섭씨온도 15.5556입니다.
//계속하려면 아무 키나 누르십시오.
#include <iostream>
using namespace std;

int main(void)
{
	float h_temp = 0.0f;
	cout << "화씨온도 입력 : ";
	cin >> h_temp;

	float result = (5 / 9.0f) * (h_temp - 32);

	cout << "화씨온도 " << h_temp << "도는 섭씨 온도 " << result << "입니다.";
	return 0;
}