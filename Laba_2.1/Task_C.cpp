/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 2.1
КТбо1-6, Смелов Игорь Александрович
Задание C
03.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

vector <pair <int, int>> Child;



bool comp(pair <int, int> x, pair <int, int> y) {

    return(x.second < y.second);

}



int main(void) {

    char c;

    long long f = 1;



    for (int i = 1; i <= 26; i++) {

        cin >> c;

        Child.push_back(make_pair(i, c - 64));

    }



    sort(Child.begin(), Child.end(), comp);



    for (int i = 0; i < 26; i++) {

        if (Child[i].second <= i) {

            f = 0;

        }

    }



    if (f) {

        cout << "YES" << endl;

        for (int i = 0; i < 26; i++) {

            cout << Child[i].first << ' ';

        }

    }

    else {

        cout << "NO";

    }



    return 0;

}
