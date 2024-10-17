/*ЮФУ, ИКТИБ, МОП ЭВМ
Практикум по программированию
Тема 3.2
КТбо1-6, Смелов Игорь Александрович
Задание D
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



void TreeSerch(Tree& t, set<int>& res); //Функция для поиска вершины м одним ребенком из дерева "t" и занесения результата в set "res"



int main(void) {

    long long N = 1;

    Tree Limb = nullptr;

    set<int> Result;



    scanf("%lld", &N);

    while (N != 0) {

        TreeInsert(Limb, N);

        scanf("%lld", &N);

    }



    TreeSerch(Limb, Result);



    for (int i : Result) {

        printf("%d\n", i);

    }



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



void TreeSerch(Tree& t, set<int>& res) {

    if (t->left && t->right) {

        TreeSerch(t->left, res);

        TreeSerch(t->right, res);

    }

    else if (t->left) {

        res.insert(t->data);

        TreeSerch(t->left, res);

    }

    else if (t->right) {

        res.insert(t->data);

        TreeSerch(t->right, res);

    }

    return;

}
