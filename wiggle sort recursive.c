#include <stdio.h>
void wiggSort (int arrayIndex, int arraySize, int wigg_arr[])
{
    if ( arrayIndex>= arraySize -1)
        return;

    else
    {
//        if ( arrayIndex %2 ==0)
//        {
//            if (wigg_arr[arrayIndex] > wigg_arr[arrayIndex+1]){
//
//                 int temp = wigg_arr[arrayIndex];
//                 wigg_arr[arrayIndex] = wigg_arr[arrayIndex+1];
//                 wigg_arr[arrayIndex+1]=temp;
//
//                                                            }
//        }
//
//
//
//
//
//        else {
//
//                 if (wigg_arr[arrayIndex]<wigg_arr[arrayIndex+1])
//                    {
//                 int temp = wigg_arr[arrayIndex];
//                 wigg_arr[arrayIndex] = wigg_arr[arrayIndex+1];
//                 wigg_arr[arrayIndex+1]=temp;
//                    }
//
//            }


if ( arrayIndex%2==0 && wigg_arr[arrayIndex] > wigg_arr[arrayIndex+1] || arrayIndex %2 ==1 &&wigg_arr[arrayIndex]<wigg_arr[arrayIndex+1])
                    {
        int temp = wigg_arr[arrayIndex];
        wigg_arr[arrayIndex] = wigg_arr[arrayIndex+1];
        wigg_arr[arrayIndex+1]=temp;
                    }


 wiggSort (arrayIndex +1, arraySize, wigg_arr);

}
}

int main(){

const int R=5;
  int arr[R];

    printf("Enter your numbers :\n");

    for (int i = 0; i < R; i++)
    {
        scanf("%d", &arr[i]);
    }


wiggSort (0, R, arr);

    printf("Wiggle Sorted Array:\n");

    for (int i = 0; i <R; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;


}
