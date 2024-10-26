/*ЮФУ, ИКТИБ, МОП ЭВМ
Практикум по программированию
Тема 5.1
КТбо1-6, Смелов Игорь Александрович
Задание A
21.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <vector>

using namespace std;

using ll = long long;



void DFS(int n, int k, int *vert, vector <bool> &vis, vector<vector<bool>> &limb) {

    vis[k] = 1;

    *(vert) += 1;

    for (int i = 1; i <= n; i++) {

        if (limb[k][i] && vis[i] == 0) {

            DFS(n, i, vert, vis, limb);

        }

    }

    return;

}



int main(void) {

    cin.tie(nullptr);

    cout.tie(nullptr);

    ios_base::sync_with_stdio(false);



    int N, K, X, Y, Vert = 0;



    cin >> N >> K;

    vector <bool> Vis(N + 1, 0);

    vector<vector<bool>> Limb(N + 1, vector<bool>(N + 1, 0));

    cin >> X;

    while (X != 0) {

        cin >> Y;

        Limb[X][Y] = 1;

        cin >> X;

    }



    DFS(N, K, &Vert, Vis, Limb);



    if (Vert == N) {

        cout << "Yes" << endl;

    }

    else {

        cout << "No" << endl;

    }



    return 0;

}
