# Preliminary questionnaire

Here we collect data about your programming knowledge.

### Email

### Student id (without the leading s)

## Programming experience

Answer the questions referring to the experience you have right now (don't
cheat, please)

### Have you ever worked as a professional programmer (in industry or in a computer house)?

- [ ] No
- [ ] Yes, part-time
- [ ] Yes, full-time

### What is your cumulative programming experience in C?

- [ ] < 3 Months
- [ ] 6 Months
- [ ] 1 Year
- [ ] 2 Years
- [ ] &gt; 3 Years

### How long have you been using an IDE for C programming?

- [ ] Never
- [ ] 6 Months
- [ ] 1 Year
- [ ] 2 Years
- [ ] &gt; 3 Years

### What is your cumulative programming experience in assembly?

- [ ] < 3 Months
- [ ] 6 Months
- [ ] 1 Year
- [ ] 2 Years
- [ ] &gt; 3 Years

### What is your cumulative programming experience with reverse engineering?

- [ ] < 3 Months
- [ ] 6 Months
- [ ] 1 Year
- [ ] 2 Years
- [ ] &gt; 3 Years

### Can you do the following actions on a C debugger (multiple answers allowed)?

- [ ] Add breakpoints
- [ ] Execute the program stepwise
- [ ] Inspect the call stack
- [ ] Inspect the program variables

### Can you do the following actions on an assembly-level debugger (multiple answers allowed)?

- [ ] Add breakpoints
- [ ] Execute the program stepwise
- [ ] Inspect the call stack
- [ ] Inspect the program variables

## C test 1

Please do not spend more than 10 minutes in answering this block of questions.

### What is the output of the following code?

    #include <stdio.h>
    
    void main() {
        struct emp {
            char name[20];
            int age;
            float sal;
        };
        struct emp e = {"Tiger"};
        printf("\n %d %f", e.age, e.sal);
    }

- [ ] `0.000000`
- [ ] Garbage values
- [ ] Error
- [ ] None of the above

### Which of the following set of statements is correct?

- [ ] `typedef long a; extern int a c;`
- [ ] `typedef long a; extern a int c:`
- [ ] `typedef long a; extern a c;`

### By default a real number is treated as:

- [ ] Float
- [ ] Double
- [ ] Long double
- [ ] Depends on the memory model you are using

### How many times the following program will print `Jamboree`?

    #include <stdio.h>
    
    void main() {
        printf("\n Jamboree");
        main();
    }

- [ ] Infinite number of times
- [ ] 32767 times
- [ ] 65535 times
- [ ] Until the stack doesn't overflow

### Is it true that too many recursive calls may result into stack overflow?

- [ ] True
- [ ] False

### What is the output of the following program?

    #include<stdio.h>
    #define SQR(x) (x*x)
    
    void main() {
        int a, b=3;
        a = SQR(b+2);
        printf("\n %d", a);
    }

- [ ] `25`
- [ ] `11`
- [ ] Error
- [ ] Garbage value

### Predict the output of the following program:

    #include<stdio.h>
    
    void main() {
        static char *s[] = {"black", "white", "pink", "violet"};
        char **ptr[] = {s+3, s+2, s+1, s}, ***p;
        p = ptr;
        ++p;
        printf("%s", **p+1);
    }

- [ ] `ink`
- [ ] `ack`
- [ ] `ite`
- [ ] `let`

### Predict the output of the following program:


    #include<stdio.h>
    #include<string.h>
    
    void main() {
        char str[] = "sales\0man\0";
        printf("%s", str);
    }

- [ ] `man`
- [ ] `sales`
- [ ] `sales` man
- [ ] `sales\0man`

### The library function used to reverse the string is:

- [ ] `strstr()`
- [ ] `strrev()`
- [ ] `revstr()`
- [ ] None of the above

### `malloc()` allocates memory from the heap and not from the stack:

- [ ] True
- [ ] False

## C test 2

Please do not spend more than 25 minutes in answering this questions.

### What will be output of the following program?

    #include<stdio.h> 
    
    int main(){
        int x; x=10,20,30;
        printf("%d",x);
        return 0; 
    }

- [ ] `10`
- [ ] `30`
- [ ] `20`
- [ ] `0`

### What is the output of the following function?

    #include<stdio.h> 
    
    void main(){
        int a=1;
        while(a++<=1)
        while(a++<=2);
        printf("%d",a); 
    } 

- [ ] `2`
- [ ] `3`
- [ ] `4`
- [ ] `5`

### What will be the output of the following program?

    #include<stdio.h> 
    
    void fun(int *1) { *1 = *i + 1;}
    void main( ) {
        int gyan[] = { 10, 20, 30, 40, 50 };
        int i, *ptr;
        ptr = gyan;
        for ( i = 0 ; i <4 ; i++ ) {
            fun(ptr++);
            printf ( "%d ", *ptr ) ;
        } 
    }


- [ ] `11 21 31 41`
- [ ] `20 30 40 50`
- [ ] `21 31 41 51`
- [ ] `10 20 30 40`

### What will be the output of the following program?

    #include<stdio.h> 
    
    void main(){
        printf(3+"Proskills"+4); 
    }

- [ ] Compilation Error
- [ ] `skills`
- [ ] `kills`
- [ ] `ls`

### What is the output of the following piece of code?

    #include<stdio.h>

    void main(){
        int a=2;
    
        switch(a); { 
            case 1: printf("A");
            case 2: printf("B");
            case 3: printf("C");
                break;
            case 4: printf("D");
            default: printf("E");
                break;
        }
    }

- [ ] `A B C`
- [ ] `A B C E`
- [ ] `A B C D E`
- [ ] Error

### What is the output of following program?

    #include<stdio.h>
    
    void main(){
        int i;
        for(i=1;i++<=1;i++)
        for (i++; i++<=6;i++)
        i++;
        printf("%d",i);
    }

- [ ] `11`
- [ ] `12`
- [ ] `13`
- [ ] None of these

### What is the output of the following program?

    #include<stdio.h>
    
    void main() {
        int a; a=1;
        while(a<=10){
            printf("%d", a);
            if(a>3&& a<8) continue;
                a++;
        }
        printf("%d", a+10);
    }

- [ ] `1 2 3 4 5 6 ...................infinite`
- [ ] `1 2 3 4 5 5 ...................infinite`
- [ ] `1 2 3 4 4 4 ...................infinite`
- [ ] `1 2 3 4 4 3 ...................infinite`

### What would be the output if `option = H`?

    switch(option) {
        case 'H' : printf("Hello");
        case 'W' : printf("Welcome"); 
        case 'B' printf("Bye");
            break;
    }

- [ ] `Hello`
- [ ] `Hello Welcome`
- [ ] `Hello Welcome Bye`
- [ ] None of the above

### What is the output of following piece of program?

    #include<stdio.h>
    
    void f1() {
        int a=0; ++a;
        printf("%d", a);
    }
    
    main() {
        int a=10;
        f1(); f1(); f1();
        printf("%d", a);
        return 0;
    }

- [ ] `0 1 1 10`
- [ ] `10 0 1 10`
- [ ] `1 2 3 4`
- [ ] `1 1 1 10`

### What is the output of following program?

    #include<stdio.h>
    
    void main() {
        int a; a=1;
        while (a<=1)
            if (a%2)
                printf("%d", a++);
            else
                printf("%d",++a);
                printf("%d", a+10);
    }

- [ ] `0 11`
- [ ] `0 12`
- [ ] `1 11`
- [ ] `1 12`

### What is the output of following program?

    #include<stdio.h>
    
    void main() {
        int a;a=10; a*=10+2;
        printf("%d", a);
    }

- [ ] `102`
- [ ] `100`
- [ ] `120`
- [ ] `22`

### How many times the below loop will get executed?

    #include<stdio.h>
    
    main() {
        int i,j;
        i = 10;
        for (j=i==10; j<=10; j++) {
            printf("\n%d", j);
        }
    }

- [ ] `1`
- [ ] `10`
- [ ] `11`
- [ ] Infinite loop

### What is the output of following program?

    #include<stdio.h>
    
    void main() {
        int a=2;
        switch (a) {
            case 1: printf("A");
                break;
            case 2: printf("B");
                continue;
            case 3: printf("C");
                break;
            case 4; printf("D");
            default: printf("E");
                break;
        }
    }

- [ ] `B E`
- [ ] `B C E`
- [ ] `B C D E`
- [ ] Error

### Referring to the sample here below, what is `MAX_NUM`?

    #define MAX NUM 15

- [ ] `MAX_NUM` is a precompiler constant
- [ ] `MAX_NUM` is a preprocessor macro
- [ ] `MAX_NUM` is an integer variable
- [ ] `MAX_NUM` is a linker constant
