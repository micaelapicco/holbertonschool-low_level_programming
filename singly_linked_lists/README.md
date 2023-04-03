
# <a> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" width=3% heigth=3% ></img></a> Singly linked lists



## Learning Objectives

- When and why using **linked lists vs arrays**
- How to **build and use** linked lists
## Requirements
- Allowed editors: `vi, vim, emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should *end with a new line*
- There should be no errors and no warnings during compilation
- Your code should use the **Betty style.** It will be checked using betty-style.pl and betty-doc.pl
-The only C standard library functions } `allowed` are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use `_putchar`
- The **prototypes** of all your functions and the prototype of the function _putchar should be included in your header file called `lists.h`



## More info
- Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
