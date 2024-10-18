/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.2
КТбо1-6, Смелов Игорь Александрович
Задание D
06.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <vector>

#include <set>

#include <cmath>

using namespace std;



int main(void) {

    long long N, M, K;

    int Temp1 = 0, Temp2 = 0;

    set <pair<int, int>> Diagon;



    scanf("%lld %lld %lld", &N, &M, &K);



    vector <vector<double>> Limb(N+2, vector<double>(M+2, 1000000));



    for (int i = 0; i < K; i++) {

        scanf("%d %d", &Temp1, &Temp2);

        Diagon.insert(make_pair(Temp1+1, Temp2+1));

    }



    N++;

    M++;

    Limb[0][1] = -100;

    for (int i = 1; i <= N; i++) {

        for (int j = 1; j <= M; j++) {

            Limb[i][j] = min(Limb[i - 1][j]+100, Limb[i][j - 1]+100);

            if (Diagon.count(make_pair(i, j))) {

                Limb[i][j] = min(Limb[i][j], Limb[i - 1][j - 1] + sqrt(20000));

            }

        }

    }



    printf("%.0llf\n", round(Limb[N][M]));



    return 0;

}
