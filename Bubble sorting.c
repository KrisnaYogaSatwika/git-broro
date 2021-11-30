#include <stdio.h>

int main (){
	int i,j,n,t, A[100];
	printf("Masukkan Banyak Data :"); scanf("%d", &n);
	
	for(i=1; i<n; i++)
	{
		printf("Data %d=",i); scan("%d, &A[i]");
	}
	for(i=1; i<=(n-1); i++)
	{
		for(j=n; j>=(i+1); j--)
		{
			if(A[j-1]>A[j])
			t=A[j-1];
			 A[j-1] = A[j];
			 A[j] = t;
		}
	}
}

printf("\nUrutannya adalah :");
for(i=1; i<=n; i++)
{
	printf("%d ", A[i]);
}
printf("\n");
return 0;
}
