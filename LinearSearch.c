#include<stdio.h>
int main()
{
    int a[10]={11,2,3,44,5,66,7,8,9,10};
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)  // Bubble sorting
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorting number");  
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
    
}