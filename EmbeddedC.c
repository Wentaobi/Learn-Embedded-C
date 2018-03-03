Pre-processor
#define SECONDS_PER_YEAR (60*60*24*365)UL
60*60*24*365 is a expression, not a result
UL: unsigned long int, good catch

#define MIN(A,B) ((A) <= (B) ? (A) ：(B))
basic application, this is the only way convert embedded inline to ANSI C, inline is usual way
we should use parenthesis for parameters in #define

#error is to help you debug ot help you organize programming as you think about, check something as you want or not sure

loop in embedded c
while; for; 
loop:
...
goto loop;

Data declarations
in integar; int a 
a pointer to an integer; int* a;
a pointer to a pointer to an integer; int** a;
an array of 10 integers; int a[10];
an array of 10 pointers to intehers; int* a[10];
a pointer to an array of 10 integers; int (*a)[10];
a pointer to a function that take an integer as an argument and returns an integer; int *void(int)// int (*a)(int)
an array of ten pointers to functions that take an integer argument and return an integer; int (*a[10])(int)// not sure

static:
1. static varible in a call back funciton is not changed
2. It can be used outside funciton but in module, is a lcoal var
3. not just in var, funciton as well, use in local or inside module

const: read only, can not be changed easily

volatile: importance difference betwwen c and embedded c coder
1. a var can be const and slso volatile? why
e.g. read-only register: volatile isbaeause it can be change by a chance, const is because program should not to change it
2. pointer can be volatike?
yes, but not usual,ISR is to modify a pointer to buffer
3, volatile type value can be modify when you do not know

Bit maniplation
no bit fields
#define and bit masks
// STATEMENT CONSTANT OR EXPRESSION
#define BIT3 (0X01<<3)
int static a;
void set_bit3(void)
{
 a |= BIIT3;
}

void clear_bit3(void)
{ 
 a &= ~BIT3; 
}

Accessing fixed mempry locations
give address 0x67a9 a int variable 0x aa66:
int* ptr;// define pointer
ptr = (int*)0x67a9; // define point to address
*ptr = 0xaa66; // define pointer's pt point address's content
// *(int* const)(0x67a9) = 0xaa66;

Interrupts



















