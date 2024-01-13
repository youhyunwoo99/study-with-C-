//�ߺ��Լ�(overloaded function)�� �ǽ�
//�Լ��� �����
//�Ű������� ����, Ÿ��, ������ �ñ״��Ķ�� �Ѵ�.
//�Լ��̸��� �Ƴ��鼭 ���α׷��ӵ� ���� ���� �Լ��� �ܿ� �ʿ䰡 ����.
//overload : �����ϴ�, �δ��� ���� �����
//�ߺ��Լ��� �Լ����� ���ƾ� �Ѵ�.
//�Ű������� �ñ״��İ� �޶�� �Ѵ�.
//�Ű������� ���� ����Ÿ���� �ٸ� ���� �����ε� ������ �������� 
//�ʴ´�.

#include <iostream>
using namespace std;

int add(int x, int y);
//����Ÿ���� �����ε� �������ǿ� �������� �ƴ��Ѵ�. ���� �Ű�������
//����, ����, Ÿ�Կ� ���ؼ� ������������.(�߿�)
//long add(int x, int y);
double add(double x, double y);
int add(int arr[], int size);
int add(int* arr, int size);

int main(void) {

	int x = 10, y = 20;
	double d_x = 1.88, d_y = 1.99;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(int);
	int* ptr = arr;
	
	cout << "add(int x, int y) ȣ�� ���� �� : " << add(x, y) << endl
		<< endl;
	cout << "add(double x, double y) ȣ�� ���� �� : " << add(x, y) << endl
		<< endl;
	cout << "add(arr[], size) ȣ�� ���� �� : " << add(arr, size) << endl
		<< endl;
	cout << "add(ptr, size) ȣ�� ���� �� : " << add(ptr, size) << endl
		<< endl;
	
	return 0;
}
//�ߺ��Լ��� �Ű������� �ٸ����� add(���ϱ� ���)�� ���� ����� �ϴ�
//���� �����ϴ�.
int add(int x, int y) {
	return x + y;
}
double add(double x, double y) {
	return x + y;
}
//int add(int arr[], int size) {
//
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	return sum;
//} �Ʒ����� ��ų� �� �߿� �ϳ��� ������ �ȴ�. �ּҰ� �����ϰ� �Ѿ�
//���� �Ű������� ������ ����, Ÿ���� ���ٸ� �����Ѱ� �ν��� �ϰ�
//������ �ִ� ���� ����ϰ� �ȴ�.
int add(int *ptr, int size) {

	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += ptr[i];
	}
	return sum;
}