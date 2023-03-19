// Дан двунаправленный список. Получть массив, содержащий в себе все четные элементы списка,
// которые в сумме с соседями дают число 15.
// 7 4 4 10 2 3 10 1 12 2 0
// 4 2 12

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

int sum(int a, int b, int c)
{

	if (a + b + c == 15) return 1;
	return 0;

}

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

	int n;
	cout << "Enter count of array - ";
	cin >> n;
	int* a = new int[n];
	int i = 0;

	p = head->next;

	while (p->next != NULL)
	{

		if ((p->info % 2 == 0) && (sum(p->info, p->next->info, p->prev->info) == 1))
		{
			
			a[i] = p->info;
			cout << setw(4) << a[i];
			i++;			

		}

		p = p->next;

	}

}
