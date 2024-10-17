/*ЮФУ, ИКТИБ, МОП ЭВМ
Практикум по программированию
Тема 3.2
КТбо1-6, Смелов Игорь Александрович
Задание F
24.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <map>

#include <vector>

using namespace std;



typedef struct User {

    string username;

    string password;

    bool logged = 0;

}*Users;



int main(void) {

    string input_str, input_username, input_password;

    long long N;

    vector <User> Limb;



    cin >> N;

    for (int i = 0; i < N; i++) {

        cin >> input_str;

        if (input_str == "register") {

            bool f = 1;

            cin >> input_username >> input_password;

            for (auto L = Limb.begin(); L < Limb.end(); L++) {

                if (L->username == input_username) {

                    f = 0;

                }

            }

            if (f) {

                Limb.push_back({ input_username, input_password });

                cout << "success: new user added" << endl;

            }

            else {

                cout << "fail: user already exists" << endl;

            }

        }

        else if (input_str == "login") {

            bool f = 1;

            cin >> input_username >> input_password;

            for (auto L = Limb.begin(); L < Limb.end(); L++) {

                if (L->username == input_username) {

                    f = 0;

                    if (L->password == input_password) {

                        if (L->logged) {

                            cout << "fail: already logged in" << endl;

                        }

                        else {

                            L->logged = 1;

                            cout << "success: user logged in" << endl;

                        }

                    }

                    else {

                        cout << "fail: incorrect password" << endl;

                    }

                }

            }

            if (f) {

                cout << "fail: no such user" << endl;

            }

        }

        else if (input_str == "logout") {

            bool f = 1;

            cin >> input_username;

            for (auto L = Limb.begin(); L < Limb.end(); L++) {

                if (L->username == input_username) {

                    f = 0;

                    if (L->logged) {

                        L->logged = 0;

                        cout << "success: user logged out" << endl;

                    }

                    else {

                        cout << "fail: already logged out" << endl;

                    }

                }

            }

            if (f) {

                cout << "fail: no such user" << endl;

            }

        }

    }



    return 0;

}
