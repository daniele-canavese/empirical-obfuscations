# Live questionnaire

Here we collect additional data on your programming experience

### Email

### Student id (without the leading s)

## C test live

### Will the expression `*p=p` be disallowed by the compiler?

- [ ] Yes
- [ ] No
 
### Which of the following statement is correct about the following program?

    #include <stdio.h>
    
    int main() {
        FILE *fp;
        char ch;
        int i=1;
        fp = fopen("myfile.c", "r");
        while((ch=getc (fp))!=EOF) {
            if (ch == '\n') {
                i++;
            }
        }
        fclose(fp);
        return 0;
    }

- [ ] The code counts the number of characters in the file
- [ ] The code counts the number of words in the file
- [ ] The code counts the number of blank lines in the file
- [ ] The code counts the number of lines in the file

### What will be the output of the following program?


    #include <stdio.h>

    int fun(int i) {
        i++;
        return i;
    }
    
    int main() {
        int fun(int);
        int i = 3;
        fun (i=fun (fun(i)));
        printf("%d\n", i);
        return 0;
    }

- [ ] `5`
- [ ] `4`
- [ ] Error
- [ ] Garbage value

### Which of the following is the correct way to declare a function pointer where `pointer` is the pointer to the function and `function` is the name of the function?

- [ ] `void (*pointer) = &(int)function;`
- [ ] `void function(*pointer) = int;`
- [ ] `void (*pointer)(int) = &function;`
- [ ] `void &function(*pointer) = int;`
 
### What is the meaning of `int (*ptr)`?

- [ ] `ptr` is pointer to an array of 10 integers
- [ ] `ptr` is an array of 10 elements, each element is a pointer to an integer
- [ ] `ptr` is an array of 10 integers
- [ ] Invalid statement
