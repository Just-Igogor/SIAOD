/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 2.1
КТбо1-6, Смелов Игорь Александрович
Задание A
03.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <algorithm>

using namespace std;



int main(void) {

    long long N, Shrek, Krup, Card[101];

    Shrek = Krup = 0;



    cin >> N;

    for (int i = 0; i < N; i++) {

        cin >> Card[i];

    }



    sort(Card, Card + N);

    for (int i = 0; i < N; i++) {

        if (i < N / 2) {

            Shrek -= Card[i];

        }

        else {

            Shrek += Card[i];

        }

    }



    cout << Shrek << endl;



    return 0;

}
