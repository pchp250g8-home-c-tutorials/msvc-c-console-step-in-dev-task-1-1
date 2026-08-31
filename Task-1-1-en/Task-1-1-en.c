// Task-1-1-en.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char* argv[])
{
    unsigned int n; // number of blocks is inputed
    unsigned int k; // number of blocks for 1 tower
    unsigned int t; // Maximum number of towers
    unsigned int b; // Number of blocks is calculated
    printf("Enter the number of blocks: ");
    scanf("%d", &n); // assign the variable n via input from keyboard
    printf("Enter the number of blocks for 1 tower: ");
    scanf("%d", &k); // assign the variable k via input from keyboard
    t = n / k; // Maximum number of towers
    b = t * k; // Number of blocks is calculated
    printf("From %d blocks, you can build a maximum of %d towers\r\n", n, t);
    printf("This will take %d blocks.\r\n", b);
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
