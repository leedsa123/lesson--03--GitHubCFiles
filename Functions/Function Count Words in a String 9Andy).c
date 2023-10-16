#include <string.h>
#include <stdio.h>

int words(const char sentence[ ])
{

// result
int counted = 0; 

// state:
    const char* it = sentence;
    int inword = 0;

    do switch(*it) {
        case '\0': 
        case ' ': case '\t': case '\n': case '\r': // TODO others?
            if (inword) { inword = 0; counted++; }
            break;
        default: inword = 1;
    } while(*it++);

    return counted;
}

int main(int argc, const char *argv[])
{
    printf("%d\n", words(""));
    printf("%d\n", words("\t"));
    printf("%d\n", words(" Andy Leeds "));
    printf("%d\n", words("is not quite ready for programming in C yet"));
}