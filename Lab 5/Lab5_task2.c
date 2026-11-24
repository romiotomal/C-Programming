#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d", &n);
	int arr[n];
	int i;
	printf("Enter the elements of array :\n");
	for (i = 0; i < n; i++) {
		printf("Enter element no  :%d\n",i+1);
		scanf("%d", &arr[i]);
	}
	printf("\nOutpupt :");
	for (i = 0; i < n; i++)
		printf("%d\t",arr[i]);
		int sum=0;
		for (i = 0; i < n; i++)
            sum=sum+arr[i];
            printf("\nsum :%d\n",sum);

	return 0;
}
