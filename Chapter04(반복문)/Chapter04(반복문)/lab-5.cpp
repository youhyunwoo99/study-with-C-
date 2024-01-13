//#include <iostream>
//using namespace std;
//
//int main(void) {
//	
//	int dan = 0, cnt = 0, recent = 1, gob = 0;
//	char yn = ' ';
//
//	do {
//		cout << "<" << recent << "회 실행 >" << endl;
//		//중첩 for 문으로 구구단 실행
//		for (cnt = 1; cnt < 10; cnt++)
//		{
//			for (dan = 2; dan < 10; dan++)
//			{
//				gob = dan * cnt;
//				cout << dan << " * " << cnt << " = " << gob << " ";
//			}
//			cout << endl;
//		}
//		re :
//		//사용자 의중을 물어보는 코드
//		cout << "프로그램을 다시 실행하시겠습니까?(Y,y / N,n) : ";
//		cin >> yn;
//
//		switch (yn)
//		{
//		case 'Y':
//		case 'y':
//			recent++;
//			continue;
//			//break 문이 없어도 프로그램을 수행하는데 문제는 없다. 단지, 문법 때문에 적어 놓은 것이다.
//			break;
//		case 'N':
//		case 'n':
//			cout << "총 " << recent << "회 실행 후 프로그램을 종료합니다." << endl;
//			return 0;
//			break;
//		default:
//			cout << "입력하신 알파벳 " << yn << "는(은) 허용하지 않습니다." << endl;
//			cout << "알파벳을 다시 입력하세요." << endl;
//			goto re;
//			break;
//		}
//	} while (true);
//	return 0;
//}