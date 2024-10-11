/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 1.2
КТбо1-6, Смелов Игорь Александрович
Задание E
25.02.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;



typedef struct Item {

 Item* next = nullptr;

 int data;

}Item;



typedef Item* List;



int main(void) {

 int N, K, i = 0;

 List Tail = new Item;

 List p, d;



 cin >> N >> K;



 Tail->next = Tail;

 Tail->data = N;

 N--;



 for (int i = N; i > 0; i--) {

  p = new Item;

  p->data = i;

  p->next = Tail->next;

  Tail->next = p;

 }



 K--;

 p = Tail;

 while (p->next != p) {

  if (i == K) {

   i = 0;

   cout << p->next->data << ' ';

   d = p->next;

   p->next = p->next->next;

   delete d;

  }

  else {

   i++;

   p = p->next;

  }

 }

 cout << p->next->data << ' ';

 d = p->next;

 p->next = p->next->next;

 p = p->next;

 delete d;



 return 0;

}
