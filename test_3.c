#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�� - ָ�� - ָ������
//	//int* p3 ;//����ָ�� - ָ�����͵�ָ��
//	//char* p4;//�ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//����ָ�룬pa����һ������ָ��
//
//	return 0;
//}

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])//err
//{}
//void test3(int* arr)//err
//{}
//void test4(int** arr)//err
//{}
//void test5(int(*arr)[5])
//{}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);//�п���ʡ��
//	test2(arr);//�в�����ʡ��
//	test3(arr);
//	test4(arr);
//	test5(arr);
//	return 0;
//}

//void test(int **p)
//{}
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];//ָ������
//	test(arr);
//	return 0;
//}


////����ָ�� - ��ָ������ָ�� - ��ź����ĵ�ַ
////����ָ�� - ��ָ�������ָ��
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	//&������ �� ������ ���Ǻ����ĵ�ַ��
//	int(*pa)(int, int) = Add;
//	printf("%d\n",(*pa)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}