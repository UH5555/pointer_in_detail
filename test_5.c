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
//void(*)() - ����ָ������
//(void(*)())0 - ��0ǿ������ת��Ϊ����ָ������ - 0����һ�������ĵ�ַ
//(*(void(*)())0)() - ����0��ַ���ĸú���

//void(*signal(int,void(*)(int)))(int);
//void(*      signal(int,void(*)(int))     )(int)
//void(*      signal(int,  void(*)(int)  )   )(int)
//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
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
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ�ź���
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5  -1   6   0
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
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
////	//pfArr - ��һ������ָ������  - ת�Ʊ�
////	int (*pfArr[5])(int, int)={0,Add,Sub,Mul,Div};
////	do
////	{
////		menu();
////		printf("��ѡ��:");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 4)
////		{
////			printf("������������������");
////			scanf("%d%d", &x, &y);
////			printf("%d\n", pfArr[input](x, y));
////		}
////		else if (input == 0)
////		{
////			printf("�˳�\n");
////		}
////		else
////			printf("ѡ�����\n");
////	} while (input);
////	return 0;
////}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������������������");
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
//		printf("��ѡ��");
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
//			printf("�˳���\n");
//			break;
//		defalut:
//			printf("ѡ�����\n");
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
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pfArr[4])(int, int);//pfAff - ��һ������ָ�������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr ��һ��ָ�򡾺���ָ�����顿��ָ��
//	//ppfArr ��һ��ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
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