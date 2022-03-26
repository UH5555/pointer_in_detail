#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针 - 指针 - 指向数组
//	//int* p3 ;//整型指针 - 指向整型的指针
//	//char* p4;//字符指针 - 指向字符的指针
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//数组指针，pa就是一个数组指针
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
//	test1(arr);//行可以省略
//	test2(arr);//列不可以省略
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
//	int* arr[10];//指针数组
//	test(arr);
//	return 0;
//}


////函数指针 - 是指向函数的指针 - 存放函数的地址
////数组指针 - 是指向数组的指针
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
//	//&函数名 和 函数名 都是函数的地址。
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