// Дан массив. Получить выунаправленный список, содержащий только кратные 5
// элементы этого массива.

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
    list* p, * r;
    int n;
    cout << "Enter count of array - ";
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];

    }

    head = new list;
    p = head;

    for (int i = 0; i < n; i++)
    {

        if (a[i] % 5 == 0)
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