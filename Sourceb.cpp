#include <iostream>
#define pi 3.14

int f(int L)
{
	return L / 100;
}

int f2(int M)
{
	return M / 1000;
}

int f3(int B)
{
	return B / 1024;
}

int f4(int A, int B)
{
	return A / B;
}

int f5(int A, int B)
{
	return A % B;
}

void f6(int a)
{
	std::cout << a / 10 << std::endl;
	std::cout << a % 10 << std::endl;
}

int f7(int ab)
{
	int a = ab / 10;
	int b = ab % 10;
	std::cout << a + b << std::endl;
	std::cout << a * b << std::endl;
}

void f9(int abc)
{
	int a = abc / 100;
	std::cout << a;
}

void f10(int abc)
{
	std::cout << abc % 10 << std::endl;
	std::cout << abc % 100 << std::endl;
}

int f11(int abc)
{
	int a = abc / 100;
	int b = abc % 100;
	int c = abc % 10;
	std::cout << a + b + c << std::endl;
	std::cout << a * b*c << std::endl;
}

void f17(int abcd)
{
	int b = abcd / 1000;
	b %= 100;
	std::cout << b;
}

void f18(int abcd)
{
	int a = abcd / 10000;
	a %= 10;
	std::cout << a;
}

int f19(int sec)
{
	

}

int main()
{
	f10(284);
	system("pause");
	return 0;
}