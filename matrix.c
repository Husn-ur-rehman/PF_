#include<stdio.h>

int main()
{
    int rows = 3, columns = 3;
    int arr[rows][columns];
    
    for(int i=0; i< rows ;i++)
    {
        for(int j=0; j< columns ; j++)
        {
           printf("Enter your number %d , %d :", i+1, j+1);
           scanf("%d",&arr[i][j]);
        }
        
        
    }
    
    for(int i=0; i< rows ;i++)
    {
            printf("|");
    
        for(int j=0; j< columns ; j++)
        {
           printf("%d ",arr[i][j]);
           
        }
        
        printf("|\n");
    }
    
    return 0;
}