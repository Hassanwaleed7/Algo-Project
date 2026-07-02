#include <stdio.h>

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
const int S = 5;
int arr[S];

printf("Enter your numbers :\n");
 for (int i = 0; i < S; i++)
    {
        scanf("%d", &arr[i]);
    }
     wiglle_s(S, arr);

         printf("Wiggle Sorted Array:\n");

    for (int i = 0; i < S; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;




}
