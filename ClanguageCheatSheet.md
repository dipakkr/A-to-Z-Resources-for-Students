# CheatSheet 

## C Programming 

1. **Keywords** 
(these words are reserved for the language and cannot be used as any variable name by the user)

|auto      |  double   |   int     |    struct 
|break     |  else     |   long    |    switch 
|case      |  enum     |   register|    typedef 
|char      |  extern   |   return  |    union 
|const     |  float    |   short   |    unsigned 
|continue  |  for      |   signed  |    void 
|default   |  goto     |   sizeof  |    volatile 
|do        |  if       |   static  |    while

2. **Allowed Character Set**

```
Alphabets - A, B, â€¦.., Y, Z a, b, â€¦â€¦, y, z
Digits - 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Special symbols - ~ â€˜ ! @ # % ^ & * ( ) _ - + = | \ { } [ ] : ; " ' < > , . ? /
```
3. **Data Types and Placeholders**

Some common datatypes are:

```
int - integer
char - character
long - long integer
float - float number
double - long float
```

> use scanf to take input from the user
> scanf("Format string",&variable,&variable,...); 

| Placeholders  |       Format |
|:--------------:|:------------ | 
| %c         |         Character |
| %d           |        Signed decimal integer | 
| %i          |         Signed decimal integer| 
| %e          |         Scientific notation[e]| 
| %E            |       Scientific notation[E]| 
| %f              |     Decimal floating point| 
| %o                |   unsigned octal| 
| %s              |     String of character| 
| %u               |    unsigned decimal integer| 
| %x                |   unsigned Hexadecimal (lower)| 
| %X                 |  unsigned Hexadecimal (upper)| 
| %p                  | dispaly a pointer| 
| %%                  | print a %| 

4. **Escape Sequences**

\a - Bell
\n - New line
\r - Carriage return
\b - Backspace
\f - Formfeed
\t - Horizontal tab
\" - Quotation mark
\v - Vertical tab
\' - Apostrophe
\\ - Backslash
\? - Question mark
\0 - Null

5. **Precedence Order**

| DESCRIPTION	          |         OPERATORS	                              | ASSOCIATIVITY	  |
| :----------------------:|:-------------------------------------------------:| -----------------:|
| Function Expression	  |           ()	                              |   Left to Right   |
| Array Expression	  |              []	                              |   Left to Right   |
| Structure Operator	  |            ->	                              |   Left to Right   |
| Structure Operator	  |            .                                      |	  Left to Right   |
| Unary minus	          |            -                                      |	  Right to Left   |
| Increment/Decrement	  |          ++, --	                              |   Right to Left   |
| Oneâ€™s compliment	  |              ~                                    |	  Right to Left   |
| Negation	          |              !                                    |	  Right to Left   |
| Address of              |        	&                                     |	  Right to Left   |
| Value of address	  |             `*`	                              |   Right to Left   |
| Type cast	          |            (type)	                              |   Right to Left   |
| Size in bytes	          |        sizeof	                              |   Right to Left   |
| Multiplication	  |                `*`	                              |   Left to Right   |
| Division	          |               /	                              |   Left to Right   |
| Modulus	          |                 %	                              |   Left to Right   |
| Addition	          |               +	                              |   Left to Right   |
| Subtraction	          |             -	                              |   Left to Right   |
| Left shift	          |             <<		                      |   Left to Right   |
| Right shift             |         	 >>	                              |   Left to Right   |
| Less than	          |               <	                              |   Left to Right   |
| Less than or equal to	  |           <=	                              |   Left to Right   |
| Greater than	          |           >                                       |   Left to Right   |
| Greater than or equal to|	         >=                                   |	  Left to Right   |
| Equal to	          |              ==                                   |	  Left to Right   |
| Not equal to	          |           !=                                      |   Left to Right   |
| Bitwise AND	          |             &                                     |   Left to Right   |
| Bitwise exclusive OR	  |           ^                                       |   Left to Right   |
| Bitwise inclusive OR	  |             |                                     |   Left to Right   |
| Logical AND	          |             &&                                    |   Left to Right   |
| Logical OR	          |             ||	                              |   Left to Right   |
| Conditional	          |             ?:	                              |   Right to Left   |
| Assignment	          |   =, *=, /=, %=, +=, -=, &=, ^=, |=, <<=, >>=     |   Right to Left   |
| Comma	                  |           ,	                                      |   Right to Left   |


6. **If-else Statement**

```
if(flag) {
   // put some statements here to execute if flag is true (flag != 0)
} 
else if(flag) {
   // put some statements here to execute if flag is true (flag != 0)
} else {
   // put some statements here to execute if flag is false (flag == 0)
}

````
7. **Switch-case Statement**

```
switch(flag) {
    case 0:  // statements
   	break;
    case 1:  // statements
  	break;
    case 2:  // statements
  	break;
    default:  // statements
}
```

8. **While loop**

```
//for single statement  
while(expression) 
    statement;

//for multiple statement   
while(expression) 
{ 
    block of statement 
} 
```

9. **For loop**

```
for ( initialization; test condition; run every time command )

eg:
int i;
for (i =0;i<3;i++):
    printf("%d",&i);
will give 012 as output
```
10. **Do-while Statement**

```
do
{
    statements;
}while (expression);

```
11. **break & continue**

- *break statement* is used to terminate the current loop the moves to the next line of the code.
- *continue statement* skips the current loop index and moves to the next iteration.

12. **goto**
syntax of goto is as follows:
goto label;
..
.
label: statement;
example:
int a = 10;
   /* do loop execution */
   LOOP:do {
   
      if( a == 15) {
         /* skip the iteration */
         a = a + 1;
         goto LOOP;
      }
		
      printf("value of a: %d\n", a);
      a++;

   }while( a < 20 );
will give the output to be:
value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 16
value of a: 17
value of a: 18
value of a: 19



12. **Arrays**

- *Declaraction*: 
typeof_array array_name[size];
```
Eg:
int arr[10]; // makes an integer array of size 10
int num[6] = { 2, 4, 12, 5, 45, 5 } ; 
```
- *Accessing Array elements*:
`int k=arr[2]; //k stores the element at index 2 of the array`

- *Entering data into an Array*:
```
for(i =0;i<3;i++){
  scanf("%d", &arr[i]); // takes the values in the array arr by the user
}
```
13. **Strings**

- *Declaraction*: 
```
char string_name[size];
scanf("%s",string_nam); 
```
A string has '\0' as the last element which tells the end of string
It is accessed in the same way as an array
A string is in many ways similar to array

- Some basic built-in fucntions of strings

> Just include string.h at the top of your code

```
strlen - Finds length of a string
strlwr - Converts a string to lowercase
strupr - Converts a string to uppercase
strcat - Appends one string at the end of another
strncat - Appends first n characters of a string at the end of
another
strcpy - Copies a string into another
strncpy - Copies first n characters of one string into another
strcmp - Compares two strings
strncmp - Compares first n characters of two strings
strcmpi - Compares two strings without regard to case ("i" denotes
that this function ignores case)
stricmp - Compares two strings without regard to case (identical to
strcmpi)
strnicmp - Compares first n characters of two strings without regard
to case
strdup - Duplicates a string
strchr - Finds first occurrence ofa given character in a string
strrchr - Finds last occurrence ofa given character in a string
strstr - Finds first occurrence of a given string in another string
strset - Sets all characters ofstring to a given character
strnset - Sets first n characters ofa string to a given character
strrev - Reverses string
```

13. **Structures**
	
- A structure is a user defined data type in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type. 

>‘struct’ keyword is used to create a structure. Following is an example.

```
struct addrress 
{ 
   char name[50]; 
   char street[100]; 
   char city[50]; 
   char state[20]; 
   int pin; 
};
```

