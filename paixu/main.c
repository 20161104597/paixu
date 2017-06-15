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
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104597//Desktop//paixu//in.txt","r");
    fp2=fopen("//Users//a20161104597//Desktop//paixu//out.txt","w");
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
        fprintf(fp2,"%d ",a[i]);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

