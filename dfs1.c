

#include<stdio.h>
#define START 4
#define STACK_SIZE 100

int stack[100], stack_insert=0, visited[100];

void print_stack() {
    int i;
    printf("STACK : ");
    for(i=0; i<stack_insert; i++)
        if(stack[i] != -1)
            printf("%d ", stack[i]);
}

void push(int x) {
    stack[stack_insert++] = x;
}


int main() {

    int n, i, j, x;

    FILE *fp;
    fp = fopen("input.txt", "r");
    if(!fp) {
        printf("Input file not found\n");
        return 0;
    }
    fscanf(fp, "%d", &n);
    int matrix[n][n];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            fscanf(fp, "%d", &matrix[i][j]);

    printf("   ");
    for(i=0; i<n; i++)
        printf("%d  ", i);
    printf("\n");

    for(i=0; i<n; i++) {
        printf("%d  ", i);
        for(j=0; j<n; j++) {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<STACK_SIZE; i++) {
        visited[i] = 0;
        stack[i]= -1;
    }


    push(x=START);

    int tmp;
    print_stack();

    do {

        printf("\nExploring Stack: %d\t", x);

        if(!visited[x]) {
            visited[x] = 1;
        }

        for(j=0; j<n; j++) {
            if(!visited[j] && matrix[x][j]) {
                push(j);
            }
        }
        print_stack();
    } while(((x=stack[--stack_insert]) != -1) && stack_insert >= 0);

    printf("\n\n");
}

