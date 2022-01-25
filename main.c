#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[6];
    list[0] = 45;
    list[1] = 29;
    list[2] = 6;
    list[3] = 64;
    list[4] = 12;
    list[5] = 16;

    printf("Insertion sort!\n");
    InsertionSort(list,6);
    for(int i=0; i<6; i++){
        printf("%d\n", list[i]);
    }

    printf("Insertion sort success!");

    return 0;
}

void InsertionSort (int slot[ ], int n)
{ // input slot is an array of n records;
  // assume n > 1;
  for (int i=1; i < n; i++)
  	for (int j=i; j > 0; j--) {
		if (slot[j] < slot[j-1])
            swap(slot, j, j-1);
			//swap(slot[j], slot[j-1]);
		else break;
	}
}

void swap(int slot[], int a, int b){
    int temp = slot[a];
    slot[a] = slot[b];
    slot[b] = temp;
}
