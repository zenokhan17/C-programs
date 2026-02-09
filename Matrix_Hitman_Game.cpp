#include <iostream>

using namespace std;

	
int main()
{
//	1 = live enemy 0 = Dead enemy
	//  1 0 1
	//	1 1 0
	//  0 1 1 
	
    int rows = 3, col = 3;
    
     int **dbl_ptr=new int*[rows];
     
     for(int i=0;i<rows;i++)
     {
     	dbl_ptr[i]= new int[col];
	 
	 }
	 
	 dbl_ptr[0][0] = 0;
	 dbl_ptr[0][1] = 1;
	 dbl_ptr[0][2] = 0;
	 
	 dbl_ptr[1][0] = 1;
	 dbl_ptr[1][1] = 0;
	 dbl_ptr[1][2] = 1;
	 
	 dbl_ptr[2][0] = 0;
	 dbl_ptr[2][1] = 1;
	 dbl_ptr[2][2] = 0;
	 
	 int enemy_count = 0;
	 int missed_count = 0;
    for(int i=0;i<rows;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		if(dbl_ptr[i][j] == 1){
    			enemy_count++;
			}
		}
	}
	int i, j;
	
	while(enemy_count != 0){
		cout<<"Total enemies alive: "<<enemy_count;
		cout<<"\nKILL ENEMIES\n";
		cout<<"\nEnter row an column (0-2): ";
		cin>>i>>j;
		if(dbl_ptr[i][j] == 1){
			dbl_ptr[i][j]--;
			cout<<"Hit. Enemy destroyed\n";
			// enemey destroyed
			enemy_count--;
		}
		else{
			cout<<"You missed the Target\n";
			cout<<"missed chances left: \n"<< missed_count;
			missed_count++;
		}
		if(missed_count == 2)
			break;
	}
			cout<<"Game Over";


    return 0;
}