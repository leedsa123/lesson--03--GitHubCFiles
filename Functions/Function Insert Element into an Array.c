/*In this tutorial, we will learn how to insert a new element at the end or the beginning
of an array of integers based on user's choice.
Steps :
1. Delcare an array tab of N integers and initialize it.
2. Print the values of tab.
3. Ask the user to enter the integer nb to insert.
4. Ask the user to enter a character pos for the position.
• If pos = = 'e', nb should be inserted at the end.
• If pos = = 'b', nb should be inserted at the beginning.
5. Declare a new array tab1 of N+1 integers.
6. Depending on the value of pos, insert nb at the end or at the beginning of tab1.
7. Print tab1.
Step1 :
Delcare an array tab of N integers and initialize it.
#include <stdio.h>
int main()
{
int tab[] = {1, 2, 5, 4, 5};
}
Step2 :
Print the values of tab.
Since printing array's values is a process that can be repeated, we will do it using a
function.
This function returns void and takes as arguments an array of integers and the size of
the array because C arrays do not carry information about their size with them.
Add the declaration of the function before the main :
void printArray(int size, int tab[]) ;
and the definition of the function after the main :
void printArray(int size, int tab[])
{
for (int i = 0; i < size; i++)
printf("%d", tab[i]);
}
Now, we can call this function from the main after computing the size of tab :
int main()
{
int tab[] = {1, 2, 5, 4, 5};
 const int N = sizeof(tab) / sizeof(tab[0]); // Nb of items
printArray(N, tab);
}
Step3
Ask the user to enter the integer nb to insert.
This step also can be done using a function that doesn't take any parameter and
returns the entered number:
Add the declaration of the function before the main :
int getNumber() ;
and the definition of the function after the main :
int getNumber()
{
int nb;
printf("What is the number you want to add?");
scanf("%d", &nb);
return nb;
}
Now we can call it from the main to ask the user to enter the number :
int main()
{
int tab[] = {1, 2, 5, 4, 5};
const int N = sizeof(tab) / sizeof(tab[0]); // Nb of items
printArray(N, tab);
int nb = getNumber();
}
Step4
Ask the user to enter a character pos for the position.
This step also can be done using a function that doesn't take any parameter and
returns the char value that corresponds to the choice of the user between 'e' and 'b':
Add the declaration of the function before the main :
char getPosition() ;
and the definition of the function after the main :
char getPosition(){
char c;
printf("Choose where to add the number: e for end and b for beginning");
scanf(" %c", &c);
return c;
}
Now we can call it from the main to ask the user to enter the number :
int main()
{
int tab[] = {1, 2, 5, 4, 5};
const int N = sizeof(tab) / sizeof(tab[0]); // Nb of items
printArray(N, tab);
int nb = getNumber();
char p = getPosition();
}
Step5 :
Declare a new array tab1 of N+1 integers.
This should be done directly in the main :
int main()
{
int tab[] = {1, 2, 5, 4, 5};
const int N = sizeof(tab) / sizeof(tab[0]); // Nb of items
printArray(N, tab);
int nb = getNumber();
char pos = getPosition();
int tab1[N + 1];
}
Step5 :
Depending on the value of pos, put nb at the end or at the beginning of tab1.
This step can be splitted to 3 steps :
1. Create a function insertEnd that simulates the insertion of nb at the end of
tab.
2. Create a function insertBeginning that simulates the insertion of nb at the
beginning of tab.
3. Call the corresponding function from the main based on user's choice for
position pos
Step5.1 :
Create a function insertEnd that simulates the insertion of nb at the end of tab.
This function returns void and has 4 parameters :
1. The nb to insert
2. The base array
3. The new array
4. The size of the base array.
Add the declaration of the function before the main :
void insertEnd(int n, int t[], int size, int tab1[]) ;
and the definition of the function after the main :
void insertEnd(int n, int t[], int size, int tab1[])
{
for (int i = 0; i < size; i++){
tab1[i] = t[i];
 }
tab1[size] = n;
}
Step5.2 :
Create a function insertBeginning that simulates the insertion of nb at the beginning
of tab.
This function returns void and has 4 parameters :
5. The nb to insert
6. The base array
7. The new array
8. The size of the base array.
Add the declaration of the function before the main :
void insertBeginning(int n, int t[], int size, int tab1[]) ;
and the definition of the function after the main :
void insertBeginning(int n, int t[], int size, int tab1[])
{
tab1[0] = n;
for (int i = 0; i < size; i++)
tab1[i + 1] = t[i];
}
Step5.3:
Call the corresponding function from the main based on user's choice for position
pos
int main()
{
int tab[] = {1, 2, 5, 4, 5};
const int N = sizeof(tab) / sizeof(tab[0]); // Nb of items
printArray(N, tab);
int nb = getNumber();
char pos = getPosition();
 if (p == 'e')
{
insertEnd(nb, tab, N, tab1);
}
else if (p == 'b')
{
insertBeginning(nb, tab, N, tab1);
}
}
Step7 :
Print tab1.
We can call printArray function again from the main but this time for tab1.
int main()
{
int tab[] = {1, 2, 5, 4, 5};
const int N = sizeof(tab) / sizeof(tab[0]); // Nb of items
printArray(N, tab);
int nb = getNumber();
char p = getPosition();
int tab1[N + 1];
if (p == 'e')
{
insertEnd(nb, tab, N, tab1);
}
else if (p == 'b')
{
insertBeginning(nb, tab, N, tab1);
}
printArray(N + 1, tab1);
return 0;
}
Pass arguments by value/by reference :
Note here that tab1 is sent to the functions as an argument and can be modified inside
the functions. That's because the name of an array is a reference (or pointer) to the
first element of the array. We say that this type of variable is passed by reference to a
function and can be modified inside. This is the case of 2D arrays also and strings for
example.
Primitive type like integers, chars, floats, etc.. are not passed by reference to a
function. They are passed by value. That means that their values cannot be modified
inside the functions. And even they are modified, the modification will not be
conserved.
We can explicitly pass variables of primitive types by reference. We must in this
case send the address of the variable as an argument and not its value.
We will this in details in pointers section
Example :
Pass by value
void switching (int a, int b){
int temp=a;
a=b;
b=temp;
}
Function call :
switching(a, b);
Pass by reference
void switching(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}
Function call :
switching(&a, &b);*/



#include <stdio.h>
#include <stdlib.h>

void insertEnd(int n, int t[], int size, int tab1[]);
void insertBeginning(int n, int t[], int size, int tab1[]);
void printArray(int size, int tab[]);
int getNumber();
char getPosition();

int main()
{

    int tab[] = {1, 2, 5, 4, 5};

    const int N = sizeof(tab) / sizeof(tab[0]); // Nb of items

    printArray(N, tab);

    int nb = getNumber();
    char pos = getPosition();

    int tab1[N + 1];

    if (pos == 'e')
    {
        insertEnd(nb, tab, N, tab1);
    }
    else if (pos == 'b')
    {
        insertBeginning(nb, tab, N, tab1);
    }

    printArray(N + 1, tab1);

    return 0;
}

    void insertEnd(int n, int t[], int size, int tab1[])
    {

        for (int i = 0; i < size; i++)
            tab1[i] = t[i];

        tab1[size] = n;
    }

    void printArray(int size, int tab[])
    {
        for (int i = 0; i < size; i++){
            printf("%d", tab[i]);
        }
        printf("\n");
    }

    void insertBeginning(int n, int t[], int size, int tab1[])
    {

        tab1[0] = n;

        for (int i = 0; i < size; i++)
            tab1[i + 1] = t[i];
    }

    int getNumber()
    {
        int nb;
        printf("What is the number you want to add?");
        scanf("%d", &nb);
        return nb;
    }

    char getPosition(){
        char c;
        printf("Choose where to add the number: e for end and b for beginning");
        scanf(" %c", &c);
        return c;
    }