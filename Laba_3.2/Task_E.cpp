/*ЮФУ, ИКТИБ, МОП ЭВМ
Практикум по программированию
Тема 3.2
КТбо1-6, Смелов Игорь Александрович
Задание E
24.03.2024*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stdio.h>

#include <algorithm>

#include <set>

using namespace std;



typedef struct Node {

    int data;

    Node* left = nullptr;

    Node* right = nullptr;

}*Tree;



void TreeInsert(Tree& t, int x);//Функция вставки "х" в дерево с коврем "t"



void Tree_Serch_Max(Tree& t, int* M, int* pM); //Функция для поиска первого и второго максимума



int main(void) {

    long long N = 1;

    Tree Limb = nullptr;

    int Max = 0, preMax;



    scanf("%lld", &N);

    while (N != 0) {

        TreeInsert(Limb, N);

        scanf("%lld", &N);

    }



    Tree_Serch_Max(Limb, &Max, &preMax);



    printf("%d\n", preMax);

    

    return 0;

}



void TreeInsert(Tree& t, int x) {

    if (!t) {

        t = new Node;

        t->data = x;

    }

    else {

        if (t->data > x) {

            TreeInsert(t->left, x);

        }

        else if (t->data < x) {

            TreeInsert(t->right, x);

        }

    }

    return;

}



void Tree_Serch_Max(Tree& t, int* M, int* pM) {

    if (t) {

        Tree_Serch_Max(t->left, M, pM);

        Tree_Serch_Max(t->right, M, pM);

        if (*pM < t->data) {

            *pM = t->data;

        }

        if (*M < t->data) {

            *pM = *M;

            *M = t->data;

        }

    }

    return;

}
