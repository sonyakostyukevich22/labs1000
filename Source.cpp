#include <iostream>
#define pi 3.14

int f(int a)
{
	int P;
	return P = 4 * a;
}

int f2(int a)
{
	int S = pow(a,2);
	return S;
}

int f3(int a, int b)
{
	int S = a * b;
	int P = 2 * (a + b);
	return P;
}

int f4(int d)
{
	double L = pi * d;
	return L;
}

int f5(int a)
{
	int V = pow(a, 3);
	int S = 6 * pow(a, 2);
	return S;
}

int f6(int a, int b, int c)
{
	int V = a * b * c;
	int S = 2 * (a * b + b * c + a * c);
	return S;
}

int f7(int R)
{
	int L = 2 * pi* R;
	int S = pi * pow(R, 2);
	return S;
}

int f8(int a, int b)
{
	int arifm = (a + b) / 2;
	return arifm;
}

int f9(int a, int b)
{
	int geo = sqrt(a * b);
	return geo;
}

int f10(int a, int b)
{
	int sum = a + b;
	int raz = a - b;
	int proizv = a * b;
	int chast = pow(a, 2) / pow(b, 2);
	return chast;
}

int f11(int a, int b)
{
	int sum = a + b;
	int raz = a - b;
	int proizv = a * b;
	int chast = abs(a) / abs(b);
	return chast;
}

int f12(int a, int b)
{
	int c = sqrt(pow(a, 2) + pow(b, 2));
	int P = a + b + c;
	return P;
}

int f13(int R1, int R2)
{
	int S1 = pi * pow(R1, 2);
	int S2 = pi * pow(R2, 2);
	int S3 = S1 - S2;
	return S3;
}

int f14(int L)
{
	int R = L / (2 * pi);
	int S = pi * pow(R, 2);
	return S;
}

int f15(int S)
{
	int D = sqrt(4 * S / pi);
	int L = D * pi;
	return L;
}

int f16(int x1, int x2)
{
	int distance = abs(x2 - x1);
	return distance;
}

int f17(int A, int B, int C)
{
	int AC = abs(A - C);
	int BC = abs(B - C);
	int sum = AC + BC;
	return sum;
}

int f18(int A, int B, int C)
{
	int AC = abs(A - C);
	int BC = abs(C - B);
	int proizv = AC * BC;
	return proizv;
}

int f19(int x1, int y1, int x2, int y2)
{
	int P = (abs(x2 - x1) + abs(y2 - y1)) * 2;
	int S = abs(x2 - x1)*abs(y2 - y1);
	return P;
}

int f20(int x1, int y1, int x2, int y2)
{
	int distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return distance;
}

int f21(int x1, int y1, int x2, int y2, int x3, int y3)
{
	int a = abs(x2 - x1) + abs(y2 - y1);
	int b = abs(x2 - x3) + abs(y2 - y3);
	int c = abs(x3 - x1) + abs(y3 - y1);
	int p = (a + b + c) / 2;
	int S = sqrt(p*(p - a)*(p - b)*(p - c));
	int P = a + b + c;
	return P;

}

int f22(int A, int B)
{
	int C = B;
	B = A;
	A = C;
	return B;
}

int f23(int A, int B, int C)
{
	int S = C;
	C = B;
	B = A;
	A = S;
	return A;
}

int f24(int A, int B, int C)
{
	int D = C;
	int F = B;
	C = A;
	B = D;
	A = F;
	return A;
}

int f25(int x)
{
	int y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	return y;
}

int f26(int x)
{
	int y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	return y;
}

void f27(int A)
{
	int a = pow(A, 2);
	std::cout << a << std::endl;
	std::cout << a * a << std::endl;
	std::cout << a * a * a << std::endl;
}

void f28(int A)
{
	int a2 = pow(A, 2);
	int a5 = pow(A, 5);
	std::cout << a2 << std::endl;
	std::cout << a5 / a2 << std::endl;
	std::cout << a5 << std::endl;
	std::cout << a5 * a5 << std::endl;
	std::cout << a5 * a5*a5 << std::endl;
}



int main()
{
	f28(192);
	system("pause");
	return 0;
}