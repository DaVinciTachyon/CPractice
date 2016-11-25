#include <stdio.h>
#define N 3
int main()
{
    /*int n;
    printf("What would you like n to be?\n\t");
    scanf("%d",&n);*/

    int a,b,i,j,x,y,m,
        counter,
        succ=0;
    int board[N][N];
    
    if(N==1) succ=1;
    else for(a=0;a<N;a++)
    {
        for(b=0;b<N;b++)
        {
            for(x=0;x<N;x++)
            {
                for(y=0;y<N;y++)
                {
                    board[x][y] = 1;
                }
            }
            board[a][b] = 0;
            counter = 0;
            for(i=0;i<N;i++)
            {
                for(j=0;j<N;j++)
                {
                    if(board[i][j] == 1)
                    {
                        for(m=0;m<N;m++)
                        {
                            board[m][j]=0;
                            board[i][m]=0;
                            board[i-m][j+m]=0;
                            board[i+m][j-m]=0;
                            board[i+m][j+m]=0;
                            board[i-m][j+m]=0;
                        }
                        counter++;
                    }
                }
            }
            if(counter>=N) succ++;
        }
    }
    printf("There are %d possible ways\n",succ);

    return 0;
}