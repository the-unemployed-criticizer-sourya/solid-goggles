#ifndef statos_h
#define statos_h
	#include "conio.h"
	#include "stdio.h"
	#include "stdlib.h"
	#include "process.h"
	long int n;
	void mode()
	{
		system("cls");
		printf("\n\nEnter the number of terms you want to find the mode of (only integers please otherwise the program will read the integral part only): ");
		scanf("%ld",&n);
		long int mode,i,j,count[n];
		double a[n];
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\nEnter the value number %ld : ",i+1);
			scanf("%lf",&a[i]);
			count[i]=0;
		}
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\n\nThe %ld number value is : %lf",i+1,a[i]);
		}
		getch();
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count[j]=count[j]+1;
				}
				else
				{
					count[j]=count[j];
				}
			}
		}
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\n\n Frequency of %lf is : %ld",a[i],count[i]);
		}
		getch();
		i=0;
		for(j=0;j<n;j++)
		{
			if(count[i]>=count[j])
			{
				mode=count[i];
			}
			else
			{
				mode=count[j];
			}
		}
		system("cls");
		if(mode>1)
		{
			printf("\n\n Frequency of modal number is : %ld",mode);
			for(i=0;i<n;i++)
			{
				if(mode==count[i])
				{
					printf("\n\n %lf is a modal number.",a[i]);
				}
				else
				{
					printf("\n\n %lf is not a modal number.",a[i]);
				}
			}
		}
		else
		{
			printf("\n\nThe data contains no modal number.");
		}
		getch();
	}
	static void mean(void)
	{	
		system("cls");
		printf("\nEnter the number of terms you want to find the mean of (only integers please otherwise the program will read the integral part only): ");
		scanf("%ld",&n);
		long int i;
		double sum=0,mean=0,a[n];
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\nEnter the value number %ld : ",i+1);
			scanf("%lf",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		mean=sum/n;
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\n\nThe %ld number value is : %lf",i+1,a[i]);
		}
		getch();
		printf("\n\nThe mean of the values is : %lf",mean);
	}
	static void median(void)
	{
		system("cls");
		printf("\n\nEnter the number of terms you want to find the median of (only integers please otherwise the program will read the integral part only): ");
		scanf("%ld",&n);
		long int swap,i,j;
		double a[n],median;
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\nEnter the value number %ld : ",i+1);
			scanf("%lf",&a[i]);
		}
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\n\nThe %ld number value is : %lf",i+1,a[i]);
		}
		getch();
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]>=a[j])
				{
					a[i]=a[i];
				}
				else
				{
					swap=a[i];
					a[i]=a[j];
					a[j]=swap;
				}
			}
		}
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\n\nThe sorted %ld no. value is : %lf",i+1,a[i]);
		}
		getch();
		if(n%2==0)
		{
			goto even_med;
		}
		else
		{
			goto odd_med;
		}
		even_med:
			system("cls");
			printf("\n\nThe median of the dataset is : %lf",a[(n-1)/2]);
			getch();
			exit(0);
		odd_med:
			system("cls");
			printf("\n\nThe median of the dataset is : %lf",a[n/2]);
			getch();
			exit(0);
	}
#endif
