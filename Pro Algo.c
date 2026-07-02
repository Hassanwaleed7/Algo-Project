#include <stdlib.h>
#include<stdio.h>

void wiglle_s ( int arraySize , int wiglle_arr[])
{
    for (int i = 0 ; i< arraySize - 1; i++)
    {
//        if ( i% 2 ==0 )
//            {
//
//                if (wiglle_arr[i] > wiglle_arr[i+1])
//                {
//                    int temp = wiglle_arr[i];
//                    wiglle_arr[i] = wiglle_arr [i+1];
//                    wiglle_arr [i+1] = temp ;
//                }
//
//            }
//        else
//            {
//                if (wiglle_arr[i] < wiglle_arr[i+1])
//                {
//                    int temp = wiglle_arr[i];
//                    wiglle_arr[i] = wiglle_arr [i+1];
//                    wiglle_arr [i+1] = temp ;
//                }
//            }

if ((i % 2 == 0 && wiglle_arr[i] > wiglle_arr[i+1]) || (i % 2 == 1 && wiglle_arr[i] < wiglle_arr[i+1]))
                {
        int temp = wiglle_arr[i];
        wiglle_arr[i] = wiglle_arr [i+1];
        wiglle_arr [i+1] = temp ;
                }

    }

}

int main () {
int length;
    
    while (1) {
        printf("Enter array length: ");
        scanf("%d", &length);

        if (length < 1 || length > 520) {
            printf("available length is between 1 and 520\n");
            continue;
        }
        break;
    }

    int* arr = (int*) malloc(length * sizeof(int));
    int count = 0;

    while (count < length) {
        int value;
        scanf("%d", &value);

        if (value < 0 || value > 5000) {
            printf("available value is between 0 and 5000\n");
            continue;
        }

        arr[count] = value;
        count++;
    }
     wiglle_s(length, arr);

         printf("Wiggle Sorted Array:\n");

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;




}