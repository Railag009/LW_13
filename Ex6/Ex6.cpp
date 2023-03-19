// Если в массиве есть хотя бы 3 простых элемента, то получить список, состоящий из отрицательных элементов этого массива.
// -1 2 -3 4 -5 13 -6 7 -8

#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;

struct list
{
	int info;
	list* next;
	list* prev;
};

int prost(int a, int i)
{
	if (a >= i)
	{
		if (a % i == 0) return prost(a, i + 1) + 1;
		return prost(a, i + 1);
	}
	return 0;
}
int lim(int a)
{
	if (prost(a, 1) == 2) return 1;
	return 0;
}
int main()
{
	int x, k;
	list* head = new list;
	list* p, * r;
	int n;
	cout << "Enter count of array - ";
	cin >> n;
	int* a = new int[n];

	k = 0;

	for (int i = 0; i < n; i++)
	{		
		cin >> a[i];
		k += lim(a[i]);
	}

	head = new list;
	p = head;

	if (k > 2)
	{

		for (int i = 0; i < n; i++)
		{

			if (a[i] < 0)
			{

				r = new list;
				r->info = a[i];
				r->next = NULL;
				r->prev = p;
				p->next = r;
				p = r;

			}

		}

		r = head;
		head = head->next;
		head->prev = NULL;
		delete r;

		p = head;
		while (p != NULL)
		{
			cout << setw(4) << p->info;
			p = p->next;
		}

	}
	else
	{
		cout << "There are no prime numbers or there are less than 3";
	}		

}
