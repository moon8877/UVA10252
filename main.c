#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void count(char* ,int ascii[]);
int main(){
int i;
char data1[1000];
char data2[1000];
int ascii1[26]={0};
int ascii2[26]={0};
while((gets(data1)&&gets(data2))==1)
{
  
  
  count(data1,ascii1);
  count(data2,ascii2);
  i=0;
  while(i<=25)
  {
    while(ascii1[i]>0&&ascii2[i]>0)
    {
     printf("%c",i+97);
     ascii1[i]--;
     ascii2[i]--;
    }
    i++;
  }
  printf("\n");
  for(i=0;i<=25;i++)
  {
    ascii1[i]=0;
    ascii2[i]=0;
  }
  i=0;
}
 return 0;
}
void count(char* str,int ascii[])
{
  int i=0;
  while(str[i]!='\0')
  {
    ascii[str[i]-97]++;
    i++;
  }

};
