/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 2.2
КТбо1-6, Смелов Игорь Александрович
Задание F
10.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <algorithm>

#include <math.h>

#include <iomanip>

using namespace std;



int main(void) {

 double N, Res, Left, Right, Med;

 cin >> N;



 Right = sqrt(N);

 Left = sqrt(N - Right);

 for(int i = 0; i < 50; i++) {

  Med = (Left + Right) / 2;

  Res = Med * Med + sqrt(Med);

  if (Res <= N) {

   Left = Med + 0.000001;

  }

  else {

   Right = Med;

  }

 }



 cout << fixed << setprecision(6) << Left << endl;



 return 0;

}
