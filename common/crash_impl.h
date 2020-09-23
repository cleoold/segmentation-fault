#pragma once

#if defined(_WIN32)
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT
#endif
#if defined(__cplusplus)
    #define CDCL extern "C"
#else
    #define CDCL
#endif

static void
crash_impl()
{
    // creates segfault on many platforms
    *(int *)0 = 0;
}
