#include <stdio.h>
#define MAX_L 100

int main() {
    int length;
    int arr [MAX_L], reversed_arr [MAX_L];
    printf("Enter numero  (<100): ");
    scanf("%d", &length);
    if (length <=0 || length > MAX_L) {
        printf("Invalid number!");
        return 1;
    } else {

        for (int i = 0; i<length; i++)
            scanf("%d", &arr[i]);

        for (int i=0; i<length; i++)
            reversed_arr[i] = arr[length - 1 -i];

        for (int i=0; i<length; i++)
            printf("%d ", reversed_arr[i]);
    }
    return 0;
}
