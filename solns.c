/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int s)
{
	int max=a[0];
	for (int i=1;i<s;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}

int min(int a [], int s)
{
	int min=a[0];
	for (int i=1;i<s;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	return min;
}


float average(int a[], int s)
{
	int sum=0;
	for (int i=0;i<s;i++)
	{
		sum=sum+a[i];
	}
	float avg=(float)sum/s;
	return avg;
}

int mode(int a[], int s)
{
	int max=a[0];
	for (int i=1;i<s;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	int counts[max+1];
	for (int j=0;j<max+1;j++)
	{
		counts[j]=0;
	}
	for (int i=0;i<s;i++)
	{
		counts[a[i]]=counts[a[i]]+1;
	}
	int largest=counts[0],pos;
	for (int j=0;j<max+1;j++)
	{
		if(largest<counts[j])
		{
			largest=counts[j];
			pos=j;
		}
		
	}
	return pos;
}

int factors(int n, int f[])
{
	
	int r=n,p=0,i=2;
	while(r!=1)
	{
		int flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
				
		}
		if (flag==0)
		{
			while(r%i==0)
			{
				r=r/i;
				f[p]=i;
				p++;
			}
				
			
		}
		i++;
	}
	//return f;
	return p;
}
