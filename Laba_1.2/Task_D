/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 1.2
КТбо1-6, Смелов Игорь Александрович
Задание D
25.02.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;



typedef struct Item {

 Item* next = nullptr;

 Item* prev = nullptr;

 long long data;

}Item;



typedef Item* List;



int main(void) {

 char c = ' ', cp = 'a';

 List Head = new Item;

 List Tail = Head;

 List p;



 scanf("%c", &c);

 while (((c != ' ') || (cp != ' ')) && (c != '\n')) {

  if (c == '+') {

   Tail->prev->data = Tail->prev->data + Tail->data;

   p = Tail;

   Tail = Tail->prev;

   delete p;

  }

  else if (c == '-') {

   Tail->prev->data = Tail->prev->data - Tail->data;

   p = Tail;

   Tail = Tail->prev;

   delete p;

  }

  else if (c == '*') {

   Tail->prev->data = Tail->prev->data * Tail->data;

   p = Tail;

   Tail = Tail->prev;

   delete p;

  }

  else if (c != ' ') {

   p = new Item;

   p->data = c - 48;

   p->prev = Tail;

   Tail->next = p;

   Tail = p;

  }

  cp = c;

  scanf("%c", &c);

 }



 cout << Tail->data << '\n';



 return 0;

}
