/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 2.1
КТбо1-6, Смелов Игорь Александрович
Задание B
03.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;



int main(void) {

    long long N, Card[30001], Res[30001], l = 0;



    cin >> N;

    for (int i = 0; i < N; i++) {

        cin >> Card[i];

    }



    sort(Card, Card + N);



    for (int i = 0; i < N; i+=2) {

        cout << Card[i] << ' ';

    }

    if (N & 1) {

        N -= 2;

    }

    else {

        N--;

    }

    for (int i = N; i > 0; i -= 2) {

        cout << Card[i] << ' ';

    }



    return 0;

}
