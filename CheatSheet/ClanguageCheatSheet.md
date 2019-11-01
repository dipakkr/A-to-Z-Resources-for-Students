# CheatSheet

## C Programming

## Index

1. [Keywords](#1-keywords)
2. [Allowed Character Set](#2-allowed-character-set)
3. [Data Types and Placeholders](#3-data-types-and-placeholders)
4. [Escape Sequences](#4-escape-sequences)
5. [Precedence Order](#5-precedence-order)
6. [If-else Statement](#6-if-else-statement)
7. [Switch-case Statement](#7-switch-case-statement)
8. [While loop](#8-while-loop)
9. [For loop](#9-for-loop)
10. [Do-while Statement](#10-do-while-statement)
11. [break & continue](#11-break--continue)
12. [goto](#12-goto)
13. [Arrays](#13-arrays)
14. [Strings](#14-strings)
15. [Structures](#15-structures)
16. [Macros](#16-macros)
17. [Videos](#17-videos)

### 1. Keywords

---

These words are reserved for the language and cannot be used as any variable name by the user.

```text
|  auto      |  double  |  int       |  struct
|  break     |  else    |  long      |  switch
|  case      |  enum    |  register  |  typedef
|  char      |  extern  |  return    |  union
|  const     |  float   |  short     |  unsigned
|  continue  |  for     |  signed    |  void
|  default   |  goto    |  sizeof    |  volatile
|  do        |  if      |  static    |  while
```

### 2. Allowed Character Set

---

| Alphabets  |    Digits   |    Special Symbols |
|:----------:|:-----------:|:------------------:|
| A          |      0      |        ~           |
| B          |      1      |        â€˜         |
| â€¦..      |      2      |        !           |
| Y          |      3      |        @           |
| Z          |      4      |        #           |
| a          |      5      |        ^           |
| b          |      6      |        &           |
| â€¦â€¦     |      7      |        *           |
| y          |      8      |        ()          |
| z          |      9      |        _           |

Some other Special Symbols =>

`-` `+` `=` `|` `\` `{` `}` `[` `]` `:` `;` `"` `'` `<` `>` `,` `.` `?` `/`

### 3. Data Types and Placeholders

---

Some common datatypes are:

| Short  | Actual       |
|:------:|:------------:|
| int    | integer      |
| char   | character    |
| long   | long integer |
| float  | float number |
| double | long float   |

Use `scanf` to take input from the user

```c
scanf("Format string",&variable,&variable,...);
```

| Placeholders | Format                       |
|:------------:|:----------------------------:|
|    `%c`      | Character                    |
|    `%d`      | Signed decimal integer       |
|    `%i`      | Signed decimal integer       |
|    `%e`      | Scientific notation[e]       |
|    `%E`      | Scientific notation[E]       |
|    `%f`      | Decimal floating point       |
|    `%o`      | unsigned octal               |
|    `%s`      | String of character          |
|    `%u`      | unsigned decimal integer     |
|    `%x`      | unsigned Hexadecimal (lower) |
|    `%X`      | unsigned Hexadecimal (upper) |
|    `%p`      | display a pointer            |
|    `%%`      | print a %                    |

### 4. Escape Sequences

---

|  Sequence  |   Task              |
|:----------:|:-------------------:|
|    `\a`    |   Bell              |
|    `\n`    |   New Line          |
|    `\r`    |   Carriage return   |
|    `\b`    |   Backspace         |
|    `\f`    |   Form feed         |
|    `\t`    |   Horizontal tab    |
|    `\"`    |   Quotation mark    |
|    `\v`    |   Vertical tab      |
|    `\'`    |   Apostrophe        |
|    `\\`    |   Backslash         |
|    `\?`    |   Question mark     |
|    `\0`    |   Null              |

### 5. Precedence Order

---

|        DESCRIPTION       |                              OPERATORS                              |   ASSOCIATIVITY   |
| :-----------------------:|:-------------------------------------------------------------------:| -----------------:|
| Function Expression      |                                 `()`                                |   Left to Right   |
| Array Expression         |                                 `[]`                                |   Left to Right   |
| Structure Operator       |                                 `->`                                |   Left to Right   |
| Structure Operator       |                                 `.`                                 |   Left to Right   |
| Unary minus              |                                 `-`                                 |   Right to Left   |
| Increment/Decrement      |                              `++`, `--`                             |   Right to Left   |
| One's complement         |                                 `~`                                 |   Right to Left   |
| Negation                 |                                 `!`                                 |   Right to Left   |
| Address of               |                                 `&`                                 |   Right to Left   |
| Value of address         |                                 `*`                                 |   Right to Left   |
| Type cast                |                               `(type)`                              |   Right to Left   |
| Size in bytes            |                               `sizeof`                              |   Right to Left   |
| Multiplication           |                                 `*`                                 |   Left to Right   |
| Division                 |                                 `/`                                 |   Left to Right   |
| Modulus                  |                                 `%`                                 |   Left to Right   |
| Addition                 |                                 `+`                                 |   Left to Right   |
| Subtraction              |                                 `-`                                 |   Left to Right   |
| Left shift               |                                 `<<`                                |   Left to Right   |
| Right shift              |                                 `>>`                                |   Left to Right   |
| Less than                |                                 `<`                                 |   Left to Right   |
| Less than or equal to    |                                 `<=`                                |   Left to Right   |
| Greater than             |                                 `>`                                 |   Left to Right   |
| Greater than or equal to |                                 `>=`                                |   Left to Right   |
| Equal to                 |                                 `==`                                |   Left to Right   |
| Not equal to             |                                 `!=`                                |   Left to Right   |
| Bitwise AND              |                                 `&`                                 |   Left to Right   |
| Bitwise exclusive OR     |                                 `^`                                 |   Left to Right   |
| Bitwise inclusive OR     |                                 `\|`                                |   Left to Right   |
| Logical AND              |                                 `&&`                                |   Left to Right   |
| Logical OR               |                                 `\|\|`                              |   Left to Right   |
| Conditional              |                                 `?:`                                |   Right to Left   |
| Assignment               | `=`, `*=`, `/=`, `%=`, `+=`, `-=`, `&=`, `^=`, `\|=`, `<<=`, `>>=`  |   Right to Left   |
| Comma                    |                                 `,`                                 |   Right to Left   |

### 6. If-else Statement

---

```c
if(flag) {
    // put some statements here to execute if flag is true (flag != 0)
}
else if(flag) {
    // put some statements here to execute if flag is true (flag != 0)
} else {
    // put some statements here to execute if flag is false (flag == 0)
}

````

### 7. Switch-case Statement

---

```c
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

### 8. While loop

---

```c
//for single statement
while(expression)
    statement;

//for multiple statement
while(expression)
{
    block of statement
}
```

### 9. For loop

---

```c
for ( initialization; test condition; run every time command )
```

eg:

```c
int i;
for (i =0;i<3;i++):
    printf("%d",&i);
will give 012 as output
```

### 10. Do-while Statement

---

```c
do
{
    statements;
}while (expression);
```

### 11. break & continue

---

- *break statement* is used to terminate the current loop the moves to the next line of the code.
- *continue statement* skips the current loop index and moves to the next iteration.

### 12. goto

---

syntax of goto is as follows:

```text
goto label;
..
.
label: statement;
```

example:

```c
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
```

will give the output to be:

```text
value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 16
value of a: 17
value of a: 18
value of a: 19
```

### 13. Arrays

---

- *Declaration*:

```c
typeof_array array_name[size];
```

Eg:

```c
int arr[10]; // makes an integer array of size 10
int num[6] = { 2, 4, 12, 5, 45, 5 } ;
```

- *Accessing Array elements*:

`int k=arr[2]; // k stores the element at index 2 of the array`

- *Entering data into an Array*:

```c
for(i =0;i<3;i++){
  scanf("%d", &arr[i]); // takes the values in the array arr by the user
}
```

### 14. Strings

---

- *Declaration*:

```c
char string_name[size];
scanf("%s",string_nam);
```

- A string has '\0' as the last element which tells the end of string
- It is accessed in the same way as an array
- A string is in many ways similar to array

Some basic built-in functions of strings:

> Just include string.h at the top of your code

|   Function   |             Description                                                                         |
|:------------:|:-----------------------------------------------------------------------------------------------:|
|  `strlen`    |      Finds length of a string                                                                   |
|  `strlwr`    |      Converts a string to lowercase                                                             |
|  `strupr`    |      Converts a string to uppercase                                                             |
|  `strcat`    |      Appends one string at the end of another                                                   |
|  `strncat`   |      Appends first n characters of a string at the end of another                               |
|  `strcpy`    |      Copies a string into another                                                               |
|  `strncpy`   |      Copies first n characters of one string into another                                       |
|  `strcmp`    |      Compares two strings                                                                       |
|  `strncmp`   |      Compares first n characters of two strings                                                 |
|  `strcmpi`   |      Compares two strings without regard to case ("i" denotes that this function ignores case)  |
|  `stricmp`   |      Compares two strings without regard to case (identical to `strcmpi`)                       |
|  `strnicmp`  |      Compares first n characters of two strings without regard to case                          |
|  `strdup`    |      Duplicates a string                                                                        |
|  `strchr`    |      Finds first occurrence of a given character in a string                                    |
|  `strrchr`   |      Finds last occurrence of a given character in a string                                     |
|  `strstr`    |      Finds first occurrence of a given string in another string                                 |
|  `strset`    |      Sets all characters ofstring to a given character                                          |
|  `strnset`   |      Sets first n characters of a string to a given character                                   |
|  `strrev`    |      Reverses string

### 15. Structures

---

- A structure is a user defined data type in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type.

> 'struct' keyword is used to create a structure. Following is an example.

```c
struct address
{
   char name[50];
   char street[100];
   char city[50];
   char state[20];
   int pin;
};
```

- Types of structure:
- Tagged structure - tag after `struct`
- Variable structure - identifier before last semicolon
- Type definition structure - a `typedef` before `struct` and a type identifier before last semicolon

### 16. Macros

---

- A macro is a single instruction that expands automatically into a set of instructions to perform a particular task.
- Commonly used keyword are `#define`, `#undef`
- Types of macro:
- Simple macro
- Macro with no variables, usually used as constants
- Parameterized macro
- Macro with variables, according to gcc.gnu.org: When the macro is expanded, each use of a parameter in its body is replaced by the tokens of the corresponding argument.

### 17. Videos

---

- [C Programming Tutorial](https://www.youtube.com/watch?v=-CpG3oATGIs)
