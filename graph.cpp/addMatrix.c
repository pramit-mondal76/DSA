#include<stdio.h>
#include<stdlib.h>

int arr[10][10];
int n;
void readGraph()
{
    FILE *fp;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("\n file open failed..");
        return;
    }
    fscanf(fp,"%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(fp,"%d",&arr[i][j]);
        }
    }
    fclose(fp);
    return;
}
int showgraph()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}