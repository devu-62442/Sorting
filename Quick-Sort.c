#include<stdio.h>
#include<stdlib.h>

void quicksort(int r,int len);
int partition(int r,int len);

int n[20];
int main()
{
    int i,len;
    printf("\n\t ------ QUICK SORT ------");
    printf("\n\n\t Enter the number of the elements you want to sort:");
    scanf("%d",&len);
    
    printf("\n\t Enter the elements of the array:");
    for(i=1;i<=len;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\n\t The elements of the array:");
    for(i=1;i<=len;i++)
    {
        printf("%d",n[i]);
    }
    quicksort(1,len);
    
    printf("\n\n\t Sorted Array is:");
    for(i=1;i<=len;i++)
    {
      printf(" %d\t",n[i]);
    }
    printf("\n\n");
    return 0;
}

void quicksort(int r,int len)
{
    
   // printf("\n\t LOWER LIMIT %d and UPPER LIMIT %d",r,len);
    int q;
    if(r<len)
    {
        
        q = partition(r,len);
        
        quicksort(r,q-1);
        
        quicksort(q+1,len);
        
        
       
    }
}

int partition(int r,int len)
{
    int j,x=n[len],i=r-1;
    int q,temp,temp2;
    
    for(j=r;j<len;j++)
    {
        if(n[j]<=x)
        {
            i=i+1;
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
        }
    }
    temp2=n[i+1];
    n[i+1]=n[len];
    n[len]=temp2;
    
    return (i+1);
    }