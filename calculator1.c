#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double myadd(double x, double y)
{
    double z = x+y;
    return z;
}
double mysub(double x, double y)
{
    double z = x-y;
    return z;
}
double mymultiply(double x, double y)
{
    double z = x*y;
    return z;
}
double mydiv(double x, double y)
{
    double z = x/y;
    return z;
}
double myreminder(double x, double y)
{
    double z = fmod(x,y);
    return z;
}
double mypower(double x, double y)
{
    double z = pow(x,y);
    return z;
}
double mypercentage(double x, double y)
{
    double z = (x/y)*100;
    return z;
}
double mySquareroot(double x) {
    if (x < 0) {
        printf("Error: Square root of a negative number is not real.\n");
        return -1;
    } else {
        double z = sqrt(x);
        return z;
    }
}

double Perimeter_of_Rectangular(double x, double y)
{
    double z = 2*(x+y);
    return z;
}
int main()
{
    double a,b, choice=0;
    double result;
    printf("Enter input the first number : ");
    scanf("%lf",&a);
    printf("Enter input the first number : ");
    scanf("%lf",&b);

    printf("Enter Your Choice : ");
    printf("\n\t1 For Add");
    printf("\n\t2 For Subtract");
    printf("\n\t3 For Multiply");
    printf("\n\t4 For Division");
    printf("\n\t5 For Reminder");
    printf("\n\t6 For Power");
    printf("\n\t7 For Percentage");
    printf("\n\t8 For Perimeter of Rectangular");
    printf("\n\t9 For Square_Root");
    printf("\n\t10 For Exit\n");
    scanf("%d",&choice);


    if(choice == 1)
        result = myadd(a,b);
    if(choice == 2)
        result = mysub(a,b);
    if(choice == 3)
        result = mymultiply(a,b);
    if(choice == 4)
        result = mydiv(a,b);
    if(choice == 5)
        result = myreminder(a,b);
    if(choice == 6)
        result = mypower(a,b);
    if(choice == 7)
        result = mypercentage(a,b);
    if(choice == 8)
        result = Perimeter_of_Rectangular(a,b);
    if(choice == 9)
        result = mySquareroot(a);
    if(choice == 10)
        exit(1);

    printf("Result = %.2lf",result);
    return 0;
}
