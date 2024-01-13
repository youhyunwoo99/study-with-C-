//종합실습 예제-4(while)
//사용자로부터 상품 가격을 입력받아서 그 합계를 구하는 프로그램을 작성하시오.
//출력결과
//상품금액 입력 : 1000
//상품금액 입력 : 2000
//상품금액 입력 : 3000
//상품금액 입력 : 0입력시 종료
//상품의 총 가격 : 6000원!

/*#include <iostream>

using namespace std;

int main(void) {
	
	int total = 0;
	int input= 0;
	bool tag= true;
	while (tag) {
		
			cout << "상품금액 입력 : ";
			cin >> input;
			
			if (input == 0) {
				cout << "상품의 총 가격 : " << total << "원!" << endl;
				tag = false;
			}

			total = total + input;
	}
	return 0;
}*/