//�Լ��� �μ��� �����ϴ� 2���� ���
//2. ������ ���� ȣ��(call by reference) : ������ ���� ȣ�� �����
//�Լ��� ȣ���� ��, �μ������� �ѱ�� ���� �ƴϰ� �޸��� �ּҰ���
//�ѱ��. ������ C++�� �����ڰ� �־� �ּҰ� ��ſ� �����ڸ� �ѱ��
//����̴�. �����ڴ� NULL�ε� �ʱ�ȭ�� �� ���� ����, ����� ���ÿ�
//������ �����̴�. C++���� ������ ���� ȣ���� ȣ���� ��, ���� ����
//�Ѿ�Ƿ� ȣ���� ���� ������ ��ģ��.

//#include <iostream>
//using namespace std;
//
////�Լ� ����
//int call_reference(int& num);
//int call_reference(int* num);
//
//int main(void) {
//	
//	int num = 100, call_after = 0;
//	//int& ref_num = NULL;	//�����ڴ� NULL�� �ʱ�ȭ�� �ȵȴ�.
//	//���ÿ� �ʱ�ȭ �ؾ��Ѵ�.
//	int& ref_num = num;	//���� num�� �������� �����ڸ� ref_num�� num�� ���� ����
//	int* ptr_num = NULL;	//������ ������ NULL�� �ʱ�ȭ�� �����ϴ�.
//	ptr_num = &num;	//������ ���� ptr_num�� ���� num�� �ּҰ� �� �ִ�.
//
//	cout << "[main()����]" << endl;
//	cout << "num�� �� : " << num << endl;
//	cout << "num�� �ּҰ� : " << &num << endl;
//	cout << "ref_num�� �� : " << ref_num << endl;
//	cout << "ref_num�� �ּҰ� : " << &ref_num << endl;
//	cout << "ptr_num�� �� : " << ptr_num << endl;
//	cout << "ptr_num�� �̿��Ͽ� num �������� �Ͽ� num�� : " << *ptr_num << endl;
//
//
//	//�����ڸ� �Ű������� �ְ� main()�Լ��� num�� ��Ī�� ���� ���� �ѱ�
//	call_after = call_reference(ref_num);
//
//	cout << "[main()�������� �ٽ� ���ƿ�]" << endl;
//	cout << "num�� �� : " << num << endl;
//	cout << "num�� �ּҰ� : " << &num << endl;
//	cout << "ref_num�� �� : " << ref_num << endl;
//	cout << "ref_num�� �ּҰ� : " << &ref_num << endl;
//	cout << "ptr_num�� �� : " << ptr_num << endl;
//	cout << "ptr_num�� �̿��Ͽ� num �������� �Ͽ� num�� : " << *ptr_num << endl;
//	
//	//C���� ���Ǵ� �����͸� ����
//	call_after = call_reference(&num);
//	cout << "[main()�������� �ٽ� ���ƿ�]" << endl;
//	cout << "num�� �� : " << num << endl;
//	cout << "num�� �ּҰ� : " << &num << endl;
//	cout << "ref_num�� �� : " << ref_num << endl;
//	cout << "ref_num�� �ּҰ� : " << &ref_num << endl;
//	cout << "ptr_num�� �� : " << ptr_num << endl;
//	cout << "ptr_num�� �̿��Ͽ� num �������� �Ͽ� num�� : " << *ptr_num << endl;
//
//	return 0;
//}
//
////call_reference()�Լ��� �ߺ� ����(C++������ ���)
////�����ڰ� �Ű������� �Ѿ�� ���
//int call_reference(int& num) {
//	cout << endl;
//	cout << "[call_reference(������)]�Լ� ���� " << endl;
//	cout << "num�� �� : " << num << endl;
//	cout << "num�� �ּҰ� : " << &num << endl;
//	num += 150;
//	cout << "[call_reference]�Լ� ���� �Ϸ� " << endl << endl;
//	return num;
//}
//int call_reference(int* num) {
//	cout << endl;
//	cout << "[call_reference(������)]�Լ� ���� " << endl;
//	cout << "num�� �� : " << *num << endl;
//	cout << "num�� �ּҰ� : " << num << endl;
//	*num += 50;
//	cout << "[call_reference]�Լ� ���� �Ϸ� " << endl << endl;
//	return *num;
//}
////��� : ��õ������ �ٶ� ��, �����ڴ� �����Ͱ� ������ ���� ��Ʊ�
////������ C++���� Ȥ�� �ڹٿ��� ����������� ������ �� ���̴�.
////C++���� �����ڰ� �����ϰ� �����ڸ� ���� ����� ���ϴ� ������
////����ϱ� ������ � ������Ʈ�� �ô°��� ���� �����ڿ� �����͸�
////�����ؼ� ����ϸ� �ǰ� ������ ���α׷����� ���ÿ� ���� ����ϴ�
////���� ����. �߿��� ���� ��Ģ�� ������ �ʴ´�.