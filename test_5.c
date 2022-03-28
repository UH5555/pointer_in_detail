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
//	printf("%d\n",pa(2, 3));
//	printf("%d\n", Add(2, 3));
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

//(*(void(*)())0)();
//void(*)() - 函数指针类型
//(void(*)())0 - 把0强制类型转换为函数指针类型 - 0就是一个函数的地址
//(*(void(*)())0)() - 调用0地址处的该函数

//void(*signal(int,void(*)(int)))(int);
//void(*      signal(int,void(*)(int))     )(int)
//void(*      signal(int,  void(*)(int)  )   )(int)
//signal是一个函数声明
//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是void
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放函数
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5  -1   6   0
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//
//int main()
//{
//	char*(*pf)(char*, const char*) = my_strcpy;
//	char* (*ppArr[4])(char*, const char*) = { my_strcpy };
//}

//void menu()
//{
//	printf("******************\n");
//	printf("***1.Add  2.Sub***\n");
//	printf("***3.Mul  4.Div***\n");
//	printf("***** 0.exit *****\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	//pfArr - 是一个函数指针数组  - 转移表
////	int (*pfArr[5])(int, int)={0,Add,Sub,Mul,Div};
////	do
////	{
////		menu();
////		printf("请选择:");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 4)
////		{
////			printf("请输入两个操作数：");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", pfArr[input](x, y));
////		}
////		else if (input == 0)
////		{
////			printf("退出\n");
////		}
////		else
////			printf("选择错误！\n");
////	} while (input);
////	return 0;
////}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出！\n");
//			break;
//		defalut:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pfArr[4])(int, int);//pfAff - 是一个函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr 是一个指向【函数指针数组】的指针
//	//ppfArr 是一个指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//	return 0;
//}

void print(char* str)
{
	printf("hehe:%s", str);
}

void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");
}

int main()
{
	test(print);
	return 0;
}