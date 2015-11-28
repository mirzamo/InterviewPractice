// validation

//Write a recursive function to get and validate a positive
/*
integer number.

algorithm  getNum ( )

    read( num )

    loop( num < 0 )

       print_Instructions()

       read( num )

    end loop

    return num

end getNum
*/
//iterative

#include <stdio.h>

int validate();

int main()
{
	
	printf("%d\n", validate());

	return 0;
}

/*
int validate()
{
	int num;
	scanf("%d", &num);
	while(num < 0)
	{
		printf("Enter a positive\n");
		scanf("%d", &num);
	}

	return num;
}
*/

///*
//recursive
int validate()
{
	//  int num;
	// scanf("%d", &num);
	// if (num > 0)
	// 	return num;
	// else
	// 	num = validate();
	 int num;
	scanf("%d", &num);
	if (num < 0)
		num = validate();

	return num;
}

//*/