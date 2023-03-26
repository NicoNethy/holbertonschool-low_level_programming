/**
 * op_add - the function
 * @a: an int
 * @b: an int
 * Return: allways
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the function
 * @a: an int
 * @b: an int
 * Return: allways
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the function
 * @a: an int
 * @b: an int
 * Return: allways
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the function
 * @a: an int
 * @b: an int
 * Return: allways
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}
/**
 * op_mod - the function
 * @a: an int
 * @b: an int
 * Return: allways
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
