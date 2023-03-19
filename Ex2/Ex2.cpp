// Дан двунаправленный список. Получить двунаправленный список, содержащий толко положительные элементы.
// 

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
	int x;
	list* head = new list;
	list* head2 = new list;
	list* p, * r;
	list* p2, * r2;
	head2 = new list;
	p2 = head2;
	cin >> x;
	head->info = x;
	head->next = NULL;
	p = head;

	cin >> x;

	while (x)
	{
		r = new list;
		r->info = x;
		r->next = NULL;
		p->next = r;
		p = r;
		cin >> x;
	}

	p = head;

	while (p != NULL)
	{

		if (p->info > 0)
		{
			r2 = new list;
			r2->info = p->info;
			r2->next = NULL;
			r2->prev = p2;
			p2->next = r2;
			p2 = r2;
		}

		p = p->next;

	}

	r2 = head2;
	head2 = head2->next;
	head2->prev = NULL;
	delete r2;

	p2 = head2;
	while (p2 != NULL)
	{
		cout << setw(4) << p2->info;
		p2 = p2->next;
	}

}
