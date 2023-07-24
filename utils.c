#include "main.h"

/**
 * is_printable - Assesses whether a chararacter is suitable for printing.
 * @c: Character to be assessed.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code – Adding ASCii character in hexadecimal code to the buffer.
 * @buffer:An array of characters.
 * @i: The index from which to begin appending.
 * @ascii_code: ASCii CODE.
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Validates whether a character is a digit
 * @c: The character to be assessed
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Converts a number to the specified data size
 * @num: The number that needs to be converted to a different data type.
 * @size: The number indicating the data type to which the value should be casted.
 *
 * Return: The value of the number after it has been converted to the specified data type.
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Converts a number to the specified data size
 * @num: The number to be convered
 * @size: The number signifying the data type to be converted
 *
 * Return: The converted value of number
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

