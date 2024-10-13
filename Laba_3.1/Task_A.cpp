/*ЮФУ, ИКТИБ, МОП ЭВМ
Структуры и алгоритмы обработки данных
Тема 3.1
КТбо1-6, Смелов Игорь Александрович
Задание A
17.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <algorithm>

#include <set>

using namespace std;



int main(void) {

	string str;

	set <char> Res;



	for (char i = 'a'; i <= 'z'; i++) {

		Res.insert(i);

	}



	cin >> str;

	for (char i : str) {

		i = tolower(i);

		if (Res.count(i)) {

			Res.erase(i);

		}

	}

	cin >> str;

	for (char i : str) {

		i = tolower(i);

		if (Res.count(i)) {

			Res.erase(i);

		}

	}



	if (Res.empty()) {

		cout << 0;

	}

	else {

		for (char i : Res) {

			i = toupper(i);

			cout << i;

		}

	}

	cout << endl;



	return 0;

}
