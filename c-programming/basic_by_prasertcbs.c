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

/*
#include<stdio.h>
void seq() {
    double celsius, fahrenheit;
    printf("Enter degree in Celsius = ");
    scanf("%lf", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("%f Celsius = %f Fahrenheit\n", celsius, fahrenheit);
}
int main() {
    seq();
}
*/

/*
#include<stdio.h>
void condition() {
    int age;
    printf("Enter your age = ");
    scanf("%d", &age);
    if( age <= 6 ) {
        printf("you are a kid.\n");
        printf("Free of charge\n");
    } else {
        printf("you are an adult.\n");
        printf("199 Bath.\n");
    }
    printf("bye............\n");
}

int main() {
    condition();
}
*/

/*
#include<stdio.h>
void repetition() {
    int sum = 0;
    int i;
    for(i = 1; i <= 100; i += 2){
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("%d\n", sum);
}
int main() {
    repetition();
}
*/

/*
#include<stdio.h>
//function
int rectangle(int w, int h) {
    int area;
    area = w * h;
    return area;
}
// subroutine, procedure
void box(int w, int h) {
    int i,j;
    for(i=0;i<h; i++){
        for(j=0; j<w; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int w,h,area;
    printf("Enter width = ");
    scanf("%d", &w);
    printf("Enter height = ");
    scanf("%d", &h);
    area = rectangle(w,h);
    printf("Rectangle area = %d\n", rectangle(w,h));
    printf("Rectangle area = %d\n", rectangle(7,4));
    printf("Rectangle area = %d\n", area);
    box(w,h);
}
*/

/*
#include<stdio.h>
void demo_int(){
    int n = 84, m = 43;
    printf("n = %d\nm = |%5d|\n", n, m);
    printf("n = %d\nm = |%05d|\n", n, m);
}
void demo_float(){
    double n = 3.14159;
    printf("%f\n", n);
    printf("%.2f\n", n);
    printf("|%.3f|\n", n);
    printf("|%10.3f|\n", n);
}
void demo_char(){
    char c = 'Z';
    printf("c = %c %d %x %X %#X %o\n", c, c, c, c, c, c);
    int a = 90;
    printf("a = %d %c\n", a, a);
}
int main() {
//  demo_int();
//  demo_float();
    demo_char();
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
void demo_str() {
    char *str = "rainbow";
    printf("str = |%s|\n", str);
    printf("str = |%10s|\n", str);
    printf("str = |%-10s|\n", str);
    printf("str = |%.4s|\n", str);
    printf("str = |%.*s|\n", 4,str);
}
void demo_addr() {
    int i  = 10;
    printf("i = %d (%p)\n", i, &i);
    char *str = "rainbow";
    char str2[] = "sunday";
    printf("str = %s (%p)\n", str, str);
    printf("str2 = %s (%p)\n", str2, str2);
    for(int i = 0; i < strlen(str2); i++){
        printf("str2[%d] = %c (%p) \n", i, str2[i], &str2[i]);
    }
}
int main(){
    demo_str();
//    demo_addr();
    return 0;  
}
*/

