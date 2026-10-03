#include<stdio.h>

int Addition(int No1 , int No2)
{
    int result = 0;
    result = No1 + No2;  // Buisness Logic
    return result;
}

  
int main()
{
    int Value1 = 0, Value2 = 0, Ans =0;

    printf("enter the first Number: \n");
    scanf("%d",&Value1);

    printf("enter the second Number: \n");
    scanf("%d",&Value2);
    
    Ans = Addition(Value1,Value2);
    printf("addition is :%d\n",Ans);

    return 0;
      
}