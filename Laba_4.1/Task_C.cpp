/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.1
КТбо1-6, Смелов Игорь Александрович
Задание C
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



    vector <long long> Limb(N + 1), Res(N + 1);

    for (int i = 1; i <= N; i++) {

        scanf("%lld", &Limb[i]);

    }



    sort(Limb.begin(), Limb.end());

    Res[0] = 0;

    Res[1] = Limb[2] - Limb[1];



    for (int i = 2; i <= N; i++) {

        Res[i] = min(Res[i - 1], Res[i - 2]) + Limb[i] - Limb[i - 1];

    }



    printf("%lld\n", Res[N]);



    return 0;

}
