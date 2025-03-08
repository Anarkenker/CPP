
#include <stdio.h>//代码简洁明了（个人观点）
int main(void){
  char a[14],mod[12]="0123456789X";//先将mod11后的十一个字符存入数组
  gets(a); //输入字符串
  int i, j = 1, t = 0;
  for(i = 0; i < 12; i++) {
        if(a[i] == '-') continue; //字符串为分隔符‘-’时跳过此次循环进入下一次循环
    t += (a[i]-'0')*j++; //这里用的是字符串的运算
  }
  if(mod[t%11] == a[12]) printf("Right");
  else {
      a[12] = mod[t%11]; //若识别码错误，则赋正确的识别码，然后输出
      puts(a);
  }
  return 0;
}