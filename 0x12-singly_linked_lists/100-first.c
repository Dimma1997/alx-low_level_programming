#include <stdio.h>
void before_main(void) _attribute_((constructor));
/**
 * before_main - executes before main
 * Return: 0
 */
void before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
