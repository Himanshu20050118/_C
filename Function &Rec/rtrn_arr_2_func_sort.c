

//syntax: <dataype>*function_name(Arguments);
#include <stdio.h>

int *sort(int x[10]) {
    int t;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (x[i] > x[j]) {
                t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }
    return x;
}

int main() {
    int arr[10], *s;
    printf("Enter 10 elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // s = sort(arr);//give array name only.. 
    sort(arr);

    printf("Sorted elements:\n");
    for (int j = 0; j < 10; j++) {
        // printf("%d\n", *(s + j));  //s[j]
        printf("%d ", arr[j]);
    }

    return 0;
}
















// #include <stdio.h>
// int *sort(int x[10]);

// int *sort(int x[10])
// {
//     int  t, i;
//     for (int j = i + 1; j < 10; j++)
//     {
//         if (x[i] > x[j])
//         {
//             t = x[i];
//             x[i] = x[j];
//             x[j] = t;
//         }
//     }
//     return x;
// }
// int main()
// {
//     int arr[10], *s;
//     printf("enter 10 elements: ");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//         s = sort(arr);
//         printf("sorted elements\n");
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d\n", *(s + j));
//         }
//     }

//     return 0;
// }