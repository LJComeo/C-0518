#include <stdio.h>
#include <stdlib.h>


#if 0
int main(){
	char a= - 128;
	char b = -127;
	char c = -126;
	printf("%d %d %d\n", a, b, c);
	printf("%u %u %u\n", a, b, c);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	char a = -1;
	signed b = -1;
	unsigned c = -1;
	printf("%d,%d,%d\n", a, b, c);
	printf("%u,%u,%u\n", a, b, c);
	system("pause");
	return 0;
}
#endif
#if 1
int cmp(const void*p1, const void*p2){
	return (*(int *)p1 - *(int *)p2);
}
int main(){
	int arr[] = { 6, 5, 7, 8, 9, 0, 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;
	qsort(arr, n, sizeof(int), cmp);
	for (i = 0; i < n; ++i){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
#endif