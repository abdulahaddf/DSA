#include <stdio.h>

void display(int arr[], int n)
// traversal
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int indDeletion(int arr[], int size, int index)
{
   
    for (int i = index ; i <= size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
   
    return 1;
};

int main()
{
    int arr[100] = {1, 4, 5, 7, 9};
    int size = 5, index = 1;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
}


















// #include <stdio.h>

// void display(int arr[], int n)
// // traversal
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     printf("\n");
// }

// int indInsertion(int arr[], int size, int element, int capacity, int index)
// {
//     if (size >= capacity)
//     {
//         return -1;
//     }
//     for (int i = size - 1; i >= index; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[index] = element;
//     return 1;
// };

// int main()
// {
//     int arr[100] = {1, 4, 5, 7, 9};
//     int size = 5, element = 8, index = 1;
//     display(arr, size);
//     indInsertion(arr, size, element, 100, index);
//     display(arr, 6);
//     printf("%d is the element\n", arr[5]);
// }