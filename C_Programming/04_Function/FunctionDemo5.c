#include<stdio.h>

void Addition(int No1 , int No2)
{
    int result = 0;
    result = No1 + No2;  // Buisness Logic
    printf("Addition is :%d\n",result);
}

  
int main()
{
    int Value1 = 0, Value2 = 0;

    printf("enter the first Number: \n");
    scanf("%d",&Value1);

    printf("enter the second Number: \n");
    scanf("%d",&Value2);
    
    Addition(Value1,Value2);

    return 0;

}