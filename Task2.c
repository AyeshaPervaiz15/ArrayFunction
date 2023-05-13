#include <stdio.h>
#include <stdlib.h>
//Function Prototype
void marks(float input [],int max [],int min[],int mean[],int mode[],int median[]);

int main()
{   //Variable declaration
    int i;
    float marks[10];
    //Input from User
    for(i=0;i<10;i++)
       {
           printf("Enter marks[%d] : ",i);
           scanf("%d",&marks[i]);
       }
       //Functions Call
    input(marks,10);
    maximum(marks,10);
    minimum(marks,10);
    mean(marks,10);
    mode(marks,10);
    median(marks,10);
    return 0;
}//End of main() function
void input(int marks[],int size)
{
     int i;
    for(i=0;i<10;i++)
    {
       printf("marks[%d]=%d\n",i,marks[i]);
    }
}

void maximum(int marks[],int size)//Function Definition
{   //Variable declaration
    int i;
    int maximum;
    //Processing
    maximum=marks[0];
    for(i=0;i<10;i++)
        {if(marks[i]>maximum)
            maximum=marks[i];}
        printf("Maximum marks are %d\n",maximum);
}//end of maximum() function
void minimum(int marks[],int size)//function definition
{   //Variable declaration
    int i;
    int minimum;
    //Processing
    minimum=marks[0];
    for(i=0;i<10;i++)//repetition structure
    {
        if(marks[i]<minimum)//selection structure
            minimum=marks[i];}//end of repetition structure
        printf("Minimum marks are %d\n",minimum);
}//end of minimum() function
void mean(int marks[],int size)//function definition
{   //Variable declararion
    int i;
    float mean,sum=0;
    //Processing
    for(i=0;i<10;i++)//Repetition structure
        sum=sum+marks[i];
    mean=sum/size;
    printf("Mean of marks is %f\n",mean);
}//end of mean() function
void mode(float marks[],int size)//Function definition
{   //Variable Declaration
   int max_value=0;
   int max_count=0;
   for(int i=0;i<size;i++)
   {
       int count=0;
       for(int j=0;j<size;j++)
       {
           if (marks[j]==marks[i])
           {
               count++;
           }
       }
       if(count>max_count){
        max_count=count;
        max_value=marks[i];
       }
   }
   printf("Mode of marks is %d\n",max_value);
}//end of mode() function
void median(int marks[],int size)//Function definition
{   //Variable declaration
    float a,median;
    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (marks[i]>marks[j])
            {
                a=marks[i];
                marks[i]=marks[j];
                marks[j]=a;
            }
        }
    }
    if(size%2==0)
    {
        median=(marks[(size-1)/2]+marks[size/2])/2;
    }
    else
    {
        median=marks[size/2];
    }
    printf("Median value is %f",median);
}//end of median() function
