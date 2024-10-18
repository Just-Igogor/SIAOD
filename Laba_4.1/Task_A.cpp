/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.1
КТбо1-6, Смелов Игорь Александрович
Задание A
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



    vector <long long> Limb(N), Res(N, 0);

    auto it = Limb.begin()+1;

    Res[0] = 0;



    for (int i = 0; i < N; i++) {

        scanf("%lld", &Limb[i]);

    }



    Res[1] = abs(Limb[1] - Limb[0]);

    for (int i = 2; i < N; i++) {

        Res[i] += min((abs(Limb[i] - Limb[i - 1]) + Res[i - 1]), (3 * abs(Limb[i] - Limb[i - 2]) + Res[i - 2]));

    }



    printf("%lld\n", Res[N-1]);



    return 0;

}
