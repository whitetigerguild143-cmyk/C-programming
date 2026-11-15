#include<stdio.h>
int main()
{

  int a,b,choice;
  clrscr();
  printf("enter your number");
  scanf("%d%d" ,&a,&b);
  printf("1.addition");
  printf("2.subraction");
  printf("3.multiflication");
  printf("4.division");
  printf("enter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  printf("sum=%d",a+b);
  break;
  case 2:
  printf("sum=%d",a-b);
  break;
  case 3:
  printf("sum=%d",a*b);
  break;
  default:
  printf("invalid choice");
  }
  return 0;
  }









