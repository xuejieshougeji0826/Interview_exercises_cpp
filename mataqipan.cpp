#include <stdio.h>
#include <stdlib.h>
#define X 8
#define Y 8
int chess[X][Y];
//�ҵ����ڣ�x��y����һ�����ߵ�λ��
int nextxy(int *x,int *y,int count)
{
    switch(count)
    {
        case 3:
            if(*x+2<=X-1 && *y-1>=0 && chess[*x+2][*y-1]==0)
            {
                *x+=2;
                *y-=1;
                return 1;
            }
            break;
        case 4:
            if(*x+2<=X-1 && *y+1<=Y-1 && chess[*x+2][*y+1]==0)
            {
                *x+=2;
                *y+=1;
                return 1;
            }
            break;
        case 1:
            if(*x-1>=0 && *y-2>=0 && chess[*x-1][*y-2]==0)
            {
                *x-=1;
                *y-=2;
                return 1;
            }
            break;
        case 2:
            if(*x+1<=X-1 && *y-2>=0 && chess[*x+1][*y-2]==0)
            {
                *x+=1;
                *y-=2;
                return 1;
            }
            break;
        case 5:
            if(*x+1<=X-1 && *y+2<=Y-1 && chess[*x+1][*y+2]==0)
            {
                *x+=1;
                *y+=2;
                return 1;
            }
            break;
        case 6:
            if(*x-1>=0 && *y+2<=Y-1 && chess[*x-1][*y+2]==0)
            {
                *x-=1;
                *y+=2;
                return 1;
            }
            break;
        case 7:
            if(*x-2>=0 && *y+1<=Y-1 && chess[*x-2][*y+1]==0)
            {
                *x-=2;
                *y+=1;
                return 1;
            }
            break;
        case 8:
            if(*x-2>=0 && *y-1>=0 && chess[*x-2][*y-1]==0)
            {
                *x-=2;
                *y-=1;
                return 1;
            }
            break;
        default:
            break;
    }
    return 0;
}
void print()
{
    int i,j;
    for(i=0;i<X;i++)
    {
        for(j=0;j<Y;j++)
        {
            printf("%2d\t",chess[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
//������ȱ������̣���x��y��Ϊλ�����꣬tagΪ��Ǳ�����ÿ��һ����tag+1
int TravelChessBoard(int x,int y,int tag)
{
    int x1=x,y1=y,flag=0,count=1;
    chess[x][y]=tag;
    if(X*Y==tag)
    {
        //��ӡ����
        print();
        return 1;
    }
    flag=nextxy(&x1,&y1,count);
    while(flag==0 &&count<8)
    {
        count++;
        flag=nextxy(&x1,&y1,count);
    }
    while(flag)
    {
        if(TravelChessBoard(x1,y1,tag+1))
        {
            return 1;
        }
        //�����ҵ������һ�����ߵ����꣨x1,y1��
        x1=x;
        y1=y;
        count++;
        flag=nextxy(&x1,&y1,count);
        while(flag==0 &&count<8)
        {
            count++;
            flag=nextxy(&x1,&y1,count);
        }
    }
    if(flag==0)
    {
        chess[x][y]=0;
    }
    return 0;
}
int main()
{
    int i,j;
    for(i=0;i<X;i++)
    {
        for(j=0;j<Y;j++)
        {
            chess[i][j]=0;
        }
    }
    if(!TravelChessBoard(1,0,1))
    {
        printf("��Ǹ����̤�����㷨ʧ����~\n");
    }
    return 0;
}
