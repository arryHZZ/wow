//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<math.h>
//
//void Print1(int n, int m)
//{
//	while (m)
//	{
//		if (m > 9)
//			printf("%d ", n / pow((double)10, m - 1));
//		else
//			printf("%d", n);
//		n = n
//	}
//}
//
//void Print2(int n)
//{
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int num = a;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num / 10;
//	}
//	printf("%d", count);
//	Print1(a,count);
//	Print2(a);
//	return 0;
//}
//
//
////#include<math.h>
////#include<stdio.h>
////int is_prime(int n)
////{
////	int i = 0;
////	if (n < 2)
////		return 0;
////	for (i = 2; i < sqrt(n); i++)
////	{
////		if (n%i == 0)
////			return 0;
////	}
////	return 1;
////}
////
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	if (is_prime(a) == 1)
////		printf("prime");
////	else
////		printf("not prime");
////	return 0;
////}
////
//#include<stdio.h>
//int add(int a, int b)
//{
//	int i = a;
//	int sum = 0;
//	for (i; i <= b; i++)
//	{
//		if (i % 3 == 1 && i % 5 == 3)
//			sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", add(a, b));
//	return 0;
//}
////
////
////#include<iostream>
////using namespace std;
////
////
////bool isPalindrome(int x,int m)
////{
////	long tmp;
////	long rest = x;
////	for (tmp = 0; rest; tmp = tmp * m + rest % m, rest = rest / m);
////	if (tmp<0)
////	{
////		return false;
////	}
////	if (tmp == x){
////		return true;
////	}
////	else if (tmp != x)
////	{
////		return false;
////	}
////	return 0;
////}
////
////int resver(int num1,int n)
////{
////	int m = 0;
////	while (num1 != 0) {
////		m = m * n + num1 % n;
////		num1 = num1 / n;
////	}
////	return m;
////}
////
////int main()
////{
////	int num = 0;
////	int sum = 0;
////	int tmp = 0;
////	int m;
////	cin >> m;
////	cin >> num;
////
////	int count = 0;
////	sum = num;
////	while (1)
////	{
////		tmp = resver(sum , m);
////		sum = sum + tmp;
////		count++;
////		if (count > 30)
////		{
////			cout << "Impossible!" << endl;
////			break;
////		}
////		if (isPalindrome(sum,m))
////		{
////			cout << count << endl;
////			break;
////		}
////	}
////
////	system("pause");
////	return 0;
////}
////


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	for (A=-30; A <= 30; A++)
//	{
//		for (B=-30; B <= 30; B++)
//		{
//			for (C=-30; C <= 30; C++)
//			{
//				if ((A - B) == a 
//					&& (B - C) == b 
//					&& (A + B) == c 
//					&& (B + C) == d)
//				{
//					cout << A << B << C << endl;
//					return 0;
//				}
//			}
//		}
//	}
//	cout << "No" << endl;
//	
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;

int main()
{
	char num[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E','F' };
	int M;
	int N;
	string s;
	cin >> M >> N;
	if (M < 0)
	{
		s += '-';
		M = -M;
		while (M)
		{
			s.insert(1, 1, num[M%N]);
			M /= N;
		}
	}
	else
	{
		while (M)
		{
			s.insert(0, 1, num[M%N]);
			M /= N;
		}
	}
	cout << s;
	return 0;
}
