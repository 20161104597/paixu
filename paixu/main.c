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
    int i,j,n,b;
    int a[10],t;
    printf("请判断排序方式\n");
    printf("如果直接输入数字请按1\n");
    printf("如果从文件读取请按2\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("请输出10个数字\n");
    for(b=0;b<10;b++)
      {
        scanf("%d",&a[b]);
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
            fprintf(fp2,"%d\n",a[i]);
        }
        fclose(fp2);
  }
    if(n==2)
    {
        for(i=0;i<10;i++)
        {
            fscanf(fp1,"%d",&a[i]);
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

    }
       return 0;
}

