#include<iostream>
#define ROWS 3
#define COL 3
using namespace std;

	
int main()
{
    int rows = 3, col = 3;
    
     int **dbl_ptr=new int*[rows];
     
     for(int i=0;i<rows;i++)
     {
     	dbl_ptr[i]= new int[col];
	 
	 }
	 
	 
    for(int i=0;i<rows;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		if(j==0 && i==0)
    		{
    		cout<<"Enter students for peshawar campus-Computer science:";	
			}
			else if(j==1 && i==0)
			{
				cout<<"Enter students for peshawar campus-Software engineering:";
			}
			else if(j==2 && i==0)
			{
				cout<<"Enter students for peshawar campus-Data science:";
			}
				if(j==0 && i==1)
    		{
    		cout<<"Enter students for islamabad campus-Computer science:";	
			}
			else if(j==1 && i==1)
			{
				cout<<"Enter students for islamabad campus-Software engineering:";
			}
			else if(j==2 && i==1)
			{
				cout<<"Enter students for islamabad campus-Data science:";
			}
				if(j==0 && i==2)
    		{
    		cout<<"Enter students for Karachi campus-Computer science:";	
			}
			else if(j==1 && i==2)
			{
				cout<<"Enter students for Karachi campus-Software engineering:";
			}
			else if(j==2 && i==2)
			{
				cout<<"Enter students for Karachi campus-Data science:";
			}
    		cin>>dbl_ptr[i][j];
		}
	cout<<"\n";
	}
			cout<<"\nCampus / Department \tCs\tDS\tSE\n";
	for(int i=0;i<rows;i++)
	{
		if(i==0)
			cout<<"Peshawar\t\t";
		if(i==1)
			cout<<"Islamabad\t\t";
		if(i==2)
			cout<<"Karachi\t\t\t";
		for(int j=0;j<col;j++)
		{
			cout<<dbl_ptr[i][j]<<"\t";
		}
		cout<<endl;
	}
    
    return 0;
}