// Basic C Programming
/*
#include<stdio.h>
int main()
{
    printf("hello world\n");
    printf("don't worry by happy.\n");

}
*/


/*
#include<stdio.h>
int main()
{
    int area;
    int w, h;
    printf("Enter width = ");
    scanf("%d", &w); //Input
    printf("Enter height = ");
    scanf("%d", &h);
    area = w * h; // Process
    printf("Rectangle area = %d\n", area); // Output
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
    printf("%d\n", 5 + 3);
    printf("%d\n", 5 - 3);
    printf("%d\n", 5 * 3);
    printf("%d\n", 5 / 3);
    printf("%f\n", 5.0 / 3.0);
    printf("%f\n", 5.0 / 3);
    printf("%f\n", 5 / 3.0);
    printf("%f\n", 5.0 + 3 * 2 - 4);
    printf("%f\n", 5.0 + 6 - 4/2 - 1*9);
    printf("%f\n", -5.0 + 6 - 4/2 - 1*9);
    printf("%f\n", pow(2,3));
    // int vs double/float
}
*/

/*
#include<stdio.h>
int main()
{
    int b, h;
    double area;
    printf("Enter base = ");
    scanf("%d", &b);
    printf("Enter height = ");
    scanf("%d", &h);
    area = .5 * b * h;
    printf("1/2 = %d\n", 1/2);
    printf("9/2 = %d\n", 9/2);
    printf("1.0/2 = %f\n", 1.0/2);
    printf("1/2.0 = %f\n", 1/2.0);
    printf("Triangle area = %f\n", area);
}
*/

/*

#include<stdio.h>
int main()
{
    int age; //integer
    int Age;
    double price; //real number
    age = 28;
    Age = 99; // case sensitive
    price = 899.75;
    int score = 70;
    price = price * 1.1;
    printf("%d\n", age);
    printf("%d\n", Age);
    printf("%f\n", price);
    printf("%.2f\n", price);
    printf("%d\n", score);
    char *hero = "spiderman";
    printf("%s\n", hero);
    char country[] = "Thailand";
    printf("%s\n", country);
}
*/

/*
#include<stdio.h>
void rectangle() {
    double area;
    int w, h;
    printf("Enter width = ");
    scanf("%d", &w);
    printf("Enter height = ");
    scanf("%d", &h);
    area = w * h;
    printf("rectangle area = %f\n", area);
}
void triangle(){
    double area;
    int w, h;
    printf("Enter width = ");
    scanf("%d", &w);
    printf("Enter height = ");
    scanf("%d", &h);
    area = 0.5* w * h;
    printf("triangle area = %f\n", area);
}
void circle(){
    double area, r;
    int w, h;
    printf("Enter radius = ");
    scanf("%lf", &r);
    area = 3.14 * r * r;
    printf("circle area = %f\n", area);
}
int main() {
    triangle();
}
*/


/*

double rectangle2(double w, double h) {
    double area;
    area = w * h;
    return area;
}
int main() {
    double w, h;
    printf("Enter width = ");
    scanf("%lf", &w);
    printf("Enter height = ");
    scanf("%lf", &h);
    printf("rectangle area = %f\n", rectangle2(w, h));
}
*/

/*

#include<stdio.h>
double triangle2(double b, double h) {
    double area;
    area = 0.5 * b * h;
    return area;
}
int main() {
    double b, h;
    printf("Enter base = ");
    scanf("%lf", &b);
    printf("Enter height = ");
    scanf("%lf", &h);
    printf("Triangle area = %f\n", triangle2(b,h));

}
*/
