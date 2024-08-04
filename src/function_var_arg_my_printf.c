#include <stdio.h>
#include <stdarg.h>

// Custom printf function
void my_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    for (const char *p = format; *p != '\0'; p++)
    {
        if (*p == '%')
        {
            p++; // Move to the format specifier
            switch (*p)
            {
            case 'd':
            {
                int i = va_arg(args, int);
                printf("%d", i);
                break;
            }
            case 's':
            {
                char *s = va_arg(args, char *);
                printf("%s", s);
                break;
            }
            default:
                break;
            }
        }
        else
        {
            putchar(*p);
        }
    }

    va_end(args);
}

int main()
{
    my_printf("Hello %s! The numbers are %d and %d.\n", "World", 42, 52);
    return 0;
}