/*
 * E89 Pedagogical & Technical Lab
 * project:     Swap Int
 * created on:  2022-12-01 - 09:22 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: swap_int.c
 */

int swap_int(int *a, int *b)
{
    int *swap;

    swap = a;
    a = b;
    b = swap;
    return(*a);
    return(*b);
}
