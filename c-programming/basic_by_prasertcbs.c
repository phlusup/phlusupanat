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

// global vs. local variable
// public vs. private variable

/*
#include<stdio.h>
int v = 777; //global variable (public)
void fn1() {
    int v = 99; //local variable
    printf("v (fn1) = %d\n", v);
}
void fn2() {
    int v = 20; //local variable
    printf("v (fn2) = %d\n", v);
}
void fn3() {
    printf("v (fn3) = %d\n", v);
}
void fn4() {
    char c = 'A';
    printf("Address of c = %p\n", &c);
    for(int i = 0; i < 5; i++){
        char c = 'X';
        printf("%d: %c (%p)\n", i, c, &c);
    }
    printf("%c (outside for loop) (%p)\n", c, &c);
}
int main() {
    // int v = 10; //local variable
    // printf("v (main) = %d\n", v);
    // fn1();
    // fn2();
    // fn3();
    fn4();
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int h, age;
    printf("Enter your height (cm) : ");
    scanf("%d", &h);
    printf("Enter your age (year) : ");
    scanf("%d", &age);
    if (h > 160 && age > 20 && age < 25) {
        printf("You pass\n");
        printf("Congratulations\n");
    } else {
        printf("Sorry\n");
    }
}
*/

/*
#include<stdio.h>
void demo() {
    char d;
    printf("[m]ocha\n");
    printf("[l]atte\n");
    printf("[e]spresso\n");
    printf("[c]appuccino\n");
    printf("Please select menu: ");
    scanf(" %c", &d);
    if(d == 'm') {
        printf("40\n");
    } else if (d == 'l'){
        printf("30\n");
    } else if (d == 'e') {
        printf("20\n");
    } else if (d == 'c') {
        printf("50\n");
    } else {
        printf("Please select a valid menu.\n");
    }
}
void demo2() {
    int age;
    int ticket;
    printf("Enter your age : ");
    scanf(" %d", &age);
    if (age < 5 || age >= 60) {
        ticket = 0;
    } else {
        ticket = 50;
    }
    printf("Ticket = %d\n", ticket);
}


int main() {
    demo2();
}
*/

/*

#include<stdio.h>
void demo1() {
    int a = 10, b = 27;
    int max;
    // if (a>b){
    //     max = a;
    // } else {
    //     max = b;
    // }
    max = a > b ? a : b;
    printf("max = %d\n", max);
}

int max(int a, int b){
    return a > b ? a : b;
}

void demo2(){
    int age = 40;
    int ticket;
    // if (age < 5 || age > 60){
    //     ticket = 0;
    // } else {
    //     ticket = 50;
    // }
    //ternary operator
    // ticket = age < 5 || age > 50 ? 0 : 50;
    // printf("ticket = %d\n", ticket);
    age < 5 || age > 50 ? printf("ticket = 0\n") : printf("ticket = 50\n");
}

int main(){
    demo2();
}
*/


// switch case 

/*
#include<stdio.h>
void if_demo() {
    char d;
    printf("[m]ocha\n");
    printf("[l]atte\n");
    printf("[e]spresso\n");
    printf("[c]appuccino\n");
    printf("Please select a menu");
    scanf(" %c", &d);
    if ( d == 'm') {
        printf("40\n");
    } else if ( d == 'l') {
        printf("30/n");
    } else if ( d == 'e') {
        printf("20/n");
    } else if ( d == 'c') {
        printf("50/n");    
    } else {
        printf("Please select a valid menu\n");
    }
}

int main() {
    if_demo();
}
*/

/*
#include<stdio.h>
void switch_demo(){
    char d;
    printf("1. [m]ocha\n");
    printf("2. [l]atte\n");
    printf("3. [e]spresso\n");
    printf("4. [c]appuccino\n");
    printf("5. [a]mericano\n");
    printf("Please select a menu : ");
    scanf(" %c", &d);
    switch (d) {
        case 'm' :
        case '1' :
            printf("40\n");
            break;
        case 'l':
        case '2' :
            printf("30\n");
            break;
        case 'e':
        case '3' :
            printf("20\n");
            break;
        case 'c':
        case '4' :
            printf("50\n");
            break;
        case 'a':
        case '5' :
            printf("99\n");
            break;
        default:
            printf("Please select a valid menu.\n");
    }
}
int main() {
    switch_demo();
}
*/

/*
#include<stdio.h>
int main(){
    int i;
    for( i = 1; i <= 10; i++ ){
        printf("%d\n", i);
    }
    printf("\n");
}
*/


/*


#include<stdio.h>
int main(){
    double d;
    for( d = 10; d > 0; d -= .5){
        printf("d = %f\n", d);
    }
}
*/

/*
#include<stdio.h>
int main() {
    int sum = 0;
    // for complier for C99 
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
        sum  += i;
        printf("sum = %d\n", i);

    }
}
*/

/*
#include<stdio.h>
int main() {
    for(int i = 1; i <= 10; i++){
        printf("%2d ounces = %8.4f grams\n", i, i*28.3465);

    }

}
*/

/*
#include<stdio.h>
int main() {
    int d;
    printf("Enter your number : ");
    scanf("%d", &d);
    for( int i = 1; i <= 12; i++){
        printf("%d x %2d = %3d\n", d, i, i*d);
    }
}
*/

/*
#include<stdio.h>
int main() {
    for( int i = 1; i <= 12 ; i++){
        for( int j = 9; j <= 11; j++){
            printf("%2d x %2d = %3d%5s",j, i, i*j, " ");
        }
        printf("\n");
    }
}
*/

/*
#include<stdio.h>
void demo1() {
    int sum = 0, n;
    printf("Enter a number : ");
    scanf("%d", &n);
    while( n != 0){
        sum += n;
        printf("Enter a number : ");
        scanf("%d", &n);
    }
    printf("sum = %d\n", sum);
}
void demo2() {
    int sum = 0, n;
    do {
        printf("Enter a number : ");
        scanf("%d", &n);
        sum += sum + n;
    } while (n != 0);
    printf("sum = %d\n", sum);
    

}
int main() {
    int i = 1;
    while(i<=10) {
        printf("i = %d\n", i);
        i++;
    }
    demo2();
}
*/

