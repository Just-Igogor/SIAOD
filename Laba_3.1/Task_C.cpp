/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 3.1
КТбо1-6, Смелов Игорь Александрович
Задание C
17.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <algorithm>

#include <map>

using namespace std;



int main(void) {

    map <string, long long> Limb;

    string Str;

    long long Temp, N;



    cin >> N;



    for (long long i = 0; i < N; i++) {

        cin >> Temp;

        if (Temp == 1) {

            cin >> Str >> Temp;

            Limb[Str] += Temp;

        }

        else if (Temp == 2) {

            cin >> Str;

            if (Limb.count(Str)) {

                cout << Limb[Str] << endl;

            }

            else {

                cout << "ERROR" << endl;

            }

        }

    }



    return 0;

}
