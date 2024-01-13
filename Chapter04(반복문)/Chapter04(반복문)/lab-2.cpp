//종합실습 예제-2
//사용자로부터 하나의 정수를 입력받고 해당하는 값까지 피보나치 수열을 출력하는 프로그램을 작성하시오.
// 피보나치수열 : 앞의 두 개의 수를 더해서 다음에 나오는 값이 정해지는 형태의 수열
//예) 1, 1, 2, 3, 5, 8, 13 ...
//실행결과
//정수 하나를 입력하세요 : 22
// 1 1 2 3 5 8 13 21

/*#include <iostream>
using namespace std;

int main(void) {
	
	int temp = 0, num = 0;
	int num1=1, num2 = 1;

	cout << "정수를 하나 입력하세요 : ";
	cin >> num;

	cout << num1<< " ";
	while (true) {
		if (num2 >= num)
			break;
		cout << num2 << " ";
		temp = num2;
		num2 += num1;
		num1 = temp;
		
	}
	return 0;
}*/