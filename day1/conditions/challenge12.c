#include <stdio.h>
int main() {
    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2))
        printf("Le premier instant vient avant le deuxi�me");
    else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2))
        printf("Le deuxi�me instant vient avant le premier");
    else
        printf("Il s'agit du m�me instant");
    return 0;
}
