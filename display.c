#include <stdio.h>
#include <stdlib.h>

void show(int *parray, int size)
{
	
	for (int i=size-1; i>=0; --i)
	{
		printf("%d ",parray[i]);
	}

	printf("\n");

	
}

int* display(int *parray, int* psize)
{
	int carry=1, new=0, size=*psize;
	int* new_array;

	for (int i=size-1; i>=0; --i)
	{
		new = parray[i] + carry;
		if(new == 10) 
		{
			parray[i] = 0;
			carry = 1;
		}
		else
		{
			parray[i] = new;
			carry = 0; 
		}
	}
	if(carry == 1)
	{
		size++;
		new_array = (int*) malloc(size*sizeof(int));
		new_array[0] = parray[0];
		new_array[1] = carry;

		*psize = size;

		return new_array;
	}

	return parray;

}

int main()
{
	/* create  a program like display 3 3 3 in array and add 1 like 3 3 4*/
    int *array;
    int n=1;

   array = (int*) malloc( n * sizeof(int));

   array [0] = 9;

   show(array, n);

   array = display ( array, &n );

   show(array, n);


   return 0; 

}