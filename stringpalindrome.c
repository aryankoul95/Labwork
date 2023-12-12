#include<stdio.h>
#include<string.h>
int main()
{
  char str[]={"Madam"};
int l =0;
int h= strlen(str)-1;
while(h>1)
{
if(str[l++]!= str[h--])
{
printf("%s is a palindrome\n",str);
}

