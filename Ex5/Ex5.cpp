// Дан двунаправленный список. Получить массив, содержащий положительные элементы списка в обратном порядке.
// 1 -2 3 4 -5 8 -6 0
// 8 4 3 1

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

int main()
{

	list* head, * p, * r;
	int x, y;
	head = new list;
	cin >> x;
	head->info = x;
	head->next = NULL;
	head->prev = NULL;
	p = head;

	cin >> x;
	while (x)
	{
		r = new list;
		r->info = x;
		r->next = NULL;
		r->prev = p;
		p->next = r;
		p = r;
		cin >> x;

	}

	
	int* a = new int;
	int i = 0;

	
	while (p != head->prev)
	{

		if (p->info > 0)
		{

			a[i] = p->info;
			cout << setw(4) << a[i];
			i++;

		}

		p = p->prev;

	}

}
