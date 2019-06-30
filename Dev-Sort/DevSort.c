// Header files.
#include<stdio.h>

// Main method which returns an integer.
int main()
{
    // Variables
    int a[20];
    int n,temp;
    int i,j,key;
    
    // Taking input(length of the array) from the user.
    printf("\n\t Enter the LENGTH of the Array:");
    scanf("%d",&n);
    
    // Taking the Array elements as input.
    printf("\n\t Enter the Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    // Printing the Array entered by the user.
    printf("\n\t The Array is:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    
    // Sorting the Array.
    for(j=1;j<n;j++)
    {
        key=j;
        for(i=0;i<key;i++)
        {
            if(a[i]>a[key])
            {
                temp=a[i];
                a[i]=a[key];
                a[key]=temp;
            }
        }
    }
    
    // The Sorted array.
    printf("\n\n\t The SORTED ARRAY is:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    
    printf("\n");
return 0;
}