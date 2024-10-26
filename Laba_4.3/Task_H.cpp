/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 4.3
КТбо1-6, Смелов Игорь Александрович
Задание H
14.04.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <algorithm>

#include <vector>



using namespace std;



struct Inform {//Структура в которой храниться информация об уже проверенных вариантах

    bool fl;

    int count;

    Inform() : fl(false) {} 

};



int f_rekyr(const vector<int>& lim, long long left, long long right, string player, vector<vector<Inform>>& res);//Объявление рекурсивной функции для проверки оптимальной стратегии 



int main() {

    long long N;

    cin >> N;

    vector<int> Limb(N);

    for (long long i = 0; i < N; i++) {

        cin >> Limb[i];

    }

    vector<vector<Inform>> Res(N, vector<Inform>(N));



    int result = f_rekyr(Limb, 0, Limb.size() - 1, "First", Res);

    if (result > 0) {

        cout << "1";

    }

    else if (result < 0) {

        cout << "2";

    }

    else {

        cout << "0";

    }

}





int f_rekyr(const vector<int>& lim, long long left, long long right, string player, vector<vector<Inform>>& res) {//Реализация рекурсивной функции для проверки оптимальной стратегии

    if (res[left][right].fl == 1) {

        return res[left][right].count;

    }

    else if (left > right) {

        return 0;

    }

    else if (left == right) {

        if (player == "First") {

            return lim[left];

        }

        else {

            return -lim[left];

        }

    }



    int leftRes, rightRes;



    if (player == "First") {

        leftRes = f_rekyr(lim, left + 1, right, "Second", res) + lim[left];

        rightRes = f_rekyr(lim, left, right - 1, "Second", res) + lim[right];

    }

    else {

        leftRes = f_rekyr(lim, left + 1, right, "First", res) + -lim[left];

        rightRes = f_rekyr(lim, left, right - 1, "First", res) + -lim[right];

    }



    res[left][right].fl = 1;



    if (player == "First") {

        res[left][right].count = max(leftRes, rightRes);

    }

    else {

        res[left][right].count = min(leftRes, rightRes);

    }

    return res[left][right].count;

}
