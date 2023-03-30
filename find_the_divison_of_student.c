// Write a program in c to find the divison of student.
#include<stdio.h>


int  main()
{ 
    int per ;
   
    printf("Enter percentage of student :");
    scanf("%d ",&per);
    if(per>100)
    {
        printf("\n Invalid  percent ");
    
    }
    else if (per>=60)
    {
        printf("\n First  divison :");
    }
    else if (per<60&&per>=50)
    {
        printf("Second divison :");   
    }
    else if (per<50&&per>=40)
    {
        printf("\n Third  divison");
    }
    else
    {
        printf("\n Fail");
    }
    return 0;
}