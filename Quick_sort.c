#include<stdio.h>

void display(int arr[],int n)
{
  int i;
  printf("\n");
  for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int partition(int a[],int p,int r)
{
    int x=a[r];
    int i=p-1;
    int temp,j;
    for(j=p;j<=r-1;j++)
     {
         if(a[j]<=x)
           {
               i=i+1;
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
           }
     }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;
}

void QuickSort(int a[],int p,int r,int n)
{   
    int q;
    if(p<r)
     {
         printf("\nPass: ");
         q=partition(a,p,r);
             display(a,n);
         QuickSort(a,p,q-1,n);
         QuickSort(a,q+1,r,n);
     }
}

int main()
{
    int n,i;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements into the array: ");
    for(i=0;i<n;i++)
      {
          printf("\nEnter element at position %d : ",i+1);
          scanf("%d",&arr[i]);
      }
    printf("\nOriginal array : ");
    display(arr,n);
    QuickSort(arr,0,n-1,n);
    printf("\nSorted array : ");
    display(arr,n);
    return 0;
}
