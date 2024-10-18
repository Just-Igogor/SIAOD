/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.1
КТбо1-6, Смелов Игорь Александрович
Задание B
30.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <vector>

using namespace std;



int main(void) {

    long long N;



    scanf("%lld", &N);



    vector <long long> Limb(N + 1);

    Limb[N] = 0;



    for (int i = N - 1; i >= 0; i--) {

        Limb[i] = Limb[i + 1];

        for (int j = 2; j * j <= N - i; j++) {

            Limb[i] = min(Limb[i], Limb[i + (j * j)]);

        }

        Limb[i]++;

    }



    printf("%lld\n", Limb[0]);



    return 0;

}
