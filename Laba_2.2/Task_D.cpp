/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 2.2
КТбо1-6, Смелов Игорь Александрович
Задание D
10.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <functional>

#include <algorithm>

#include <vector>

using namespace std;



int main(void) {

 long long N, Res, L, f, h;

 cin >> N;

 vector <long long> Limb(N+1), Nimb(N);



 for (int i = 0; i < N; i++) {

  cin >> Limb[i];

  Nimb[i] = Limb[i];

 }

 sort(Limb.begin(), Limb.end(), greater<long long>());

 Limb[N] = -1;



 for (int i = 0; i < N; i++) {

  f = 1;

  Res = 0;

  L = Nimb[i];

  (L & 1) ? (h = (L + 1) / 2) : (h = L / 2);



  if (L != Limb[N - 1]) {

   for (auto up = upper_bound(Limb.begin(), Limb.end(), L, greater<long long>()); f; up++) {

    if (up + 1 == Limb.end()) {

     f = 0;

    }

    else if (*up < h) {

     f = 0;

    }

    else {

     long long l = L - *up;

     auto lo = upper_bound(Limb.begin(), Limb.end(), l, greater<long long>());

     lo--;

     while (*lo == l) {

      if (lo != up) {

       Res++;

       lo--;

      }

      else {

       break;

      }

     }

    }

   }

  }

  cout << Res << endl;

 }



 return 0;

}
