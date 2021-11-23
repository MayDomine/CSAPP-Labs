#include<stdio.h>

int main(){
    // int x=0x87654321;
    // int n=8;
    // int tmp=0xFFFFFFFF;
    // int a=(x>>n)&(~(0x1<<31>>n<<1));
    // printf("%d,%d",tmp,a);
//   int mask1=0x55555555;
//   int mask2=0x33333333;
//   int mask3=0x0f0f0f0f;
//   int mask4=0x00ff00ff;
//   int mask5=0x0000ffff;
//   int ans=(x&mask1)+(((x&mask1<<1)>>1)&0x7FFFFFFF);
//   ans=(ans&mask2)+(((ans&mask2<<2)>>2)&0x3FFFFFFF);
//   ans=(ans&mask3)+(((ans&mask3<<4)>>4)&0x0FFFFFFF);
//   ans=(ans&mask4)+(((ans&mask4<<8)>>8)&0x00FFFFFF);
//   ans=(ans&mask5)+(((ans&mask5<<16)>>16)&0x0000FFFF);
//   printf("%d",ans);
  int x=0x80000000;
  int n=32;
  int c=33+~n;
  int t=(x<<c)>>c;
  printf("%d",t);
}