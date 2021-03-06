/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
    int x=0,y=len-1,i;
    if(len<0)
        return NULL;
    if(Arr)
    {
        for(i=0;i<len-1;i++)
        {
            if(Arr[i+1]>Arr[i])
                x=i+1;
            else
                break;
        }
        for(i=len-1;i>0;i--)
        {
            if(Arr[i-1]<Arr[i])
                y=i-1;
            else break;
        }
        if(x==len-1 && y==0)
            return NULL;
        else
        {
            int temp=Arr[x];
            Arr[x]=Arr[y];
            Arr[y]=temp;
        }
    }
	return NULL;
}

