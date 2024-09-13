#include <stdio.h>
int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]), target;
    printf("Entrez le nombre à rechercher : ");
    scanf("%d", &target);
    int result = binary_search(arr, n, target);
    if (result != -1) printf("Trouvé à l'indice %d", result);
    else printf("Non trouvé");
    return 0;
}
