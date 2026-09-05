#ifndef statos_h
#define statos_h
	#include "conio.h"
	#include "stdio.h"
	#include "stdlib.h"
	#include "process.h"
	long int n;
	static void mode(void)
	{
		printf("Enter the number of terms you want to enter (only integers please otherwise the program will only read the integral part): ");
		scanf("%ld",&n);
		long int mode;
		long int i,j,count[n];
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
		for(i=0;i<n;i++)
		{
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
		}
		system("cls");
		if(mode>1)
		{
			printf("\n\n Frequency of modal number is : %ld",mode);
			for(i=0;i<n;i++)
			{
				if(count[i]==mode)
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
	}
	static void mean(void)
	{	
		system("cls");
		printf("\nEnter the number of terms you want to find the mean of : ");
		scanf("%ld",&n);
		long int i;
		double sum=0,mean=0,a[n];
		system("cls");
		for(i=0;i<n;i++)
		{
			printf("\nEnter the value number %d : ",i+1);
			scanf("%f",&a[i]);
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
		printf("\nEnter the number of terms you want to find the median of : ");
		scanf("%ld",&n);
		long int i,med_num,min_num,j;
		double med_sort[n],a[n];
		for(i=0;i<n;i++)
		{
			printf("\nEnter the value number %ld : ",i+1);
			scanf("%f",&a[i]);
		}
		if(n%2==0)
		{
			system("cls");
			goto even_med;
		}
		else
		{
			system("cls");
			goto odd_med;
		}
			even_med:
				med_num=((n+1)/2);
				
				for(i=0;i<n;i++)
				{
					printf("\n\nThe %ld number value of the incresingly ordered sequence is : %lf",i+1,a[i]);
				}
				
				//SORTING SEQUENCE
				
				getch();
				system("cls");
				printf("\n\nThe median of the given data set is : %lf",a[med_num]);
				getch();
				exit(0);
			odd_med:
				med_num=(n/2);
				
				//SORTING SEQUENCE
				
				for(i=0;i<n;i++)
				{
					printf("\n\nThe %ld number value of the incresingly ordered sequence is : %lf",i+1,a[i]);
				}
				getch();
				system("cls");
				printf("\n\nThe median of the given data set is : %lf",a[med_num]);
				exit(0);
	}		
#endif
