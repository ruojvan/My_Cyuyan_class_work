#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ProduceScore(int a[1001][41],int n,int m)
{
    srand((unsigned)time(NULL));
    int i;
    for(i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            a[i][j]=rand()%11;
        }
    }
}

void Bubble(int a[],int m)
{
    int i,j;
    for(i=0; i<m-1; i++)
    {
        for(j=i+1; j<m; j++)
        {
            if(a[i]>a[j])
            {
                int n;
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
    }
}


void Display(int a[1001][41],int n,int m)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        printf("%3d:",i+1);
        for(j=0; j<m; j++)
        {
            printf("%3d\t",a[i][j]);
        }
        printf("\n");
    }
}

float Average(int a[],int m)
{
    float aver=0.0;
    for(int i=1; i<m-1; i++)
    {
        aver+=(float)a[i];
    }
    return aver/(float)(m-2);
}

void Finall(int a[1001][41],int m,int n,float b[])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        printf("%3d:\t",i+1);
        for(j=0; j<m; j++)
        {
            printf("%3d\t",a[i][j]);
        }
        printf("average:\t%.3f\n",b[i]);
    }
}

int main()
{
    int score[1001][41];
    float average[1001];
    printf("Input number of athletics n (n<1000):\n");
    int n,m;
    scanf("%d",&n);
    printf("Input number of judges m (m<40):\n");
    scanf("%d",&m);

    ProduceScore(score,n,m);

    for(int i=0; i<n; i++)
    {
        Bubble(score[i],m);
        average[i]=Average(score[i],m);
    }

    Display(score,n,m);
    printf("\n\n\n");


    Finall(score,m,n,average);

    return 0;
}
