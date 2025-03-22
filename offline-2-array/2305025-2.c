#include <stdio.h>

int main()
{
	int n, m, t, maxchild=1;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
/*
    printf("Initial order: ");
    for(int r=0; r<n; r++) {
    	printf("%d ", a[r]);
    }
    printf("\n");
*/
	for(int j=0; j<m; j++) {
		
		scanf("%d", &t);

		if(t>0) {
			for(int l=1; l<=t; l++) {
				int temp=a[n-1];
				for(int p=n-1; p>0; p--) {
					a[p]=a[p-1];
				}
				a[0]=temp;
			}
		}
		else {
			t=-t;
			for(int l=1; l<=t; l++) {
				int temp=a[0];
				for(int p=0; p<n; p++) {
					a[p]=a[p+1];
				}
				a[n-1]=temp;
			}
		}



		printf("After instruction %d: ",j+1);
		for(int o=0; o<n; o++) {
			printf("%d ", a[o]);
		}
		printf("\n");
	}


	int max=a[0];
	for(int q=1; q<n; q++) {
		if(a[q]>max) {
			max=a[q];
			maxchild=q+1;
		}
	}

	printf("Winner: Child %d", maxchild);



}