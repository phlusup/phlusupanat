
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

/*
#include<stdio.h>
int main()
{
    int counter = 0;
    while(++counter <= 10){
        printf("%d %s", counter, "Hello\n");
    }

}
*/

/*
#include<stdio.h>
int main()
{
    int counter = 1;
    while(counter <= 3){
        printf("%d\n", counter);
        counter++;
    }
    printf("Finished, but why is the count  %d?\n", counter);
}
*/

/*
#include<stdio.h>
int main()
{
    int n; //specified numbers
    printf("Enter your number : "); //Input number by users
    scanf("%d", &n);
    int i = 1;
    while(i<=n){
        if(i%5 == 0)
            printf("%3d\n", i);
        i++;
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a, b, gcd, i;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    i = 1;
    while( i <= a && i <= b ){
        if(a%i == 0 && b%i == 0)
            gcd = i;
        i++;
    }
    printf("GCD is %d\n", gcd);
    return 0;
} 
*/

/*
#include<stdio.h>
int main()
{
    int n, prime, i;
    printf("Enter a numbers : ");
    scanf("%d", &n);
    prime = 1;
    i = 2;
    while(i<n){
        if(n%i == 0)
            prime = 0;
        i++;
    }
    if(prime == 1) printf("%d is a prime number\n", n);
    else printf("%d is not a prime number\n", n);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int i;
    for( i = 0; i < 10; i++){
        printf("%d %s\n", i, "Hello");
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int i = 0;
    while(i<10){
        printf("%d %s\n", i, "Hello");
        i++;
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int count;
    for (count  = 1; count <= 3; count++){
        printf("%d\n", count);
    }
    printf("Finished, but why is the count %d?\n", count);
}
*/

/*
#include<stdio.h>
int main()
{
    int n, i;
    printf("How many stars do you want ? ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++){
        printf("*");
    }
    return 0;
}
*/


/*

#include<stdio.h>
int main()
{
    int n;
    printf("How many stars do you want ? : ");
    scanf("%d", &n);
    for(;n>=1;n--)
        printf("*");
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int sum = 0;
    int number;

    for(number = 2; number <= 10; number += 2){
        sum += number;
    }
    printf("Sum is %d\n", sum);

}
*/


/*

#include<stdio.h>
#include<math.h>
int main()
{
    double amount;
    double pricipal = 1000;
    double interest = 0.05; // 5%
    unsigned int year;
    printf("%4s %21s\n", "year", "Amount of deposit");
    for(year = 1; year <= 10; ++year){
        amount = pricipal * pow(1.0 + interest, year);
        printf("%4u %21.2f\n", year, amount);
    }
    return 0;
    
}
*/

/*
#include<stdio.h>
int main()
{
    int a = 5;
    do{
        printf("Hello\n");
        a++;
    }while(a<5);
}
*/

/*
#include<stdio.h>
int main()
{
    int a = 5;
    while(a<5){
        printf("Hello\n");
        a++;
    }
}
*/

/*

#include<stdio.h>
int main()
{
    char c;
    do {
        printf("Do you want to continue ? ");
        scanf("%c", &c);
        while(getchar()!='\n');
    }while(c == 'Y' || c == 'y');
}
*/

/*

#include<stdio.h>
int main()
{
    int x;
    for( x = 1; x <= 10; x++){
        if( x == 5) break;
        printf("%d\n", x);
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int x;
    for( x = 1; x <= 10; x++){
        if( x == 5 ) continue;
        printf("%d\n", x);
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int rad;
    do{
        printf("Enter radius : ");
        scanf("%d", &rad);
        if(rad <= 0) break;
        printf("The area of the circle is %.2f\n", 3.14 * rad * rad);
    }while( rad > 0);
    printf("Non-positive valued is entered.. loop terminated\n");
}
*/

/*
#include<stdio.h>
int main()
{
    int i;
    for(i=0; i < 10; i++){
        printf("%2d", i);
    }
    for(i = 10; i > 0; i--){
        printf("%2d", i);
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int i,j;
    for( i = 0; i < 10; i++){
        printf("%3d\n", i);
        for( j = 10; j >= 1; j--){
            printf("%3d", j);
        }
    printf("\n");
    }   
}
*/

/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0; i < 6; i++){
        printf("*");
        for(j=6; j>1; j--){
            printf("*");
        }
    printf("\n");
    }
    printf("\n");
}
*/

/*
#include<stdio.h>
int main()
{
    int a = 0;
    while(a < 6){
        printf("******");
        printf("\n");
        a++;
    }
    printf("\n");
}
*/

/*
#include<stdio.h>
int main()
{
    int b = 0;
    while(b<6){
        int a = 0;
        while(a<6){
            printf("*");
            a++;
        }
    printf("\n");
    b++;
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int b,a,w,h;
    printf("Input wigth : ");
    scanf("%d", &w);
    printf("Input height : ");
    scanf("%d", &h);
    for( b = 0; b < h; b++ ){
        for( a = 0; a < w; a ++){
            printf("*");
        }
    printf("\n");
    }
}
*/

/*
#include<stdio.h>
int main()
{
    int i,j,g;
    printf("Enter your number : ");
    scanf("%d", &g);
    for(i=1; i <= g; i++){
        for(j=1; j <= i ; j++){
            printf("*");
        }
    printf("\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    int n,count,factorial;
    printf("Enter a positive integer : ");
    scanf("%d", &n);
    printf("%7s%10s\n", "Integer", "Factorial");
    for(; n >= 1; n--){
        printf("%7d", n);
        factorial = 1;
        for(count = 1; count <= n; count++)
            factorial *= count;
        printf("%7d\n", factorial);
    }
}
*/

/*
#include<stdio.h>
#define SIZE 9
int main()
{
    int i;
    int fibo[SIZE] = {1,1,2,3,5,8,13,21,34};
    printf("%s %15s \n", "Element", "Data");
    for(i=0; i<SIZE; i++)
        printf("fibo[%2d] %14d \n", i, fibo[i]);
    return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    int num[10];
    int min, max;
    float avg;
    printf("Number : ");
    scanf("%d", &n);
    for(i=0; i < n; i++){
        printf("Data %d : ", i+1);
        scanf("%d", &num[i]);
    
    }
    avg = 0.0;
    min = num[0];
    max = num[0];
    for (i = 0; i < n; i++){
        avg = avg + num[i];
        if (num[i] < min) min = num[i];
        if (num[i] > max) max = num[i];

    }
    avg = avg / n;
    printf("Average = %.2f \n", avg);
    printf("Minimum = %d \n", min);
    printf("Maximum = %d \n", max);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int two_dim[3][3];
    int i, j, c = 1;
    for(i=0; i < 3; i++)
        for(j=0; j < 3; j++)
            two_dim[i][j] = c++;
}
*/

/*
#include<stdio.h>
#define ROW 3
#define COLUMN 4
int main()
{
    int i,j;
    int matrix[ROW][COLUMN] = {{0,1,2,3},
                               {1,3,5,7},
                               {2,4,6,8}};
    for(i=0; i<ROW; i++)
        for(j=0; j<COLUMN; j++)
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int r, c, i, j;
    int matrix_A[10][10], matrix_B[10][10], matrix_C[10][10];
    printf("Number of rows = ");
    scanf("%d", &r);
    printf("Number of columns = ");
    scanf("%d", &c);
    printf("Matrix A: \n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++){
            printf("a(%d)(%d) = ", i, j);
            scanf("%d", &matrix_A[i][j]);
        }
    printf("--------------------------------------\n");
    printf("Matrix B: \n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++){
            printf("b(%d)(%d) = ", i, j);
            scanf("%d", &matrix_B[i][j]);
        }
    printf("--------------------------------------\n");
    printf("Matrix A+B: \n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++){
            matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
            printf("b(%d)(%d) = %d\n", i, j, matrix_C[i][j]);
        }
    printf("--------------------------------------\n");
    
    for(i=0; i<r; i++){
        for(j=0; j<c; j++) printf("%d  ", matrix_A[i][j]);
        if(i == r/2) printf("+  "); else printf("   ");
        for(j=0; j<c; j++) printf("%d  ", matrix_B[i][j]);
        if(i == r/2) printf("=  "); else printf("   ");
        for(j=0; j<c; j++) printf("%d  ", matrix_C[i][j]);
        printf("\n");
    }
    printf("--------------------------------------\n");
    return 0;

}
*/

/*
#include<stdio.h>
int main()
{
    int r1, c1, r2, c2, i, j, k;
    int a[15][15], b[15][15], c[15][15] = {0};
    printf("Size of A (R1,C1) : ");
    scanf("%d,%d", &r1,&c1);
    printf("Matrix A: \n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++){
            printf("a(%d,%d) = ",i, j);
            scanf("%d", &a[i][j]);
        }
    printf("--------------------------------------\n");
    printf("Size of B (R2,C2) : ");
    scanf("%d,%d", &r2,&c2);
    printf("Matrix B: \n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++){
            printf("b(%d,%d) = ",i, j);
            scanf("%d", &b[i][j]);
        }
    printf("--------------------------------------\n");
    printf("Matrix A*B: \n");
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++){
            for(k=0; k<c1; k++)
            c[i][j] += a[i][k] * b[k][j];
            printf("a*b(%d,%d) =  %d \n",i, j, c[i][j]);
        }
    printf("--------------------------------------\n");
    return 0;
}
*/
/*
#include<stdio.h>
int main() {
    char x = 'A';
    int y = 65;

    printf("x = %c, %d\n", x, x);
    printf("x = %c, %d\n", x, x);

}
*/

/*
#include<stdio.h>
int main() {
    char x = 'M';
    char y[] = "Mahidol";
    printf("%c\n", x);
    printf("%s\n", y);
}
*/


/*

#include<stdio.h>
int main() {
    char x[10] = "Apple";
    int i = 0;
    while (x[i] != NULL){
        printf("%c", x[i]);
        i++;
    }
    return 0;
}
*/

/*

#include<stdio.h>
int main() { 
    char word[] = "Hello";
    printf("%s\n", word);
    printf("%c\n", word[0]);

    return 0;
}
*/

/*
#include<stdio.h>
int main() {
    printf("Enter youy char : ");
    char c = getc(stdin);
    //getchar();
    printf("%c\n", c);
    
}
*/

/*
#include<stdio.h>
int main() {
    printf("Enter youy char : ");
    char c = getchar();
    //getchar();
    printf("%c\n", c);
    
}
*/

/*
#include<stdio.h>
int main() {
    char word[10];
    printf("Enter your name : ");
    scanf("%s", word);
    printf("Hello %s\n", word);
    return 0;
}
*/


/*
#include<stdio.h>
int main() {
    char word[10];
    printf("Enter your name : ");
    gets(word);
    printf("Hello %s\n", word);
    return 0;
}
*/

/*
#include<stdio.h>
int main() {
    char ch;
    printf("Enter : ");
    ch = getc(stdin);
    printf("%c\n", ch);
    return 0;
}
*/

/*
#include<stdio.h>
int main() {
    char ch;
    printf("Enter : ");
    ch = getchar();
    printf("%c\n", ch);
    return 0;
}
*/

/*
#include<stdio.h>
int main() { 
    char ch = 'M';
    printf("Put char into screen : ");
    putc(ch, stdout);
    return 0;
}
*/
/*
#include<stdio.h>
int main() { 
    char ch = 'M';
    printf("Put char into screen : ");
    putchar(ch);
    return 0;
}
*/

/*
#include<stdio.h>
int main() {
    char word[10] = "Mahidol";
    printf("%s\n", word);
    puts(word);
    printf("End of Program. \n");
}
*/


//ตัวอย่างการใช้งานอาเรย์ 2 มิติ กับ สตริง
/*
#include<stdio.h>
int main() {
    char name[3][20] = {"Scoland", "England", "Wales"};
    int i;
    for( i = 0; i < 3; i++){
        printf("%s\n", name[i]);
    }
}
*/

//การรับและแสดงผลสตริงในตัวแปรอาเรย์ 2 มิติ
/*
#include<stdio.h>
int main() {
    char fruit[3][20];
    int i;
    for(  i = 0; i < 3; i++){
        printf("Enter fruit : ");
        scanf("%s", fruit[i]);
    }
    for ( i = 0; i < 3; i++){
        printf("%s ", fruit[i]);
    }
    printf("\n");
}
*/

/*

#include<stdio.h>
#include<string.h>
int main() {
    char str1[10];
    char str2[10] = "Apple";
    strcpy(str1, "Banana");
    puts(str1);
    strcpy(str1, str2);
    puts(str1);
}
*/

/*
#include<stdio.h>
#include<string.h>
int main() {
    char str1[20] = "Mahidol ";
    char str2[20] = "University";
    strcat(str1, str2);
    puts(str1);
    puts(str2);
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
int main() {
    char country[10] = "England";
    printf("%ld\n", strlen(country));
    strcpy(country, "Thailand");
    printf("%ld\n", strlen(country));
    return 0;
}
*/


/*
#include<stdio.h>
#include<string.h>
int main() {
    char str1[5] = "abcd";
    char str2[5] = "abCD";
    char str3[5] = "abcd";
    int result;
    result = strcmp(str1, str3);

    if(result == 0){
        printf("Yes, it' the same word.\n");
    } else {
        printf("No, it's not the same word.\n");
    }
    
    return 0;
}
*/

/*

#include<stdio.h>
#include<string.h>
int main() {
    char str1[5] = "bbbb";
    char str2[5] = "aaaa";
    char str3[5] = "cccc";

    int result;
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);
    
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>

int main() {
    char str1[10], str2[10];
    int x;
    strcpy(str1, "Cat");
    strcpy(str2, "Dog");

    if(strlen(str1) == strlen(str2)) {
        strcat(str1, str2);
    } else {
        strcat(str2, str1);
    }
    printf("%s %s\n", str1, str2);
}
*/


/*
#include<stdio.h>
int main(){
    int x = 10;
    int *p;
    p = &x;

    printf("x = %d \n", x);
    printf("p = %p \n", p);
    printf("*p = %d \n", *p);
}
*/


/*
#include<stdio.h>
int main() {
    int x = 4;
    int *p;
    printf("x = %d \n", x);

    p = &x;
    *p = 5;
    printf("x = %d \n", x);
}
*/

/*

#include<stdio.h>
int main() {
    int x = 4;
    int *p;
    p = &x;
    printf("Enter number : ");
    scanf("%d", &x);
    printf("x = %d\n", *p);
}
*/

/*
#include<stdio.h>
int main(){
    char str[] = "cat in space";
    char *cp;

    cp = str;
    printf("*cp = %c\n", *cp);
    cp += 2;
    printf("*cp = %c\n", *cp);


}
*/



/*
#include<stdio.h>
int main() {
    int a[] = {31415, 21828};
    int *ip;

    ip = a;
    printf("*ip = %d\n", *ip);
    ip++;
    printf("*ip = %d\n", *ip);
}
*/


/*
#include<stdio.h>
int main() {
    int x[5] = {0,2,4,6,8};
    int *p1, *p2, *p3;

    p1 = &x[0];
    printf("*p1 = %d \n", *p1);

    p2 = x;
    printf("*p2 = %d \n", *p2);

    p3 = &x[3];
    printf("*p3 = %d \n", *p3);

    p1++;
    printf("*p1 = %d \n", *p1);

    p1 += 2;
    printf("*p1 = %d \n", *p1);

}
*/

/*
#include<stdio.h>
#define SIZE 10
int main() {
    int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int *pa, *pb, i, temp;
    pa = &a[0];
    printf("Original : ");
    for(i = 0; i < SIZE; i++){
        printf("%d ", *pa);
        pa++;
    }
    printf("\n");

    pa = &a[0];
    pb = &a[SIZE-1];
    for(i = 0; i < SIZE/2; i++){
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++;
        pb--;
    }
    pa = &a[0];
    printf("Reverse : ");
    for(i = 0; i < SIZE; i++){
        printf("%d ", *pa);
        pa++;
    }
    printf("\n");
    
}
*/

/*
#include<stdio.h>
int main(){
    char word[] = "SuperCat";
    char *p;
    p = &word[0];
    printf("Word = %s \n", p);
    printf("Character = %c \n", *p);
}
*/


/*
#include<stdio.h>
#include<string.h>
int main() {
    char *ptr = "CatHero";
    printf("Word = %s\n", ptr);
    printf("Char = %c\n", *ptr);
    printf("Char = %c\n", ptr[3]);
    printf("Size of word  = %lu\n", strlen(ptr));
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char w[] = "Cat";
    int x = 8;
    double y= 3.1;
    char z = 'M';
    printf("Sizeof w = %lu \n", sizeof(w));
    printf("Sizeof x = %lu \n", sizeof(x));
    printf("Sizeof y = %lu \n", sizeof(y));
    printf("Sizeof z = %lu \n", sizeof(z));

    return 0;
}
*/

/*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char *str;
    str = (char * ) malloc(10);
    strcpy(str, "SuperCat");
    printf("String = %s\n", str);
    printf("Sizeof string = %lu\n", strlen(str));
    free(str);

    int *ptr, i;
    ptr = (int * ) malloc(10*(sizeof(int)));
    for(i = 0; i < 10; i++){
        ptr[i] = 2*i+1;
    }
    for(i = 0; i < 10; i++){
        printf("Interger[%d] = %d\n", i, ptr[i]);
    }
    free(ptr);
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int num, i;
    float *score, sum;
    printf("Number of student : ");
    scanf("%d", &num);

    score = ( float * ) malloc(num*sizeof(float));
    sum = 0.0;
    for(i = 0; i < num; i++){
        printf("Student %d = ", i+1);
        scanf("%f", score+i);
        sum += *(score+i);
    }
    printf("Average score of %d Students =  %.1f\n", num, sum/num);
    free(score);
}
*/

/*
#include <stdio.h>

struct course {
    char code[8], name[20], teacher[20];
    int capacity, registered;
    double average_grade;
};
int main() {

    return 0;
}
*/


/*
#include<stdio.h>
struct student {
    char name[20];
    long id;
    double gpa;
    char advisor[20];
    char guardian[20];
};

union student_union {
    char name[20];
    long id;
    double gpa;
    char advisor[20];
    char guardian[20];
};

int main() {
    struct student st;
    union student_union st2;
    printf("size of struct = %ld\n", sizeof(st));
    printf("size of union = %ld\n", sizeof(st2));


    return 0;
    
}
*/

/*
#include<stdio.h>
struct student {
    char name[20];
    long id;
    double gpa;
};
int main() {
    struct student s;
    typedef struct student std;
    std s2;
    return 0;
}
*/

/*
#include<stdio.h>
typedef struct student {
    char name[20];
    long id;
    double gpa;
}std;
int main() {
    struct student s;
    std s2;
    return 0;
}
*/

/*
#include<stdio.h>
typedef struct {
    char name[20];
    long id;
    double gpa;
}std;
int main() {
    std s2;
    return 0;
}
*/

/*
#include<stdio.h>
typedef struct {
    char name[20];
    long id;
    double gpa;
}student;
int main() {
    student st;
    printf("Enter your name : ");
    scanf("%s", st.name);
    printf("Enter your id : ");
    scanf("%ld", &st.id);
    printf("Enter your gpa : ");
    scanf("%lf", &st.gpa);

    printf("Student's name is %s has id %ld with gpa %.2lf \n", st.name, st.id, st.gpa);
    return 0;
}
*/

/*

#include <stdio.h>
typedef struct {
    char name[20];
    long id;
    double gpa;
}student;
int main() {
    student st;
    int i, n;
    double grade;
    st.gpa = 0;
    printf("Enter your name : ");
    scanf("%s", st.name);
    printf("Enter your id : ");
    scanf("%ld", &st.id);

    printf("How many subjects ?  ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("What is your grade in subject #%d : ", i+1);
        scanf("%lf", &grade);
        st.gpa += grade;
    }

    st.gpa /= n;

    printf("Student's name is %s has id %ld with gpa %.2lf \n", st.name, st.id, st.gpa);
    return 0;
}
*/

/*
#include<stdio.h>
typedef struct{
    float real, img;
}complex;
int main() {
    complex x,y,z;
    printf("Input x \n");
    printf("Real number : ");
    scanf("%f", &x.real);
    printf("Imaginary number : ");
    scanf("%f", &x.img);
    printf("Input y \n");
    printf("Real number : ");
    scanf("%f", &y.real);
    printf("Imaginary number : ");
    scanf("%f", &y.img);

    printf("Adding two number.... \n");
    z.real = x.real + y.real;
    z.img = x.img + y.img;
    printf("z = %.1f + %.1fi \n", z.real, z.img);

    printf("Multiplying two number.... \n");
    z.real = x.real * y.real - x.img*y.img;
    z.img = x.img*y.real + x.real*y.img;

    printf("z = %.1f + %.1fi \n", z.real, z.img);


    return 0;
}
*/

/*
#include<stdio.h>
#define SIZE 3
struct student {
    int id;
    char name[20];
    float grade;
    char major[20];
};

int main() {

    struct student s[SIZE];
    int i;

    for(i=0; i<SIZE; i++){
        printf("Input info for student number %d\n", i+1);

        printf("What is student's id ?");
        scanf("%d", &s[i].id);
        printf("What is student's name ?");
        fflush(stdin);
        gets(s[i].name);
        printf("What is student's grade ?");
        fflush(stdin);
        scanf("%f", &s[i].grade);
        printf("What is student's major ?");
        fflush(stdin);
        scanf("%s", s[i].major);

    }
    for(i=0; i<SIZE; i++){
        printf("Student Number %d\n",i+1);
        printf("ID %d\n",s[i].id);
        printf("Name %s\n",s[i].name);
        printf("Major %s\n",s[i].major);
        printf("Grade %f\n",s[i].grade);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#define Sub 3
typedef struct{
    int dd,mm,yyyy;
}date;

typedef struct{
    int course_id;
    char course_name[50];
    int credit;
}subject;


struct student {
    int id;
    char name[20];
    float grade;
    char major[20];
    date dob;
    subject course[Sub];
};

int main() {
    struct student s;
    int i;

    printf("What is student's id ? ");
    scanf("%d", &s.id);
    printf("What is student's name ? ");
    fflush(stdin);
    gets(s.name);
    printf("What is student's grade ? ");
    fflush(stdin);
    scanf("%f", &s.grade);
    printf("What is student's major ? ");
    fflush(stdin);
    scanf("%s", s.major);
    printf("What is student's Date of birth(dd/mm/yyyy) ? ");
    scanf("%d/%d/%d", &s.dob.dd, &s.dob.mm, &s.dob.yyyy);

    for(i=0; i<Sub; i++){
        printf("Dettail of the subject number %d \n", i+1);
        printf("Course's id : ");
        scanf("%d", &s.course[i].course_id);
        printf("Course's name : ");
        fflush(stdin);
        scanf("%s", s.course[i].course_name);
        printf("Course's credit : ");
        scanf("%d", &s.course[i].credit);

    }

    printf("Student's Details\n");
    printf("ID : %d Name : %s ", s.id, s.name);
    printf("Major : %s Grade : %.2f ", s.major, s.grade);
    printf("Date of birthday : %02d/%02d/%04d \n", s.dob.dd,s.dob.mm,s.dob.yyyy);
    
    printf("Take the following courses\n");
    for(i=0; i<Sub; i++){
        printf("[%d] %s", s.course[i].course_id, s.course[i].course_name);
        printf("(%d)\n", s.course[i].credit);
    }

    
}

*/


/*
#include<stdio.h>
#define Sub 3
#define SIZE 3

typedef struct{
    int course_id;
    char course_name[50];
    int credit;
}subject;

typedef struct{
    int dd, mm, yyyy;
}date;


struct student{
    int id;
    char name[20];
    float grade;
    char major[20];
    date dob;
};

int main() {
    struct student s[SIZE];
    int i,j;

    for(i=0; i<SIZE; i++){
        printf("What is student's id ? ");
        scanf("%d", &s[i].id);
        printf("What is student's name ? ");
        fflush(stdin);
        gets(s[i].name);
        printf("What is student's grade ? ");
        fflush(stdin);
        scanf("%f", &s[i].grade);
        printf("What is student's major ? ");
        fflush(stdin);
        scanf("%s", s[i].major);
        printf("What is student's Date of birth(dd/mm/yyyy) ? ");
        scanf("%d/%d/%d", &s[i].dob.dd, &s[i].dob.mm, &s[i].dob.yyyy);
    }
    struct student highest;
    highest = s[0];
    for(j=1; j < SIZE; j++){
        if(highest.grade < s[j].grade){
            highest = s[j];
        }
    }

    printf("Highest score student\n");
    printf("ID : %d Name : %s ", highest.id, highest.name);
    printf("Major : %s Grade : %.2f ", highest.major, highest.grade);
    printf("Date of birthday : %02d/%02d/%04d \n", highest.dob.dd,highest.dob.mm,highest.dob.yyyy);
    
    struct student youngest = s[0];
    for(j=1; j<SIZE; j++){
        if(s[j].dob.yyyy > youngest.dob.yyyy){
            youngest = s[j];
        } else if(s[j].dob.yyyy == youngest.dob.yyyy && s[j].dob.mm > youngest.dob.mm){
            youngest = s[j]; 
        } else if(s[j].dob.yyyy == youngest.dob.yyyy && s[j].dob.mm == youngest.dob.mm && s[j].dob.dd > youngest.dob.dd){
            youngest = s[j]; 
        } 
    }
    printf("Youngest student\n");
    printf("ID : %d Name : %s ", youngest.id, youngest.name);
    printf("Major : %s Grade : %.2f ", youngest.major, youngest.grade);
    printf("Date of birthday : %02d/%02d/%04d \n", youngest.dob.dd,youngest.dob.mm,youngest.dob.yyyy);
    

    return 0;
}
*/

// Advnaced Progarmming Language 


/*
#include <stdio.h>
int main() {
    int first, second, third;

    printf("First Number : ");
    scanf("%d", &first);
    printf("Second Number : ");
    scanf("%d", &second);
    printf("Third Number : ");
    scanf("%d", &third);


    if(first < 5){
        printf("%d\n", 3*first+7);
    } else {
        printf("%d\n", 100);
    } 
    if(second < 5){
        printf("%d\n", 3*second+7);
    } else {
        printf("%d\n", 100);
    } 
    if(third < 5){
        printf("%d\n", 3*third+7);
    } else {
        printf("%d\n", 100);
    } 

    return 0;
}
*/

/*
#include<stdio.h>

void compute(int value) {
    if(value < 5) {
        printf("%d\n", 3*value+7);
    } else {
        printf("%d\n", 100);
    }
}

int main(){
    int first, second, third;
    printf("First Number : ");
    scanf("%d", &first);
    printf("Second Number : ");
    scanf("%d", &second);
    printf("Third Number : ");
    scanf("%d", &third);

    compute(first);
    compute(second);
    compute(third);

    return 0;
}
*/

/*
#include <stdio.h>

int square(int); // function prototype



int main() {
    int x = 5, y;

    y = square(x); //function call

    printf("y = %d\n", y);

    return 0;
}

int square(int m) { //function implementation or funtion body
    return m*m;
}
*/

/*
#include<stdio.h>
void increment(int, float); // function prototype

int main() {
    int i = 3;
    float x = 7.4;
    increment(i, x); // function call
    increment(i, x); // function call
}

void increment(int m, float n){          //function body
    m += 2;
    n += 2;
    printf("m = %d\nn = %.2f\n", m, n );
}
*/



/*
#include<stdio.h>
#include<time.h>

int main() {
    time_t now;
    //Get current time stamp
    time(&now);
    printf("The current timestamp is : %ld \n", now);
    // Convert time stamp to local time 
    printf("The current local time is : %s \n", ctime(&now));
    return 0;
} 
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int i, n = 5;
    time_t t;

    //Intializes random number generator 
    srand((unsigned) time(&t)); 
    // Print 5 random numbers from 0 to 9;
    for( i = 0; i < n; i++){
        printf("%d\n", rand()%10);
    }

    return 0;
}
*/

/*
#include<stdio.h>
#include<ctype.h>

int main() {
    char country[10] = "Thailand";
    int i = 0;
    while(country[i] != NULL){
        country[i] = toupper(country[i]);
        i++;
    }
    printf("%s\n", country);
    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main() {
	float x = 9;
	
		printf("%.0f cubed is %f\n", x, pow(x, 3));
		printf("Square root of x is %f\n", sqrt(x));
		
	return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
	double x, ret, val;
	
    x = 90.0;
	val = PI / 180;
	ret = sin(x*val);
	printf("The sine of %.2lf is %.2lf\n", x, ret);

	return 0;
}
*/


/*
#include<stdio.h>

void greeting(void); // function protype

int main() {
    greeting(); // function calll
    return 0;
}

void greeting(void) { // function implementation 
    printf("*************************\n");
    printf("* Welcome to my program *\n");
    printf("*************************\n");
}
*/

/*
#include<stdio.h>

void area(void); // function protoype

int main() {

    area(); //function call
}

void area(void) { //function implementation
    int w, l;
    printf("Enter W x L : ");
    scanf("%dx%d", &w, &l);
    printf("Area is %d\n", w*l);
}

*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int irand(void);

int main() {
    int x;
    x = irand();
    printf("x = %d\n", x);
    return 0;
}

int irand(void){
    time_t t;
    srand((unsigned) time(&t));
    return(rand()%10);
}
*/

/*

#include<stdio.h>
void showdata(char[10], int, float);

int main() {
    printf("-------------------------------\n");
    showdata("Robert", 18, 25.5);
    showdata("John", 32, 29.2);
    showdata("David", 25, 37.3);
    return 0;
}

void showdata(char name[10], int age, float bmi){
    printf("%10s %5d %3.1f \n", name, age, bmi);
    printf("-------------------------------\n");
}

*/

/*
#include<stdio.h>
int fac(int);


int main() {
    int n, r, nCr;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);
    nCr = fac(n) / (fac(r)*fac(n-r));
    printf("nCr = %d\n", nCr); 

    return 0;
}


int fac(int x){
    long i, f = 1;
    for( i = x; i > 1; i--){
        f = f * i;
    }
    return f;
}
*/

/*
#include<stdio.h>
void assign(int, int); // Function Prototype

int a = 1, b = 1; //Global Varaible

int main(){
    printf("Before calling a function: %d, %d \n", a, b); 
    assign(a,b); // Function call 
    printf("After calling a function: %d, %d \n", a, b);

    return 0;
}


void assign(int x, int y){ // function implementation 
    int a; 
    a = 5; b = 6;  // a is a local variable of assign and b is a global variable
    x++ ;
    printf("In function: %d, %d, %d, %d \n", a, b, x, y);
}
*/


/*
#include<stdio.h>

char str[10] = "Banana"; // Global Variable
char c = 'c'; // Global Variable


char replace(int x, char y, char z[10]){  //Fucntion Implementation + Prototype
    z[x] = y;
    return z[x];
}


int main() {

    int n = 0; 
    char c = 'A';
    c = replace(2, 'c', str); //function call

    printf("%s\n", str);
    printf("%c\n", c);

}
*/

/*
#include<stdio.h>
char trim[20];
void test(char[], int, int);

int main() {
    char str[10] = "Mahidol";
    test(str, 2, 6);
    printf("%s\n", trim);
}

void test(char str[10], int n1, int n2){
    int i, j = 0;
    for( i = n1; i <= n2; i++,j++){
        trim[j] = str[i];
    }
}
*/

/*
#include<stdio.h>

int multiply(int m, int n){
    int ans;
    if( n == 1) {
        ans = m;
    } else {
        ans = m + multiply(m, n - 1);
    }
    return ans;
}

int main() {
    
    int a;
    a = multiply(2,5);
    printf("Answer = %d\n", a);
}
*/

/*
#include<stdio.h>
int fac(int n){
    int i, fac = 1;
    for( i = n; i >= 1; i--){
        fac = fac * i;
    }
    return fac;
}

int main(){
    int ans;
    ans = fac(5);
    printf("%d\n", ans);
    
}
*/

/*
#include<stdio.h>
int factorial(int n){
    if ( n == 1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int ans;
    ans = factorial(5);
    printf("%d\n", ans);
}
*/

/*
#include<stdio.h>
int factorial(int n){ //fun
    if ( n == 1){ //simple case
        return 1;
    } else {
        return n * factorial(n-1); // recursive case
    }
}

int main() {
    int n = 5;
    printf("factorial(%d) = %d \n", n, factorial(n));
}
*/

/*
#include<stdio.h>
void move(int n, int a, int c, int b); //function prototype

int main() {
    int disk;
    printf("How many disk ? ");
    scanf("%d", &disk);
    move(disk, 1, 3, 2); //function call
    return 0;
}

void move(int n, int a, int c, int b){ //function implementation
    if ( n > 0) {
        move(n-1, a, b, c);
        printf("Move one disk from %d to %d\n", a, c);
        move(n-1, a, c, b);
    }
}
*/

/*
#include<stdio.h>

int my_function(int n){
    if( n == 0 ){
        return 3;
    } else {
        return 1 + my_function(n-1);
    }
}
int main() {
    int x;
    x = my_function(5);
    printf("x = %d\n", x);
    return 0;
}
*/

/*
#include<stdio.h>
int multiple(int a, int b){
    if( b == 1){
        return a;
    } else {
        return a + multiple(a, b-1);
    }
}
int main() {
    int a;
    a = multiple(2,1);
    printf("result = %d\n", a);
    return 0;
}
*/

/*
#include<stdio.h>
int power(int a, int b){
    if ( b == 1 ){
        return a;
    } else {
        return 
    }
}
int main() {

    return 0;
}
*/

/*
#include<stdio.h>
int cubeByValue(int); // function prototype 

int main() {
    int number = 5, cube_num;
    printf("The original number is %d\n", number);
    cube_num = cubeByValue(number);
    printf("The new number is %d\n", cube_num);
    return 0;
}
int cubeByValue(int n){
    return n*n*n;
}
*/

/*
#include<stdio.h>
void cubeByValue(int); // function prototype 

int main() {
    int number = 5;
    printf("The original number is %d\n", number);
    cubeByValue(number);
    printf("The new number is %d\n", number);
    return 0;
}
void cubeByValue(int n){
    n = n*n*n;
}
*/


/*
#include<stdio.h>
void cubeByRef2(int *);

int main(){
    int number = 5;
    printf("The original number is %d\n", number);
    cubeByRef2(&number);
    printf("The new number is %d\n", number);
    return 0;
}

void cubeByRef2(int *n){
    *n = *n * *n * *n;
}
*/

/*
#include<stdio.h>

void increment(int, float); //function prototype

int main(){
    int i;
    float x;
    printf("\nInput an integer number : ");
    scanf("%d", &i);
    printf("\nInput an floating number : ");
    scanf("%f", &x);
    printf("\n\n(main before calling a function) The numbers are %5d %10.4f\n", i, x);
    increment(i, x); // function call
    increment(i, x); // function call
    printf("\n\n(main after calling a function) The numbers are %5d %10.4f\n", i, x);
}

void increment(int a, float b){
    a++;
    b++;
}
*/


/*

#include<stdio.h>

void increment(int*, float*); //function prototype

int main(){
    int i;
    float x;
    printf("\nInput an integer number : ");
    scanf("%d", &i);
    printf("\nInput an floating number : ");
    scanf("%f", &x);
    printf("\n\n(main before calling a function) The numbers are %5d %10.4f\n", i, x);
    increment(&i, &x); // function call
    increment(&i, &x); // function call
    printf("\n\n(main after calling a function) The numbers are %5d %10.4f\n", i, x);
}

void increment(int *a, float *b){
    (*a)++;
    (*b)++;
}
*/

/*
#include<stdio.h>
void square(int *);
int main() {
    int arr[] = {5,6,7};
    printf("before calling a function = %d\n", *arr);
    square(arr);
    printf("after calling a function = %d\n", *arr);
}
void square(int *a){
    *a = *a * *a;
}
*/


/*
#include<stdio.h>
void square_all(int *, int);
int main() {
    int i,arr[] = {5,6,7} {
    printf("before calling a function = %d\n", arr);
    square_all(arr, 3);
    printf("after calling a function = %d\n", *arr);
}
void square(int *a, int n){
    int i;
    for( i = 0; i < n; i++){
        a[i] = a[i] * a[i];
    }
    
}
*/

/*
#include<stdio.h>
void swap_array(int array[], int x, int y);

int main() {
	int arr[] = {5, 6, 7}
	swap_array(arr, 0, 2);
}

void swap_array(int a[], int x, int y){
	int t;
	t = a[x];
	a[x] = a[y];
	a[y] = t;
}
*/

/*
#include<stdio.h>
#define Size 5
int FindMax(int num[]); //function prototype
int main() {
    int max, number[Size] = {11, 22, 8, 36, 13};
    max = FindMax(number);
    printf("Maximum number is %d\n", max);
}

int FindMax(int num[]){
    int maximum, i = 0;
    maximum = num[i];
    for( i = 1; i < Size; i++){
        if(num[i] > maximum){
            maximum = num[i];
        }
    }
    return maximum;
}
*/

/*
#include<stdio.h>
void square(int *);

int main(){
    int x = 6;
    printf("x is %d\n", x);
    square(&x);
    printf("The squared is %d\n", x);
}

void square(int *n){
    *n = *n * *n;
}
*/

/*

#include<stdio.h>
#define SIZE 5
void half(int[]); //function prototype

int main(){
    int arr[] = {2, 4, 6, 8, 10};
    printf("arr[2] is %d\n", arr[2]);
    half(arr);
    printf("arr[3] is %d \n", arr[3]);
}

void half(int a[]){
    int i;
    for( i = 0; i < SIZE; i++){
        a[i] = a[i]/2;
    }
}
*/

/*
#include<stdio.h>

int main() {
	FILE *fp; // declaration variable 
	
	fp = fopen("myfile.txt", "r");
	if( fp == NULL ){
			printf("Error! Cannot open file.\n");
			return(1);
	}
	fclose(fp);
	printf("Close file successfully\n");
	return 0;
}
*/

/*
#include<stdio.h>

int main() {
	FILE *fp;
	char name[10] = "Robert";
	int age = 18;
	
	fp = fopen("myfile.txt", "w"); 
	fprintf(fp, "%s %d\n", name, age);
	fclose(fp);
	return 0;
}
*/

/*
#include <stdio.h>
int main() {
	FILE *fp;
	char name[3][10] = {"Robert", "John", "David"};
	int age[3] = {18, 24, 20};
	int i;
	
	
	fp = fopen("myfile.txt", "w");
	for( i = 0; i < 3; i++){
		fprintf(fp, "%s %d\n", name[i], age[i]);
	}
	fclose(fp);
	return 0;
}
*/


/*
#include<stdio.h>
int main() {
	FILE *fp;
	char name[10];
	int age;
	
	fp = fopen("myfile.txt", "r");
	fscanf(fp, "%s %d", name, &age);
	printf("%s %d\n", name, age);
	fclose(fp);
	return 0;
}
*/


/*
#include<stdio.h>
int main() {
	FILE *fp;
	char name[3][10];
	int age[3];
	
	fp = fopen("myfile.txt", "r");
    for( int i = 0; i < 3; i++){
        fscanf(fp, "%s %d", name[i], &age[i]);
	    printf("%s %d\n", name[i], age[i]);
    }
	fclose(fp);
	return 0;
}
*/

/*

#include<stdio.h>

int main() {
	int ret;
	ret = rename("mynewfile.txt", "my_file.txt");
	if ( ret == 0 ) {
		printf("File renamed successfully\n");	
	} else {
		printf("Error! Unable to rename the file\n");
	}
	return 0;
}
*/

/*
#include<stdio.h>

int main() {
	int ret;
	ret = remove("my_file.txt");
	if ( ret == 0 ) {
		printf("File deleted.\n");	
	} else {
		printf("Error! Unable to delete the file.\n");
	}
	return 0;
}
*/

/*

#include <stdio.h>

int main() {
	FILE *fp;
	int ch;
	
	fp = fopen("myfile.txt", "w+");
	for( ch = 65; ch <= 90; ch++){
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}

*/


/*
#include<stdio.h>

int main() {
	FILE *fp;
	char c;
	int i;
	fp = fopen("myfile.txt", "r");
	for( i = 0; i < 26; i++ ) {
		c = fgetc(fp);
		printf("%c", c);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
*/

/*
#include <stdio.h>

int main() {
	FILE *fp;
	char str[10] = "Mahidol";
	fp = fopen("myfile.txt", "a");
	fputs(str, fp);
	fclose(fp);
	return 0;
}
*/

/*
#include <stdio.h>

int main() {
	FILE *fp;
	char str[10];
	fp = fopen("myfile.txt", "r");
	fgets(str,10,fp);
    printf("%s\n", str);
	fclose(fp);
	return 0;
}
*/

/*

#include <stdio.h>
int main() {
	FILE *fp;
	int num;
	if ( (fp = fopen("myfile.txt", "r")) == NULL ){
			printf("Error! Cannot open file. \n");
			return 1;
	}
	while(!feof(fp)){
		fscanf(fp, "%d", &num);
		printf("%d \n", num);
	}
	fclose(fp);
	return 0;
}
*/

/*

#include <stdio.h>
int main() {
    FILE *fp;
	char ch;
	if ( (fp = fopen("myfile.txt", "r")) == NULL ){
		printf("Error! Cannot open file. \n");
		return 1;
	}
	while(1) {
		ch = fgetc(fp);
		if ( ch == EOF ) break;
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}
*/

/*
#include<stdio.h>
int main() {
	FILE *fp;
	char ch;
	int position;
	if ( (fp = fopen("data.txt", "r")) == NULL ) {
			printf("Error! Cannot open file. \n");
			return 1;
	}
	while(1) {
		ch = fgetc(fp);
		if ( ch == 'c') break;
		printf("%c", ch);
	}
	position  = ftell(fp);
	printf("\nThe current position is %d.\n", position);
	fclose(fp);
	return 0;
}
*/

/*
#include <stdio.h>
int main()  {
	FILE *f;
	f = fopen("data.txt", "r");
	if ( f == NULL ){
			printf("Error! Cannot open file. \n");
			return 1;
	}
	fseek(f, 0, SEEK_END);
	printf("1. The current position : %2ld bytes \n", ftell(f));
	
	fseek(f, -3, SEEK_END);
	printf("2. The current position : %2ld bytes ", ftell(f));
	printf("--------> %c \n", fgetc(f));
	
	fseek(f, 0, SEEK_SET);
	printf("3. The current position : %2ld bytes \n", ftell(f));
	
	fseek(f, 5, SEEK_SET);
	printf("4. The current position : %2ld bytes ", ftell(f));
    printf("--------> %c \n", fgetc(f));

    fseek(f, 5, SEEK_CUR);
	printf("5. The current position : %2ld bytes \n", ftell(f));
	return 0;
}
*/

/*
#include<stdio.h>
int main() {
	FILE *f;
	f = fopen("data.txt", "r");
	if( f == NULL ){
			printf("Can't open file or file doesn't exist. \n");
			return 1;
	}
	fseek(f, 0, SEEK_END);
	printf("The size of file : %ld bytes \n", ftell(f));
	rewind(f);
	printf("The current position : %ld bytes \n", ftell(f));
	return 0;
}

*/

/*
#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE *f;

    //Create File
	f = fopen("temp.txt", "w");
	if ( f == NULL ){
		printf("Can't open file or file doesn't exist. \n");
		return 1;
	}
	fprintf(f,"We love programming.");
	printf("File created. \n");
	fclose(f);

    // Read
	f = fopen("temp.txt", "r");
	if ( f == NULL ){
		printf("Can't open file or file doesn't exist. \n");
		return 1;
	}
	printf("File exists. \n");
	fclose(f);
	
    // Rename 
    rename("temp.txt", "top.txt");
    f = fopen("top.txt", "r");
	if ( f == NULL ){
		printf("Can't open file or file doesn't exist. \n");
		return 1;
	}
	printf("File exits. \n");
	fclose(f);

    //Remove 
    remove("top.txt");

    f = fopen("top.txt", "r");
	if ( f == NULL ){
		printf("Can't open file or file doesn't exist. \n");
		return 1;
	}
	printf("File exits. \n");
	fclose(f);
    return 0;
}
*/

/*
#include<stdio.h>
int main() {
	FILE *fp;
	char str[10];
	fp = fopen("sample.txt", "r+");
	if (!fp) {
		printf("Cannot open file. \n");
		return 1;
	}
	fgets(str, 4, fp);
	printf("%s\n", str);
	return 0;
}
*/
/*
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main() {
    char word[20] = "superman", curr[20] = "";
    char ch;
    int i, t, count;
    count = 0;
    for (i = 0; i < strlen(word); i++)
        curr[i] = '_';
    curr[i] = '\0';
    do {
        system("cls");
        printf("----- \n");
        printf("|   | \n");
        switch (count)
        {
        case 0;
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            break;
        case 1;
            printf("|    0  \n");
            printf("|       \n");
            printf("|       \n");
            printf("|       \n");
            break;
        case 2;
            printf("|    0  \n");
            printf("|    |  \n");
            printf("|       \n");
            printf("|       \n");
            break;
        case 3;
            printf("|    0  \n");
            printf("|   /|  \n");
            printf("|       \n");
            printf("|       \n"); 
            break;
        case 4;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|       \n");
            printf("|       \n"); 
            break;
        case 5;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|       \n"); 
            break;
        case 6;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|   /   \n"); 
            break;
        case 7;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|   / \\\n"); 
            break;
        }
        printf("|         \n\n");
        for ( i = 0; i < strlen(word); i++)
                printf("%c ", curr[i])
        printf("\n");

        if( count == 7){
            printf("===== You Die ===== \n");
            printf("Answer is \"%s\"\n", word);
            count ++;
        }
        else if( strcmp(curr,word) == 0){
            printf("***** You win *****\n");
            count = 9;
        }
        else {
            ch = getch();
            t = 0;
            for(i = 0; i <strlen(word); i++){
                if (word[i] == ch){
                    curr[i] == word[i];
                    t = 1;
                }
            }
            if (t == 0) count++;
        }
    }   
    while(count <= 7);
    getch();
}
*/

/*
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void print_hangman(int);
void set_curr( char[], char[]);
int guess( char[], char[]);
void print_word( char[] );
int check_word( char[], char[] );

int main() {
    char word[20] = "university", curr[20] = "";
    int count;
    count = 0;
    set_curr(curr, word);
    do {
        print_hangman(count);
        print_word(curr);
        if(check_word(curr, word) == 0){
            if(guess(curr,word) == 0) count++;
        }
        else break;
    }
    while(count < 7);
}
void set_curr( char curr[], char word[]){
    int i;
    for( i = 0; i < strlen(word); i++)
        curr[i] = '_';
    curr[i] = '\0';
}
void print_hangman(int count){
        system("cls");
        printf("----- \n");
        printf("|   | \n");
        switch (count)
        {
        case 0;
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            break;
        case 1;
            printf("|    0  \n");
            printf("|       \n");
            printf("|       \n");
            printf("|       \n");
            break;
        case 2;
            printf("|    0  \n");
            printf("|    |  \n");
            printf("|       \n");
            printf("|       \n");
            break;
        case 3;
            printf("|    0  \n");
            printf("|   /|  \n");
            printf("|       \n");
            printf("|       \n"); 
            break;
        case 4;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|       \n");
            printf("|       \n"); 
            break;
        case 5;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|       \n"); 
            break;
        case 6;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|   /   \n"); 
            break;
        case 7;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|   / \\\n"); 
            break;
        }
    }
void print_word(char curr[]) {
    int i;
    for(i = 0; i < strlen(curr); i++)
        printf("%c ", curr[i])
    printf("\n");
}

int check_word( char curr[], char word[]){
    if(strcmp(curr, word) == 0){
        printf("***** You Win *****\n");
        return 1;
    } else {
        return 0;
    }
}
int guess( char curr[], char word[]) {
    int i, t = 0;
    char ch;
    ch = getch();
    for( i = 0; i < strlen(word); i++){
        if ( word[i] == ch ){
            curr[i] = word[i];
            t = 1;
        }
    }
    return t;
}
*/

/*
#define SIZE 3
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void print_hangman(int);
void set_curr( char[], char[]);
int guess( char[], char[]);
void print_word( char[] );
int check_word( char[], char[] );

struct play {
    char word[20];
    char curr[20];
    char count;
    int die;
};

int main() {
    struct play user[SIZE];
    FILE *f;
    int i,j;
    f = fopen("word.txt", "r");
    for( i = 0; i < SIZE; i++){
        fscanf(f, "%s\n", user[i].word);
        set_curr(user[i].curr, user[i].word);
        user[i].count = 0;
        user[i].die = 0;
    }
    fclose(f);

    int win = 0, die = 0;
    while( die < SIZE && win == 0){
        for (  i = 0; i < SIZE; i++){
            if( user[i].die == 0){
                printf_hangman(user[i].count);
                if( check_word( user[i].curr, user[i].word) == 0){
                    printf("==User %d's turn ==\n", i+1);
                    if( guess(user[i].curr, user[i].word) == 0) user[i].count++;

                print_hangman(user[i].count);
                print_word(user[i].curr);
                getch();

                }
                else {
                    win = i;
                    break;
                }
            
            }
        }
    }
void set_curr( char curr[], char word[]){
    int i;
    for( i = 0; i < strlen(word); i++)
        curr[i] = '_';
    curr[i] = '\0';
}
void print_hangman(int count){
        system("cls");
        printf("----- \n");
        printf("|   | \n");
        switch (count)
        {
        case 0;
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            printf("|   \n");
            break;
        case 1;
            printf("|    0  \n");
            printf("|       \n");
            printf("|       \n");
            printf("|       \n");
            break;
        case 2;
            printf("|    0  \n");
            printf("|    |  \n");
            printf("|       \n");
            printf("|       \n");
            break;
        case 3;
            printf("|    0  \n");
            printf("|   /|  \n");
            printf("|       \n");
            printf("|       \n"); 
            break;
        case 4;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|       \n");
            printf("|       \n"); 
            break;
        case 5;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|       \n"); 
            break;
        case 6;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|   /   \n"); 
            break;
        case 7;
            printf("|    0  \n");
            printf("|   /|\\\n");
            printf("|    |  \n");
            printf("|   / \\\n"); 
            break;
        }
    }
void print_word(char curr[]) {
    int i;
    for(i = 0; i < strlen(curr); i++)
        printf("%c ", curr[i])
    printf("\n");
}

int check_word( char curr[], char word[]){
    if(strcmp(curr, word) == 0){
        printf("***** You Win *****\n");
        return 1;
    } else {
        return 0;
    }
}
int guess( char curr[], char word[]) {
    int i, t = 0;
    char ch;
    ch = getch();
    for( i = 0; i < strlen(word); i++){
        if ( word[i] == ch ){
            curr[i] = word[i];
            t = 1;
        }
    }
    return t;
}
*/

/*
#include <stdio.h>
int n = 4;
int test(int x){
	printf("n = %d, ", n);
	return x += n;
}

int main() {
	int n = 2;
	n = test(test(n));
	printf("n = %d\n", n);
	return 0;
}
*/

/*
#include<stdio.h>
void square(int);
int main() {
	int x = 5;
	printf("%3d", x);
	square(x);
	printf("%3d\n", x);
}
void square(int a) {
	a = a * a;
	printf("%3d", a);
}
*/

/*
#include<stdio.h>
void square(int *);
int main() {
	int x = 4;
	printf("%3d", x);
	square(&x);
	printf("%3d", x);
}
void square(int *a) {
	*a = *a * *a;
	printf("%3d", *a);
}
*/

/*
#include<stdio.h>
void square(int [], int);
int main() {
	int x[] = {1, 3, 4, 5}, i;
	for( i = 0; i < 4; i++)
			printf("%3d", x[i]);
	square(x,3);
	
	for( i = 0; i < 4; i++)
			printf("%3d", x[i]);
}
void square(int a[], int n) {
	int i;
	for( i = 0; i < n; i++) a[i] *= a[i];
}
*/
