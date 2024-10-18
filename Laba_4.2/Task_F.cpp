/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.2
КТбо1-6, Смелов Игорь Александрович
Задание F
06.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <vector>

using namespace std;



int main(void) {

    long long X, Y, Res = 0;

    vector <vector<long long>> Limb(10, vector<long long>(10, 0));



    scanf("%lld %lld", &X, &Y);

    Limb[X][Y] = 1;



    for (int j = Y + 1; j <= 8; j++) {

        for (int i = 1; i <= 8; i++) {

            Limb[i][j] = Limb[i - 1][j - 1] + Limb[i + 1][j - 1];

        }

    }



    for (int i = 1; i <= 8; i++) {

        Res += Limb[i][8];

    }



    printf("%lld\n", Res);



    return 0;

}
