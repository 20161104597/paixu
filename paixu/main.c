//
//  main.c
//  paixu
//
//  Created by SantaClousJR on 17/6/12.
//  Copyright © 2017年 SantaClousJR. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j;
    int a[10],t;
    printf("请输入10个数字\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<10;j++)
    {
        for(i=0;i<10-j;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

