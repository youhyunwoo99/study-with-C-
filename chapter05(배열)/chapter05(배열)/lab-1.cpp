//1차원 배열의 종합실습 -1
//정수형 배열요소가 3개인 것을 선언 후, 초기화를 하도록 한다. 사용자로부터 배열 요소를 3개를 입력받고 배열에 저장한 후, 3개의 배열 값 중에서 최대값을 구하는 프로그램을 작성해보자.
//출력결과
//1번째 정수를 입력하시오. : 10
//2번째 정수를 입력하시오. : 6
//3번째 정수를 입력하시오. : 115
//가장 큰 수는 115이다.

//#include <iostream>
//using namespace std;
//#define count 3
//
//int main(void) {
//	int arr[count] = { 0 };
//	int max = 0;
//
//	for (int i = 0; i < count; i++)
//	{
//		cout << i+1 << "번째 정수를 입력하시오. : ";
//		cin >> arr[i];
//	}
//	for (int i = 0; i < count; i++)
//	{
//		if (arr[i] >= max) {
//			max = arr[i];
//		}
//	}
//	cout << "가장 큰 수는 " << max << "이다.";
//	return 0;
//}