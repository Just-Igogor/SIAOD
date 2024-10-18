/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.2
КТбо1-6, Смелов Игорь Александрович
Задание E
06.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <vector>

using namespace std;



int main(void) {

    long long N, M;



    scanf("%lld %lld", &N, &M);



    vector <vector<long long>> Limb(N+1, vector<long long>(M+1, 0));



    for (int i = 1; i <= N; i++) {

        for (int j = 1; j <= M; j++) {

            scanf("%lld", &Limb[i][j]);

        }

    }



    Limb[0][1] = 1;

    for (int i = 1; i <= N; i++) {

        for (int j = 1; j <= M; j++) {

            Limb[i][j] = Limb[i][j] * (Limb[i - 1][j] + Limb[i][j - 1]);

        }

    }



    if (Limb[N][M]) {

        printf("%lld\n", Limb[N][M]);

    }

    else {

        printf("Impossible\n");

    }



    return 0;

}
