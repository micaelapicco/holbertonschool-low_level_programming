
# <a> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" width=3% heigth=3% ></img></a> Doubly linked lists




## Learning Objectives

- What is a **doubly linked list**
- How to use doubly linked lists
- Start to **look for the right source** of information without too much help
## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- Your code should use the `Betty style`. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit `
- The prototypes of all your functions should be included in your header file called `lists.h`
## More Info
- Please use this data structure for this project:
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
