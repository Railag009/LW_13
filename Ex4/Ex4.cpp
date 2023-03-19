// Если список содержит 5 элементов содержащих четную сумму цифр, то получить массив состоящий из четных элементов списка.
// 22 1 33 5 6 12 12 13 55 0

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

int lim(int a)
{

	if (a > 0) return a / 10 + a % 10;
	return 0;

}
int kol(int a)
{

	if (lim(a) % 2 == 0) return 1;
	return 0;

}
int main()
{
	int x, n;
	list* head = new list;	
	list* p, * r;	
	cin >> x;
	head->info = x;
	head->next = NULL;
	p = head;
	int k = 0;

	k += kol(p->info);
	cin >> x;

	while (x)
	{
		r = new list;
		r->info = x;
		r->next = NULL;
		p->next = r;
		p = r;
		k += kol(p->info);
		cin >> x;
	}

	if (k == 5)
	{
				
		int* a = new int;
		int i = 0;

		p = head;

		while (p != NULL)
		{

			if (p->info % 2 == 0)
			{
				a[i] = p->info;
				cout << setw(4) << a[i];
				i++;
			}

			p = p->next;

		}

	}
	
}
