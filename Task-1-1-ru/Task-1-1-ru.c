// Task-1-1-ru.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *args[])
{
    unsigned int n; // вводимое количество блоков
    unsigned int k; // количество блоков на башню
    unsigned int t; // количество башен
    unsigned int b; // вычисляемое количесво блоков
    setlocale(LC_ALL, "russian.65001"); // установка русской локали
    printf("Введите количество блоков: ");
    scanf("%d",&n); // Ввод переменной n
    printf("Введите количество блоков на башню: ");
    scanf("%d",&k); // Ввод переменной k
    t = n / k; // Максимальное количество башен
    b = t * k;  // Используемое количесво блоков для башен
    /*Вывод информации на экран*/
    printf("Из %d блоков можно построить максимум %d башен(ни)\r\n", n, t);
    printf("На это уйдёт %d блоков.\r\n", b);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
