/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 1.2
КТбо1-6, Смелов Игорь Александрович
Задание F
25.02.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;



typedef struct Item {

    Item* next = nullptr;

    Item* prev = nullptr;

    int data;

}Item;



typedef Item* List;



int main(void) {

    char c;

    int N, L, I = 0, T = -1;

    List Head = new Item;

    List Tail = Head;

    List p, pm = Head;



    cin >> N;



    for (int i = 0; i < N; i++) {

        cin >> c;

        if (c == '+') {

            cin >> L;

            if (I == 0) {

                Head = new Item;

                Head->data = L;

                Tail = Head;

                pm = Head;

            }

            else {

                p = new Item;

                p->data = L;

                p->prev = Tail;

                Tail->next = p;

                Tail = p;

            }

            T++;

            I++;

        }

        else if (c == '*') {

            cin >> L;

            if (I == 0) {

                Head = new Item;

                Head->data = L;

                Tail = Head;

                pm = Head;

            }

            else if (I == 1) {

                p = new Item;

                p->data = L;

                p->prev = Tail;

                Tail->next = p;

                Tail = p;

            }

            else {

                p = new Item;

                p->data = L;

                p->prev = pm;

                p->next = pm->next;

                pm->next->prev = p;

                pm->next = p;

            }

            T++;

            I++;

        }

        else if (c == '-') {

            cout << Head->data << '\n';

            p = Head;

            if (Head->next != nullptr) {

                Head = Head->next;

            }

            T++;

            I--;

            if (T == 2) {

                pm = pm->next;

                T = 0;

            }

            if (I == 0) {

                T = -1;

            }

            delete p;

        }

        if (T == 2) {

            pm = pm->next;

            T = 0;

        }

    }



    return 0;

}
