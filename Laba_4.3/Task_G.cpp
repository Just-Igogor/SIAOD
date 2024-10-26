/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.3
КТбо1-6, Смелов Игорь Александрович
Задание G
14.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <vector>

using namespace std;



int main(void) {

    long long N;



    scanf("%lld", &N);

    vector <long long> Limb(N + 1, 0);



    for (long long i = 1; i <= N; i++) {

        Limb[i] = Limb[i - 1];

        for (long long j = 2; j * j * j <= i; j++) {

            Limb[i] = min(Limb[i], Limb[i - (j * j * j)]);

        }

        Limb[i]++;

    }



    printf("%lld\n", Limb[N]);



    return 0;

}
