#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int IFirst(int* a, const int size, int& max, int i)
{
	if (a[i] > max && a[i] % 2 == 0)
	{
		max = a[i]; // перший елемент, що
		return i; // задовольн€Ї умов≥
	} // вважаЇмо максимальним

	if (i < size - 1)
		return IFirst(a, size, max, i + 1);
	else
		return -1;
}
int Max(int* a, const int size, int max, int i)
{
	if (a[i] > max && a[i] > max && a[i] % 2 == 0)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, max, i + 1);
	else
		return max;
}
int main()
{
	srand((unsigned)time(NULL)); // ≥н≥ц≥ал≥зац≥€ генератора випадкових чисел
	const int n = 6;
	int a[n];
	int Low = -5;
	int High = 20;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	int max; // максимальний елемент
	int imax = IFirst(a, n, max, 0); // ≥ндекс максимального елемента
	if (imax == -1)
		cerr << "немаЇ елемент≥в, €к≥ задовольн€ють умов≥" << endl;
	else
		cout << "max = " << Max(a, n, max, imax + 1) << endl;
	return 0;
}