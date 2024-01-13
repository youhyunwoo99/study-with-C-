//함수에 인수를 전달하는 2가지 방법
//2. 참조에 의한 호출(call by reference) : 참조에 의한 호출 방식은
//함수를 호출할 때, 인수값으로 넘기는 것이 아니고 메모리의 주소값을
//넘긴다. 하지만 C++에 참조자가 있어 주소값 대신에 참조자를 넘기는
//방법이다. 참조자는 NULL로도 초기화를 할 수도 없고, 선언과 동시에
//변수의 별명이다. C++에서 참조에 의한 호출은 호출할 때, 원본 값이
//넘어가므로 호출한 곳에 영향을 끼친다.

//#include <iostream>
//using namespace std;
//
////함수 원형
//int call_reference(int& num);
//int call_reference(int* num);
//
//int main(void) {
//	
//	int num = 100, call_after = 0;
//	//int& ref_num = NULL;	//참조자는 NULL로 초기화가 안된다.
//	//동시에 초기화 해야한다.
//	int& ref_num = num;	//변수 num의 별명으로 참조자를 ref_num도 num과 같은 형태
//	int* ptr_num = NULL;	//포인터 변수는 NULL로 초기화가 가능하다.
//	ptr_num = &num;	//포인터 변수 ptr_num에 변수 num의 주소가 들어가 있다.
//
//	cout << "[main()영역]" << endl;
//	cout << "num의 값 : " << num << endl;
//	cout << "num의 주소값 : " << &num << endl;
//	cout << "ref_num의 값 : " << ref_num << endl;
//	cout << "ref_num의 주소값 : " << &ref_num << endl;
//	cout << "ptr_num의 값 : " << ptr_num << endl;
//	cout << "ptr_num을 이용하여 num 간접참조 하여 num값 : " << *ptr_num << endl;
//
//
//	//참조자를 매개변수로 주고 main()함수의 num의 별칭인 원본 값을 넘김
//	call_after = call_reference(ref_num);
//
//	cout << "[main()영역으로 다시 돌아옴]" << endl;
//	cout << "num의 값 : " << num << endl;
//	cout << "num의 주소값 : " << &num << endl;
//	cout << "ref_num의 값 : " << ref_num << endl;
//	cout << "ref_num의 주소값 : " << &ref_num << endl;
//	cout << "ptr_num의 값 : " << ptr_num << endl;
//	cout << "ptr_num을 이용하여 num 간접참조 하여 num값 : " << *ptr_num << endl;
//	
//	//C언어에서 사용되는 포인터를 통한
//	call_after = call_reference(&num);
//	cout << "[main()영역으로 다시 돌아옴]" << endl;
//	cout << "num의 값 : " << num << endl;
//	cout << "num의 주소값 : " << &num << endl;
//	cout << "ref_num의 값 : " << ref_num << endl;
//	cout << "ref_num의 주소값 : " << &ref_num << endl;
//	cout << "ptr_num의 값 : " << ptr_num << endl;
//	cout << "ptr_num을 이용하여 num 간접참조 하여 num값 : " << *ptr_num << endl;
//
//	return 0;
//}
//
////call_reference()함수가 중복 정의(C++에서는 허용)
////참조자가 매개변수로 넘어온 경우
//int call_reference(int& num) {
//	cout << endl;
//	cout << "[call_reference(참조자)]함수 영역 " << endl;
//	cout << "num의 값 : " << num << endl;
//	cout << "num의 주소값 : " << &num << endl;
//	num += 150;
//	cout << "[call_reference]함수 수행 완료 " << endl << endl;
//	return num;
//}
//int call_reference(int* num) {
//	cout << endl;
//	cout << "[call_reference(포인터)]함수 영역 " << endl;
//	cout << "num의 값 : " << *num << endl;
//	cout << "num의 주소값 : " << num << endl;
//	*num += 50;
//	cout << "[call_reference]함수 수행 완료 " << endl << endl;
//	return *num;
//}
////결론 : 원천적으로 바라볼 때, 참조자는 포인터가 솔직히 많이 어렵기
////때문에 C++에서 혹은 자바에서 참조변수라고 등장을 한 것이다.
////C++에서 참조자가 등장하고 참조자를 많이 쓰라고 권하는 이유는
////명백하기 때문에 어떤 프로젝트를 맡는가에 따라서 참조자와 포인터를
////선택해서 사용하면 되고 어디까지 프로그래머의 선택에 따라서 사용하는
////것이 좋다. 중요한 것은 원칙은 변하지 않는다.