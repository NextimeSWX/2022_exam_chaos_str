/*
 * E89 Pedagogical & Technical Lab
 * project:     Save if larger
 * created on:  2022-12-01 - 10:53 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: save_if_larger.c
 */

int save_if_larger(int nb, int *save_location)
{
    if(nb > *save_location) {
        *save_location = nb;
        return(*save_location);
    } else {
        return(0);
    }
}
