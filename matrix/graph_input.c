#include<stdio.h>
int main()
{
   int n, i, j, x, count=0,count2=0;

    //starting of input taking section
    FILE *fp;
    fp = fopen("input.txt", "r");
    if(!fp)
    {
        printf("Input file not found\n");
        return 0;
    }
    fscanf(fp, "%d", &n);
    int matrix[n][n];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            fscanf(fp, "%d", &matrix[i][j]);

    printf("   ");
    for(i=0; i<n; i++) printf("%d  ", i);
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("%d  ", i);
        for(j=0; j<n; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

printf("number of nodes is:%d",n);
printf("\n");

for(i=0;i<n;i++){
if(matrix[i][i]==1){
   x=1;
    break;
}
}
if(x==1){
    printf("self loop is  there");
}else{
printf("self loop is not there");
}
printf("\n");

for(i=0;i<n;i++){

    for(j=0;j<n; j++){
        if(matrix[i][j]!=matrix[j][i]){
          count=1;
        }

    }
}

if(count!=1){
    printf("this matrix  is undirected Graph");
}else{
printf("this  matrix is directed Graph");
}
printf("\n");


for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(matrix[i][j]==1){
            count2=count2+1;
        }

    }

}
printf("this matrix is directed graph so number of edges is :%d",count2);



}
