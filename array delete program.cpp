
//Copyright © 2022, Umar Habib, All rights reserved.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ar[100];
	int i,size,temp,loc=-1,del,n;
	ar:
	cout<<"\n\n Please enter the number of items in array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<" \n Enter value in index "<<i<<" = ";
		cin>>ar[i];
	}
	delet:
	cout<<" \n\n Enter Delete number = ";
	again:	
	cin>>del;
	for(i=0;i<size;i++)
	{
		if(ar[i]==del)
		{
			loc=i;
			temp=ar[i];
			ar[i]=ar[i+1];
			ar[i+1]=temp;
		}
	}
	 if(loc==-1)
	{
		cout<<"\n you enter wrong number ";
		cout<<" \n\n Please  again enter number = ";
		goto again;
	}
	else
	{
			size--;
		if(size==0)
		{
			cout<<" \t\t\t\t your element finish "<<endl;
			cout<<" \n\t\t\t Press 2 back to array declaration = ";
			n=getch();
			if(n==50)
			{
				system("cls");	
				goto ar;
			}
		}
		else
		{
		cout<<"\n your deleted number is = "<<temp<<endl;
		cout<<"\n Array length = "<<size<<endl;
		cout<<"\n Remaining numbers in the array"<<endl; 
		for(i=0;i<size;i++)
		{
			//cout<<" your number ";
			cout<<"\n\n\tValue in "<<i<<" index = "<<ar[i];
		}
		cout<<" \n\n If delete other number press 1\tand\tIf you want to back array declaration press 2 :";
		n=getch();
		if(n==49)
		{
			for(i=size;i>-2;i--)
			{
				loc=i;
			}
			goto delet;
		}
		else if(n==50)
		{
			system("cls");
			
			goto ar;
		}
		}
	}
	getch();
}
