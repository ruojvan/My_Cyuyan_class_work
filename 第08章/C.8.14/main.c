#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int Product(void)
{
    int a;
    srand((unsigned)time(NULL));
    a=rand()%10;
    return a;
}

int Product2(void)
{
    int a,b,c,d;
    a=Product()%9;
    for(b=Product(); b==a; b=Product())
        ;
    for(c=Product(); c==b||c==a; c=Product())
        ;
    for(d=Product(); d==c||d==b||d==a; d=Product())
        ;
    return a*1000+b*100+c*10+d;
}

int Getx(int a[],int b[])
{
    int flag=0;
    for(int i=0; i<4; i++)
    {
        if(a[i]==b[i])
        {
            flag++;
        }
    }
    return flag;
}

int Gety(int a[],int b[])
{
    int flag=0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i==j)
            {
                continue;
            }
            else if(a[i]==b[j])
            {
                flag++;
            }
        }
    }
    return flag;
}

int Guess(int n)
{
    int a;
    printf("Input the number you think :\n");
    scanf("%d",&a);
    int a1[4],a2[4];
    a1[3]=a%10;
    a2[3]=n%10;
    a1[2]=(a-a1[3])/10%10;
    a2[2]=(n-a2[3])/10%10;
    a1[1]=(a-a1[3]-a1[2]*10)/100%10;
    a2[1]=(n-a2[3]-a2[2]*10)/100%10;
    a1[0]=(a-a1[3]-a1[2]*10-a1[1]*100)/1000%10;
    a2[0]=(n-a2[3]-a2[2]*10-a2[1]*100)/1000%10;

    int x=Getx(a1,a2);
    int y=Gety(a1,a2);

    printf("The cue is %dA%dY\n\n",x,y);

    if(x==4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n=Product2();//生成随机数
    int i;
    printf("Input your count :\n");
    scanf("%d",&i);
    int flag=0,j=0;
    for( ; j<i; j++)
    {
        printf("You have %d counts .\n",i-j);
        flag=Guess(n);
        if(flag==1)
        {
            break;
        }
    }

    if(flag==1)
    {
        printf("Congratulations!\n");
    }
    else
    {
        printf("Sorry ! you haven't guess the right number !\n");
    }

    return 0;
}
