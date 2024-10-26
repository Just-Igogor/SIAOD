/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 5.1
КТбо1-6, Смелов Игорь Александрович
Задание B
21.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <vector>

using namespace std;

using ll = long long;



bool Limb[100][100], Vis[100];



void DFS(int x, int n) {

    Vis[x] = 1;

    for (int i = 0; i < n; i++) {

        if (Limb[x][i] && !Vis[i]) {

            DFS(i, n);

        }

    }

    return;

}



int main(void) {



    cin.tie(nullptr);

    cout.tie(nullptr);

    ios_base::sync_with_stdio(false);



    long long N, Ribs = 0, flag = 1;



    cin >> N;

    for (long long i = 0; i < N; i++) {

        for (long long j = 0; j < N; j++) {

            cin >> Limb[i][j];

            Ribs += Limb[i][j];

        }

    }



    DFS(0, N);

    for (int i = 0; i < N && flag; i++) {

        if (!Vis[i]) {

            flag = 0;

        }

    }



    if ((Ribs+2 == N*2) && flag) {

        cout << "Yes" << endl;

    }

    else {

        cout << "No" << endl;

    }



    return 0;

}
