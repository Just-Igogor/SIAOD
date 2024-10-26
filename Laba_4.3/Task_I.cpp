/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.3
КТбо1-6, Смелов Игорь Александрович
Задание I
14.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <functional>

#include <algorithm>

#include <vector>

using namespace std;



int rec(int i,  int k, int t, vector<vector<int>>&a) {

    if (i == 0) {

        if (t == k) {

            return 1;

        }

        else {

            return 0;

        }

    }

    if ((t + i <= k) && (a[i][t] == 0)) {

       a[i][t] += rec(i - 1, k, t + 1, a);

       a[i][t] += rec(i + 1, k, t + 1, a);

    }

    return a[i][t];

}



int main() {

    int N, K;

    scanf("%d %d", &N, &K);



    vector<vector<int>> memory(K+1, vector<int>(K+1, 0));



    if (N == K) {

        cout << '1' << endl;

    }

    else if ((K - N) & 1) {

        cout << '0' << endl;

    }

    else {

        int a = rec(N, K, 0, memory);

        cout << a << endl;

    }



    return 0;

}
