
/*
#include<stdio.h>
#define PI 3.14159
int main()
{
    float r,a;
    printf("Enter radius : ");
    scanf("%f", &r);
    a = PI * r * r;
    printf("Area : %.2f\n", a);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a, h = 10, w = 5;
    a = w*h;
    printf("Area = %d\n", a);

}
*/

/*
#include<stdio.h>
int main()
{
    int a = 10;
    float x = 4.629;
    printf("a = %d\n", &a);
    printf("x = %f\n", &x);
}
*/

/*
#include<stdio.h>
int main()
{
    int a = 10;
    float x = 4.629;
    printf("a  = %d\nx = %.2f", a, x);
}
*/

/*
#include<stdio.h>
int main()
{
    printf("%4d %4o %4x %4X\n", 63, 63, 63, 63);
}
*/

/*
#include<stdio.h>
int main()
{
    int score = 120;
    char player[] = "Mary";
    printf("%s has %d points.\n", player, score);
}
*/

/*
#include<stdio.h>
int main()
{
    double x = 12.34;
    printf("%f %e %E %.1f\n", x, x, x, x);
}
*/

/*
#include<stdio.h>
int main()
{
    printf("%10s %5d %5.2f\n", "John", 8, 29.13);
    printf("%10s %5d %5.2f\n", "Thomas", 150, 2.5);
    printf("%10s %5d %5.2f\n", "Michael", 29, 155.158);
}
*/

/*
#include<stdio.h>
# define PI 3.14159
int main()
{
    float r,a;
    printf("Enter radius: ");
    scanf("%f", &r);
    a = PI * r *r;
    printf("Area = %.2f", a);
}
*/

/*
#include<stdio.h>
int main()
{
    int w, l, a;
    printf("Enter width : height");
    scanf("%d : %d", &w, &l);
    a = w * l;
    printf("Area = %d\n", a);
}
*/
/*
#include<stdio.h>
int main()
{
    float x, a = 5, b = 2;
    x = a/b;
    printf("x = %f\n", x);
}

*/

/*
#include<stdio.h>
int main()
{
    float x;
    int a = 5, b = 2;
    x = a/b;
    printf("x = %f\n", x);
}

*/


/*
#include<stdio.h>
int main()
{
    int sum = 22, count = 5;
    float mean;
    mean = (float) sum/count;
    printf("Mean = %f\n", mean);
}
*/


/*
#include<stdio.h>
int main()
{
    int x = (int) 4.62;
    printf("%d\n", x);
}
*/

/*
#include<stdio.h>
int main()
{
    float a = 100, b = 500, x;
    x = ((a*2)+(b-5))/(2*a);
    printf("%f\n", x);

}

*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a = round(3.145);
    printf("%d\n", a);
    int b = abs(-1);
    printf("%d\n", b);
    double c = fabs(-3.5);
    printf("%.2f\n", c);
    int d = pow(2,3);
    printf("%d\n", d);
    double e = sin(3.1415);
    printf("%f\n", e);
    double f = cos(3.1415);
    printf("%f\n", f);
    double g = tan(3.1415);
    printf("%f\n", g);
    int h = sqrt(9);
    printf("%d\n", h);
    double i = log(10);
    printf("%f\n", i);
    double j = log10(10);
    printf("%f\n", j);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    double x1, x2;
    printf("Enter: ");
    scanf("%f : %f : %f", &a, &b, &c);
    x1 = -b + (sqrt(pow(b,2)-(4*a*c))/(2*a));
    x2 = -b - (sqrt(pow(b,2)-(4*a*c))/(2*a));
    printf("%f\n %f\n",x1, x2);
}
*/

/*
#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    int rad;
    float a, p;
    printf("Input a radius of a circle: ");
    scanf("%d", &rad);
    a = PI * rad * rad;
    p = 2 * PI * rad;
    printf("The area of circle is %.2f and the perimeter of a circle is %.2f \n", a, p);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter you number : ");
    scanf("%d", &x);
    if (x>0) printf("SO BIG\n");
    printf("%6d\n", x);
}
*/

/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your number : ");
    scanf("%d", &a);
    if ( a >= 5 ) b = 3;
    else b = 4;
    printf("%d\n", b);
}
*/

/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter your number :");
    scanf("%d", &x);
    if (x>0) printf("SO BIG\n");
    else printf("SO SMALL\n");
    printf("%5d\n", x);
}
*/

/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your number : ");
    scanf("%d", &a);
    if (a==0) b = 3;
    printf("%d\n", b);
}
*/

/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your number : ");
    scanf("%d", &a);
    if (a==0) b = 3; a = b;
    printf("%d\n", a);
}
*/

/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your number :");
    scanf("%d", &a);
    if (a==0)
    {
        b = 3;
        a = b;
        printf("Done\n");
        printf("%d\n", a);
    }
    else {
        printf("Fail\n");
        printf("%d\n", a);
    } 
}
*/

/*
#include<stdio.h>
int main()
{
    int grade;
    printf("Enter your grade(0-4) : ");
    scanf("%d", &grade);
    printf("You get ");
    switch(grade)
    {
        case 4: printf("A\n"); break;
        case 3: printf("B\n"); break;
        case 2: printf("C\n"); break;
        case 1: printf("D\n"); break;
        case 0: printf("F\n"); break;
        default:
            printf("No grades\n");
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int grade;
    printf("Enter your grade(0-4) : ");
    scanf("%d", &grade);
    if(grade == 4) printf("You get A\n"); 
    else if(grade == 3) printf("You get B\n"); 
    else if(grade == 2) printf("You get C\n"); 
    else if(grade == 1) printf("You get D\n"); 
    else if(grade == 0) printf("You get F\n"); 
    else printf("You get No grade\n");


}
*/

/*
#include<stdio.h>
int main()
{
    int counter = 1;
    while (counter <= 10){
        printf("%d\n", counter);
        counter++;
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int a = 1;
    while(a<5){
        printf("Hello\n");
        a ++;
    }
}
*/

