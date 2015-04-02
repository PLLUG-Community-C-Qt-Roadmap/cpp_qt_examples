#ifndef CPLUSPLUSTYPES_H
#define CPLUSPLUSTYPES_H

bool a = true; // true/false

//Integer numbers types
short b1;
int b2;
long b3;
long long b4;

//Character type
char c;

//Fractional numbers types
float d1;
double d2;
long double d3;

//Class, struct and union
class e;
struct f;
union n {
    char a[8];
    int *b;
};

//Const types
const int i = -1;

const int* c11 = 0;
int* const c12 = 0;
const int* const c13 = 0;

enum g {c1=0, c2=100, c3=200};
enum class h {c1=0, c2=100, c3=200};

//Pointer and Reference
int i2;
int &j = i2;
int *k = &i2;

//Array
int l[20];

//Pointer for various types
void *z = l;

//Function pointer

void f(int a)
{
}

typedef void (*ftype)(int a) ;
ftype x = &f;

#endif // CPLUSPLUSTYPES_H
