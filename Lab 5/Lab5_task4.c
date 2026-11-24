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
	printf("\n Enter item and positionn no: n\n\n");
	scanf("%d%d",&item,&pos);
	printf("\n");
	for (i = n ; i >= pos; i--)
		arr[i + 1] = arr[i];
	arr[pos] = item;
	n++;
	for (i = 0; i < n ; i++)
		printf("%d\n", arr[i]);

	return 0;
}
