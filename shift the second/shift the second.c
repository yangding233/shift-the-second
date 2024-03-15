// #include <stdio.h> 
// #include <stdlib.h> 

// int main() 
// {
// 	int a,s,min,h;
// 	printf("please enter the number of seconds you want to shift:\n");
// 	scanf("%d",&a);
// 	s=a%60;
// 	min=(a%3600)/60;
// 	h=a/3600;
// 	printf("second: %d\n",s);
// 	printf("minute: %d\n",min);
// 	printf("hour: %d\n",h); 
	
// 	system("pause");
// 	return 0;
// }

#include <stdio.h> 
#include <stdlib.h> 

int main() 
{
	int a,s,min,h;
	printf("please enter the number of seconds you want to shift:\n");
	scanf("%d",&a);
	s=a%60;
	min=(a%3600)/60;
	h=a/3600;
	printf("second: %d\n",s);
	printf("minute: %d\n",min);
	printf("hour: %d\n",h); 
	
	system("pause");
	return 0;
}

