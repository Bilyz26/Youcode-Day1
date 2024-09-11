#include <stdio.h>
int main() {
    int h1, m1, s1, h2, m2, s2;
    printf("ecrire la premiere  instant dans le format HH:MM:SS: \n");

    scanf("%d:%d:%d", &h1, &m1, &s1);
        printf("ecrire la deuxiem  instant dans le format HH:MM:SS: \n");

    scanf("%d:%d:%d", &h2, &m2, &s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) ||
         (h1 == h2 && m1 == m2 && s1 < s2))

        printf("Le premier instant vient avant le deuxième");

    else if (h1 > h2 || (h1 == h2 && m1 > m2) ||
             (h1 == h2 && m1 == m2 && s1 > s2))

        printf("Le deuxième instant vient avant le premier");

    else

        printf("Il s'agit du même instant");

    return 0;
}
