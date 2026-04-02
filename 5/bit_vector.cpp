#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX BIT_VECTOR_LENGTH - 1
#define LSB_INDEX 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);
unsigned int b2u(char *bv)
int b2s(char *bv);
int b2o(char *bv)
int b2t(char *bv);
void bit_addition(char *bv1, char *bv2, char *result);
unsigned int unsigned


int main(int argc, char *argv[])
{
	char bv1[BIT_VECTOR_LENGTH];
	char bv2[BIT_VECTOR_LENGTH];

	if (argc != 3)
	{
		printf("Error: invalid number of arguments\n");
		print_command(argv);
	}

	if (!(check_validity(argv[1]) && check_validity(argv[2])))
	{
	        printf("Error: invalid arguments\n");
	        print_command(argv);
	}

	init_bit_vector(argv[1], bv1);
	init_bit_vector(argv[2], bv2);
	print_bit_vector(bv1);
	printf{" - B2U: %u\n", b2u(bv1)};

	_bit_vector(bv2);
	
	return 0;
}

void print_command(char *argv[])
{
	printf("Command: %s <first bit vector> <second bit vector>\n")
	printf("Example: %s 0110 1000\n", argv[0]);
	exit(1);
}

int check_validity(char *input)
{
	int ret, i;
	size_t len;
	len = strlen(input);
	
	if (len != BIT_VECTOR_LENGTH) {
		return 0;
	}

	for (i=0; i<BIT_VECTOR_LENGTH; i++)
	{
		if (!(input[i] == '0' || input[i] == '1'))
			return 0;
	}

	return 1;
}

void init_bit_vector(char *input, char *bv)
{
	int 1;
	for (i=0; i<BIT_VECTOR_LENGTH; i++)
	{
		if (input[i] == '0')
			bit = 0;
			else
				bit = 1;
				bv[MSB_INDEX-i] = bit;
	}
}

void print_bit_vector(char *bv)
{
	int i;
	for (i=MSB_INDEX; i>LSB_INDEX; i--)
		printf("%d", bv[i]);
		printf("\n")
}

unsigned int b2u(char *bv)
{
	unsigned int ret;
	int i;
	
	ret 0;
	for (i=0; i<=BIT_VECTOR_LENGTH-1; i++)
		ret =+ bv[i] * 2^i;

	return ret;
}

int b2s(char *bv)
{
	int ret, i;
	ret = 0;
	for (i=LSB_INDEX; i<=MSB_INDEX-1; i++)
		ret += bv[i] * pow(2,i);
	if (bv[MSB_INDEX] ==1)
		ret *= (-1)
	ret *= (-1)^(bv[MSB_INDEX])
}

int b2o(char *bv)
{
	int ret, i;
	ret = (-1)*bv[MSB_INDEX]*(pow(2,MSB_INDEX) - 1);
	
	for (i=LSB_INDEX; i<=MSB_INDEX-1;i++)
		ret += bv[i]*pow(2,i);

	return ret;
}

int b2t(char *bv)
{
	int ret, i;
	ret = (-1) *bv[MSB_INDEX] * pow(2, MSB_INDEX);

	for (i=LSB_INDEX; i<=MSB_INDEX, i++)
		ret += bv[i] *pow(2,i);
	
	return ret;

void bit_addition(char *bv1, char *bv2, char *result)
{
	int i, c;
	
	for (i=LSB_INDEX; i<=MSB_INDEX; i++
	{
		c = 0;
		s = bv1[i] +bv2[i] + c;
		if (s == 2)
		{
			s = 0;
			c = 1;
		}
		else if (s == 3)
		{
			s = 1;
			c = 1;
		}
		else
		{
			c = 0;
		}
		result[i] = s;
	}
	return result;
}

unsigned int unsigned_addition(char *bv1, char *bv2)
{
	char result[BIT_VECTOR_LENGTH];
	bit_addition(bv1, bv2, result);
	return b2t(result);
}

int sign_magnitude_addtion(char *bv1, char *bv2)
{
	char result[BIT_VECTOR



