#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h> 
#define size 100
void main()
{
    int N,i,j;
    double k, arr[N];
    srand48((unsigned int)time(NULL)); 
    printf("Enter the size of array : \n");
    scanf("%d",&N);
    
    printf("The unsorted array is : \n");
    for (i=0;i<N;i++)
    {
        arr[i]=drand48();
        printf("%lf\t",arr[i]);
    }
    printf("\n");
    for(i=1;i<N;i++)
    {
        k=arr[i];
        j=i-1;
        while(j>=0 && k<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;

    }
    printf("The sorted array is : \t");
    for (i=0;i<N;i++)
    printf("%lf",arr[i]);

}