#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d", &n);
	int i;
	int arr[n];
	printf("Enter the elements of array :\n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int item,pos;
	printf("\n Enter  position no: \n\n");
	scanf("%d",&pos);
	printf("\n");
	for (i = pos ; i<n-1; i++)
		arr[i] = arr[i+1];

	n--;
	for (i = 0; i < n ; i++)
		printf("%d\n", arr[i]);

	return 0;
}
