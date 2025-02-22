#include<stdio.h>
#include<cmath>
#include<cstdlib>
#include<iostream>
using namespace std;
int a[21];
int s,x,n,k;
bool zs(long long y)//判断是否是质数
{
    if (y==1||!y) return 0;
    for (int i=2;i<=sqrt(y);i++)
     if (!(y%i)) return 0;
    return 1;
     
}
void sr()
{
    scanf("%d %d",&n,&k);
    for (int i=1;i<=n;i++)
    {
    	scanf("%d",&a[i]);
     	x+=a[i];//求下总和
    }
}
void js()
{
    if (k==19||k==n-1) {for (int i=1;i<=n;i++) if (zs(x-a[i])) s++;return;}
    if (k==20||n==k) {if (zs(x)) s++;return;}//两个特判
    if (k==1)  
     {
      for (int i=1;i<=n;i++) 
       if (zs(a[i])) s++;//计算
     }
    if (k==2)  
     {
      for (int i=1;i<=n-1;i++) 
       for (int i1=i+1;i1<=n;i1++) 
        if (zs(a[i]+a[i1])) s++;//计算
        return;
     }
    if (k==3)  
     {
      for (int i=1;i<=n-2;i++) 
       for (int i1=i+1;i1<=n-1;i1++) 
        for (int i2=i1+1;i2<=n;i2++) 
         if(zs(a[i]+a[i1]+a[i2]))s++;//计算
         return;
   	 }
    if (k==4)  
     {
       for (int i=1;i<=n-3;i++) 
        for (int i1=i+1;i1<=n-2;i1++) 
         for (int i2=i1+1;i2<=n-1;i2++) 
          for (int i3=i2+1;i3<=n;i3++)
          if(zs(a[i]+a[i1]+a[i2]+a[i3]))s++;
          return;
     }
    if (k==5)  
     {
       for (int i=1;i<=n-4;i++) 
        for (int i1=i+1;i1<=n-3;i1++) 
         for (int i2=i1+1;i2<=n-2;i2++) 
          for (int i3=i2+1;i3<=n-1;i3++)
           for (int i4=i3+1;i4<=n;i4++)
          if(zs(a[i]+a[i1]+a[i2]+a[i3]+a[i4]))s++;
          return;
     }
    if (k==6)
     {
       for (int i=1;i<=n-5;i++)
        for (int i1=i+1;i1<=n-4;i1++) 
         for (int i2=i1+1;i2<=n-3;i2++) 
          for (int i3=i2+1;i3<=n-2;i3++)
           for (int i4=i3+1;i4<=n-1;i4++)
            for (int i5=i4+1;i5<=n;i5++)
          if(zs(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5]))s++;
          return;
     }
    if (k==7)
     {
       for (int i=1;i<=n-6;i++) 
        for (int i1=i+1;i1<=n-5;i1++)
         for (int i2=i1+1;i2<=n-4;i2++) 
          for (int i3=i2+1;i3<=n-3;i3++)
           for (int i4=i3+1;i4<=n-2;i4++)
            for (int i5=i4+1;i5<=n-1;i5++)
             for (int i6=i5+1;i6<=n;i6++)
          if(zs(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5]+a[i6]))s++;
          return;
     }
    if (k==8)  
     {
       for (int i=1;i<=n-7;i++) 
        for (int i1=i+1;i1<=n-6;i1++) 
         for (int i2=i1+1;i2<=n-5;i2++) 
          for (int i3=i2+1;i3<=n-4;i3++)
           for (int i4=i3+1;i4<=n-3;i4++)
            for (int i5=i4+1;i5<=n-2;i5++)
             for (int i6=i5+1;i6<=n-1;i6++)
              for (int i7=i6+1;i7<=n;i7++)
          if(zs(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5]+a[i6]+a[i7]))s++;
          return;
     }
    if (k==9)
     {
       for (int i=1;i<=n-8;i++) 
        for (int i1=i+1;i1<=n-7;i1++) 
         for (int i2=i1+1;i2<=n-6;i2++) 
          for (int i3=i2+1;i3<=n-5;i3++)
           for (int i4=i3+1;i4<=n-4;i4++)
            for (int i5=i4+1;i5<=n-3;i5++)
             for (int i6=i5+1;i6<=n-2;i6++)
              for (int i7=i6+1;i7<=n-1;i7++)
               for (int i8=i7+1;i8<=n;i8++)
          if(zs(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5]+a[i6]+a[i7]+a[i8]))s++;
          return;
     }
    if (k==10)
     {
       for (int i=1;i<=n-9;i++) 
        for (int i1=i+1;i1<=n-8;i1++) 
         for (int i2=i1+1;i2<=n-7;i2++) 
          for (int i3=i2+1;i3<=n-6;i3++)
           for (int i4=i3+1;i4<=n-5;i4++)
            for (int i5=i4+1;i5<=n-4;i5++)
             for (int i6=i5+1;i6<=n-3;i6++)
              for (int i7=i6+1;i7<=n-2;i7++)
               for (int i8=i7+1;i8<=n-1;i8++)
                for (int i9=i8+1;i9<=n;i9++)
          if(zs(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5]+a[i6]+a[i7]+a[i8]+a[i9]))s++;
          return;
     }
    if (k==11)
     {
       for (int i=1;i<=n-8;i++) 
        for (int i1=i+1;i1<=n-7;i1++) 
         for (int i2=i1+1;i2<=n-6;i2++) 
          for (int i3=i2+1;i3<=n-5;i3++)
           for (int i4=i3+1;i4<=n-4;i4++)
            for (int i5=i4+1;i5<=n-3;i5++)
             for (int i6=i5+1;i6<=n-2;i6++)
              for (int i7=i6+1;i7<=n-1;i7++)
               for (int i8=i7+1;i8<=n;i8++)
          if(zs(x-(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5]+a[i6]+a[i7]+a[i8])))s++;//注意这里是用x去减
          return;
     }
    if (k==12)
     {
       for (int i=1;i<=n-7;i++) 
        for (int i1=i+1;i1<=n-6;i1++) 
         for (int i2=i1+1;i2<=n-5;i2++) 
          for (int i3=i2+1;i3<=n-4;i3++)
           for (int i4=i3+1;i4<=n-3;i4++)
            for (int i5=i4+1;i5<=n-2;i5++)
             for (int i6=i5+1;i6<=n-1;i6++)
              for (int i7=i6+1;i7<=n;i7++)
          if(zs(x-(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5]+a[i6]+a[i7])))s++;
          return ;//以下都是用x去减，注意！
     }
    if (k==13)
     {
       for (int i=1;i<=n-6;i++) 
        for (int i1=i+1;i1<=n-5;i1++)
         for (int i2=i1+1;i2<=n-4;i2++) 
          for (int i3=i2+1;i3<=n-3;i3++)
           for (int i4=i3+1;i4<=n-2;i4++)
            for (int i5=i4+1;i5<=n-1;i5++)
             for (int i6=i5+1;i6<=n;i6++)
          if(zs(x-(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5]+a[i6])))s++;
          return;
     }
    if (k==14)
     {
       for (int i=1;i<=n-5;i++)
        for (int i1=i+1;i1<=n-4;i1++) 
         for (int i2=i1+1;i2<=n-3;i2++) 
          for (int i3=i2+1;i3<=n-2;i3++)
           for (int i4=i3+1;i4<=n-1;i4++)
            for (int i5=i4+1;i5<=n;i5++)
          if(zs(x-(a[i]+a[i1]+a[i2]+a[i3]+a[i4]+a[i5])))s++;
          return;
     }
    if (k==15)
     {
       for (int i=1;i<=n-4;i++) 
        for (int i1=i+1;i1<=n-3;i1++) 
         for (int i2=i1+1;i2<=n-2;i2++) 
          for (int i3=i2+1;i3<=n-1;i3++)
           for (int i4=i3+1;i4<=n;i4++)
          if(zs(x-(a[i]+a[i1]+a[i2]+a[i3]+a[i4])))s++;
          return;
     }
    if (k==16)
     {
       for (int i=1;i<=n-3;i++) 
        for (int i1=i+1;i1<=n-2;i1++) 
         for (int i2=i1+1;i2<=n-1;i2++) 
          for (int i3=i2+1;i3<=n;i3++)
          if(zs(x-(a[i]+a[i1]+a[i2]+a[i3])))s++;
          return;
     }
    if (k==17)
     {
       for (int i=1;i<=n-2;i++) 
        for (int i1=i+1;i1<=n-1;i1++) 
         for (int i2=i1+1;i2<=n;i2++) 
  		  if(zs(x-(a[i]+a[i1]+a[i2])))s++;
          return;
   	 }
   	if (k==18)
     {
       for (int i=1;i<=n-1;i++) 
        for (int i1=i+1;i1<=n;i1++) 
         if (zs(x-(a[i]+a[i1]))) s++;//之前没有用x去减，给大家造成了一些困扰，在这里说声抱歉
         return;
     }
}
int main()
{
   sr();
   js();
   printf("%d",s);