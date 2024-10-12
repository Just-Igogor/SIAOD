/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 2.2
КТбо1-6, Смелов Игорь Александрович
Задание E
10.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <functional>

#include <algorithm>

#include <vector>

using namespace std;



int main(void) {

 long long N, K, Len, Left, Right, Med, Cow;

 cin >> N >> K;

 vector <long long> Limb(N);



 for (int i = 0; i < N; i++) {

  cin >> Limb[i];

 }

 sort(Limb.begin(), Limb.end());



 Left = 0;

 Right = Limb[N - 1] - Limb[0] + 1;

 while (Left < Right) {

  Med = (Left + Right) / 2;

  Cow = 1;

  Len = Limb[0];

  for (long long i = 1; i < N; i++) {

   if (Limb[i] - Len > Med) {

    Cow++;

    Len = Limb[i];

   }

  }

  if (Cow >= K) {

   Left = Med + 1;

  }

  else {

   Right = Med;

  }

 }



 cout << Left << endl;



 return 0;

}
