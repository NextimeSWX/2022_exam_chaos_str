/*
 * E89 Pedagogical & Technical Lab
 * project:     Save if larger
 * created on:  2022-12-01 - 10:54 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_save_if_larger.c
 */

int save_if_larger(int nb, int *save_location);

int main(void)
{
    int nb;
    int save_location;

    nb = 12;
    save_location = 6;
    save_if_larger(nb, &save_location);
}
