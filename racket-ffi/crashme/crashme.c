#include <stdio.h>
#include "../../common/crash_impl.h"

EXPORT CDCL void
crash_me()
{
    printf("%s\n", "Sorry. I crashed.");
    crash_impl();
    printf("%s\n", "OK. You win.");
}
