// lab8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "input number of the tusk" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {	int a, b;
		cout << "input a,b" << endl;
		cin >> a >> b;
		if (a == b)
		{
			a = 0;
			b = 0;
		}
		else
		{
			if (a > b)
			{
				b = a;
			}
			else
			{
				a = b;
			}
		}
		cout << "a = " << a << " b = " << b << endl; }
			break;

	case 2: {int a, b, c;
		cout << "input a,b,c" << endl;
		cin >> a >> b >> c;
		if (a >= b && c >= b)
			cout << "the sum of the largest two numbers = " << (a + c) << endl;
		if (b >= a && c >= a)
			cout << "the sum of the largest two numbers = " << (b + c) << endl;
		if (a >= c && b >= c)
			cout << "the sum of the largest two numbers = " << (a + b) << endl; }
			break;

	case 3: {int a, b, c, ab, ac, a1, b1, c1;
		setlocale(LC_ALL, "RUS");
		cout << "введите (a;a1), (b;b1), (c;c1)" << endl;
		cin >> a >> a1 >> b >> b1 >> c >> c1;
		ab = sqrt(pow((b - a), 2) + pow((b1 - a1), 2));
		ac = sqrt(pow((c - a), 2) + pow((c1 - a1), 2));
		if (ab != ac)
		{
			if (ab > ac)
				cout << "c ближе к a, расстояние от точки A = " << ac << endl;
			else
				cout << "b ближе к a, расстояние от точки A = " << ab << endl;
		}
		else
			cout << "c и b ближе к a, их расстояние от точки a = " << ab << endl; }
			break;

	case 4: {int x, y;
		cout << "input (x;y)" << endl;
		cin >> x >> y;
		if (x > 0 && y > 0)
			cout << "1 coordinate quarter" << endl;
		if (x < 0 && y > 0)
			cout << "2 coordinate quarter" << endl;
		if (x < 0 && y < 0)
			cout << "3 coordinate quarter" << endl;
		if (x > 0 && y < 0)
			cout << "4 coordinate quarter" << endl;
		if (x == 0 || y == 0)
			cout << "error" << endl; }
			break;

	case 5: {int x;
		setlocale(LC_ALL, "RUS");
		cout << "input x" << endl;
		cin >> x;
		if ((x > 0) && (x % 2 == 0))
			cout << "положительное четное число" << endl;
		if ((x < 0) && (x % 2 != 0))
			cout << "отрицательное нечетное число" << endl;
		if ((x < 0) && (x % 2 == 0))
			cout << "отрицательное четное число" << endl;
		if ((x > 0) && (x % 2 != 0))
			cout << "положительное нечетное число" << endl;
		if (x == 0)
			cout << "нулевое число" << endl; }
			break;
			
	case 6: {int a;
		setlocale(LC_ALL, "RUS");
		cout << "введите a, в диапазоне (1-999)" << endl;
		cin >> a;
		if (a >= 1 && a < 1000)
		{
			if (a > 99 && a < 1000)
			{
				if (a % 2 == 0)
					cout << "трехзначное четное число" << endl;
				else
					cout << "трехзначное нечетное число" << endl;
			}
			if (a > 9 && a < 100)
			{
				if (a % 2 == 0)
					cout << "двузначное четное число" << endl;
				else
					cout << "двузначное нечетное число" << endl;
			}
			if (a > 0 && a < 10)
			{
				if (a % 2 == 0)
					cout << "однозначное четное число" << endl;
				else
					cout << "однозначное нечетное число" << endl;
			}
		}
		else
			cout << "error" << endl; }
			break;

	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
