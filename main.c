#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num_of_digits = 1, ten = 10, num, number, temp, i, sum = 0;

    scanf("%i", &number);
    num = number;
    while (num >= ten)
    {
        ten *= 10;
        num_of_digits ++;
    }

    int *arr = (int*) malloc(num_of_digits*sizeof(int));

    temp = num_of_digits;

    for (i=0; i<num_of_digits; i++)
    {

        arr[i] = num / (pow (10, temp-1));
        num = num - (arr [i])*(pow (10, temp-1));
        temp --;
        sum += pow(arr[i], num_of_digits);

    }

    if (sum == number)
        printf("Armstrong");
    else
        printf("Msh Armstrong");

    return 0;
}
//--------------------------------------------------------------
//                       Another code
// -------------------------------------------------------------

/*
 #include<stdio.h>
int main(){
    int num,r,sum=0,temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;
    while(num!=0){
         r=num%10;
         num=num/10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("%d is an Armstrong number",temp);
    else
         printf("%d is not an Armstrong number",temp);

    return 0;
}
*/
