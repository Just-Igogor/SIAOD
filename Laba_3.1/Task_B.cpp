/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 3.1
КТбо1-6, Смелов Игорь Александрович
Задание B
17.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <algorithm>

#include <map>

using namespace std;



int main(void) {

 map <string, pair<int, long long>> Limb;

 string s, str;

 long long mach, els = 0;



 for (int i = 0; i < 6; i++) {

  cin >> s >> str >> mach;

  if (Limb.count(str) > 0) {

   Limb[str].first++;

   if (Limb[str].second > mach) {

    Limb[str].second = mach;

   }

  }

  else if (Limb.count(str) == 0) {

   Limb[str].first = 1;

   Limb[str].second = mach;

  }

 }



 for (auto it : Limb) {

  if (els < it.second.first) {

   els = it.second.first;

   str = it.first;

   mach = it.second.second;

  }

  else if (els == it.second.first) {

   if (mach > it.second.second) {

    str = it.first;

    mach = it.second.second;

   }

  }

 }



 cout << str << endl;



 return 0;

}
