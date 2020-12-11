#include<stdio.h>
 void main()
{
     int n;
     printf("Insert the size of Array :\n");
     scanf("%d",&n);
     int i,a[n];
     printf("The value of Array :\n");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    insert_sort(a,n);
}
void insert_sort(int arr[],int siz)
{
    int i,j;
    for(i=1;i<siz;i++)
    {
        int key=i;
        for(j=i-1;j>=0;j--)
        {
            int temp;
            if(arr[key]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[key];
                arr[key]=temp;
                key--;

            }
            print(arr,siz);
        }
        printf("\n");
    }


}
void print(int a[],int s)
{
    int i;
    for(i=0;i<s;i++)
        printf("%d",a[i]);
    printf("\n");
}
