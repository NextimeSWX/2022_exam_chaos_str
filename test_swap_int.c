/*
 * E89 Pedagogical & Technical Lab
 * project:     Test Swap Int
 * created on:  2022-12-01 - 09:23 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_swap_int.c
 */

void swap_int(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 7;
    b = 12;
    swap_int(&a, &b);
    }
