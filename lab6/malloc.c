#include <stdio.h>
#include <stdlib.h>
int main()
{
	int MAXY;

    int ***p,i,j;

    p=(int ***) malloc(MAXX * sizeof(int **));

    for(i=0;i<MAXX;i++)
    {
        p[i]=(int **)malloc(MAXY * sizeof(int *));
        for(j=0;j<MAXY;j++)
            p[i][j]=(int *)malloc(MAXZ * sizeof(int));
    }

    for(k=0;k<MAXZ;k++)
        for(i=0;i<MAXX;i++)
            for(j=0;j<MAXY;j++)
                p[i][j][k]=<something>;
}