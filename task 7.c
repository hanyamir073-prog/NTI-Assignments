#include <stdio.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;

typedef float f32;
typedef double f64;

int main()
{
    printf("the size ofu8 is %d bytes\n", sizeof(u8));
    printf("The size of u16 is %d bytes\n", sizeof(u16));
    printf("The size of u32 is %d bytes\n", sizeof(u32));

    printf("The size of s8 is %d bytes\n", sizeof(s8));
    printf("The size of s16 is %d bytes\n", sizeof(s16));
    printf("The size of s32 is %d bytes\n", sizeof(s32));

    printf("The size of f32 is %d bytes\n", sizeof(f32));
    printf("The size of f64 is %d bytes\n", sizeof(f64));

    return 0;
}
















