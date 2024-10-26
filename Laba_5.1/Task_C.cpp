/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 5.1
КТбо1-6, Смелов Игорь Александрович
Задание C
21.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <vector>

using namespace std;



int Limb[101][101], Vis[101], Flag = 1;



void DFS(int x, int color, int n) {

    if (Flag) {

        Vis[x] = color;

        for (int j = 1; j <= n; j++) {

            if (Limb[x][j]) {

                if (!Vis[j]) {

                    if (color == 1) {

                        DFS(j, 2, n);

                    }

                    else {

                        DFS(j, 1, n);

                    }

                }

                else {

                    if (Vis[x] == Vis[j]) {

                        Flag = 0;

                    }

                }

            }

        }

    }

    return;

}



int main(void) {

    cin.tie(nullptr);

    cout.tie(nullptr);

    ios_base::sync_with_stdio(false);



    int N, M, X, Y;



    cin >> N >> M;

    for (int i = 0; i < M; i++) {

        cin >> X >> Y;

        Limb[X][Y] = Limb[Y][X] = 1;

    }



    for (int i = 1; i <= N; i++) {

        if (!Vis[i]) {

            DFS(i, 1, N);

        }

    }



    if (Flag) {

        cout << "YES" << endl;

    }

    else {

        cout << "NO" << endl;

    }



    return 0;

}
