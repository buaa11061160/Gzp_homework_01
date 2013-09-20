#include<stdio.h>
int main()
{
	int a[1000],s[1000];
	int i,j,n,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=s[0]=a[0];
    for(i=1;i<n;i++)
	{
		if((a[i]+s[i-1])>a[i])
			s[i]=a[i]+s[i-1];
		else
			s[i]=a[i];
		if(s[i]>max)
			max=s[i];
	}
	printf("%d\n",max);
	return 0;
}