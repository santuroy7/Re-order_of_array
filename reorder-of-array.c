// Given: an array with negative and positive values
// sample input: -6 10 8 -5 -4 17 23 -20 -18 -9
// re-ordered the array, such that all negative integers appear before all the positive integers and also order of the integers remain same..
// like ---
// sample Output: -6 -5 -4 -20 -18 -9 10 8 17 23

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int reorder_array(int arr[], int len);
    int re;
    do
    {
        int len;
        printf("Enter No of elements: ");
        scanf("%d", &len);
        int arr[len];
        printf("Enter all elements: ");
        for (int i = 0; i < len; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Input array:  ");
        for (int i = 0; i < len; i++)
        {
            printf("%d  ", arr[i]);
        }
        reorder_array(arr, len);
        printf("Want to Re-order more array's(PRESS 1 for YES or 0 for NO): ");
        scanf("%d", &re);
    } while (re == 1);
    return 0;
}

int reorder_array(int arr[], int len)
{
    int val1 = 0;
    int count_neg = 0, count_pos = 0;
    for (int i = 0; i < len; i++)
    {
        val1 = arr[i];

        if (val1 >= 0)
        {
            count_pos++;
        }
        else
        {
            count_neg++;
        }
    }
    // printf("\n%d %d\n", count_neg, count_pos);
    int array_neg[count_neg];
    int array_pos[count_pos];
    int j = 0;
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        temp = arr[i];
        if (temp >= 0)
        {
            array_pos[j] = temp;

            j++;
        }
    }
    int temp2, t = 0;

    for (int i = 0; i < len; i++)
    {
        temp2 = arr[i];
        if (temp2 < 0)
        {
            array_neg[t] = temp2;

            t++;
        }
    }
    // printf("Array of Positive :  ");
    // for (int a = 0; a < count_pos; a++)
    // {
    //     printf("%d  ", array_pos[a]);
    // }
    // printf("\n");
    // printf("Array of negative:  ");
    // for (int a = 0; a < count_neg; a++)
    // {
    //     printf("%d  ", array_neg[a]);
    // }
    int array_marge[len];
    int x = 0;
    for (int b = 0; b < count_neg; b++)
    {
        array_marge[x] = array_neg[b];
        x++;
    }
    int y = count_neg;
    for (int c = 0; c < count_pos; c++)
    {
        array_marge[y] = array_pos[c];
        y++;
    }
    printf("\n");
    printf("After Re-order Array is :  ");
    for (int a = 0; a < len; a++)
    {
        printf("%d  ", array_marge[a]);
    }
    printf("\n");
    return 0;
}
