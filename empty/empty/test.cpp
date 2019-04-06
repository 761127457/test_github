//#include<iostream>
//using namespace std;

//int main()
//{
//	//int i;
//	//cin >> i;
//	//cout << i << endl;
//	//return 0;
//	
//	//const int len = 10;
//	//int arr[5][len] = { 0 };
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 10; j++) {
//	//		arr[i][j] = i * 10 + j;
//	//		cout << " " << arr[i][j];
//	//	}
//	//	cout << endl;
//	//}
//
//	int arr[][10] = {
//		{2,3,5,6},
//		{22,33,452,76},
//		{42,83,35,46},
//		{92,53,75,26},
//		{62,983,785,776},
//		};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 10; j++) {
//			//arr[i][j] = i * 10 + j;
//			cout << " " << arr[i][j];
//		}
//		cout << endl;
//	}
//	
//	int *p = arr[0];
//	cout << (*p) << " p: " << (*(p + 1)) << endl;
//	cout << (*(p + 13)) << " p: " << (*(p + 25)) << endl;
//
//	// 直接定义指向数组的指针，这个指针指向有10个元素的一个数组
//	//int(*pp)[10];
//	//pp = arr;
//	//cout << (**pp) << " pp: " << (**(pp + 1)) << endl;
//	//cout << (*(*(pp + 2))) << " pp: " << (*(*(pp + 2)+7)) << endl;
//
//	// 直接定义指向数组的指针，这个指针指向第二个有10个元素的一个数组
//	int(*pp)[10];
//	pp = &arr[1];
//	cout << (**pp) << " pp: " << (**(pp + 1)) << endl;
//	cout << (*(*(pp + 2))) << " pp: " << (*(*(pp + 2) + 7)) << endl;
//
//	// 这样操作，就不需要指定指向数组的指针到底要指向多大的数组
//	// 有问题，不能这样，并且如果真要定义指向数组的指针，因为二维数组
//	// 中，第二个参数必须指定长度
//	//int**pp;
//	//int *np = arr[1];
//	//pp = &(np);
//	//cout << (**pp) << " pp: " << (**(pp + 1)) << endl;
//	//cout << (*(*(pp + 2))) << " pp: " << (*(*(pp + 2) + 7)) << endl;
//	return 0;
//}

#include<iostream>
#include <stdarg.h>
using namespace std;

int Sum(int n, ...);

int Sum(int n, ...)
{
	int i = 0;
	int sum = 0;
	va_list ptr;//定义一个char*的指针ptr
	va_start(ptr, n);//初始化指针位置，指针指向参数列表第一个参数也就是n
	for (i = 0; i < n; i++) {
		sum += va_arg(ptr, int);//获取下一个数据
	}
	va_end(ptr);
	return sum;
}

int main()
{
	int sum1 = Sum(2,1,2);
	cout << "sum1:" << sum1 << endl;
	int sum2 = Sum(3, 1, 2, 5);
	cout << "sum2:" << sum2 << endl;
}












