#include <stdio.h>

#if defined(_WIN32)
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT
#endif

EXPORT void
crash_me()
{
    printf("%s\n", "Sorry. I crashed.");
    *(int *)0 = 0;
    printf("%s\n", "OK. You win.");
}
