#include<iostream>
#include<fstream>

using namespace std;
                                  
void sum_of_matrix(int **d_arr,int rows,int cols);
void product_matrix(int **d_arr1,int rows1,int cols1);
void row_wise_avg(int **d_arr2,int rows2,int cols2);
void column_wise_avg(int **d_arr3,int rows3,int cols3);
void whole_matrix_avg(int **d_arr4,int rows4,int cols4);
void row_wise_sort(int **d_arr5,int rows5,int cols5);
void column_wise_sort(int **d_arr6,int rows6,int cols6);
void two_matrices_addition(int **d_arr7,int rows7,int cols7,int **d_arr8,int rows8,int cols8);
void two_matrices_subtraction(int **d_arr10,int rows10,int cols10,int **d_arr11,int rows11,int cols11);
void matrix_transpose(int **d_arr13,int rows13,int cols13);

int main()
{
	cout<<"\n\n\t\t\t\t\t==================="<<endl;
	cout<<"\t\t\t\t\tMATRIX MANIPULATOR"<<endl;
	cout<<"\t\t\t\t\t==================="<<endl;
	cout<<"\n\n"<<endl;
	
char option=0;

do{
	  int user_choice=0;
	
				cout<<"Press 1 Sum of Matrix (sum of all values)"<<endl;
      cout<<"Press 2  Product of Matrix (product of all values)"<<endl;
      cout<<"Press 3  Row-wise Average"<<endl;
       cout<<"Press 4 Column-wise Average"<<endl;
     cout<<"Press 5 Average of whole Matrix"<<endl; 

        cout<<"Press 6 Row-wise sorting of Matrix"<<endl;
        cout<<"Press 7 Column-wise sorting of Matrix"<<endl;
       cout<< "Press 8 Addition of two Matrices"<<endl;
        cout<<"Press 9 Subtraction of two Matrices"<<endl;
  cout<<   "Press 10 Matrix transpose"<<endl;
  cin>>user_choice;
	
     int user_decision=0;
     cout<<"\n\tPress 1 To Give Data Through Input Or Press 2 To Get Input From File: ";
     cin>>user_decision;
	if(user_decision==1){
		
	
  

			
	int rows =0; 
	int cols=0;
	cout<<"\n\tPlease Enter Rows And Columns More Than 0 \n"<<endl;
	cout<<"Please Enter Number Of Rows: ";
	cin>>rows;
	cout<<"Please Enter Number of Columns: ";
	cin>>cols;
	
	
	int **arr_2d=new int*[rows];
	
	for(int i=0;i<rows;i++)
	{
		arr_2d[i]=new int [cols];	
	}

	
	cout<<"You Have Created "<<rows<<"X"<<cols<<" Matrix \n"<<endl;
	cout<<"\nPlease Enter Integer Values To Populate The Matrix of "<<rows<<"X"<<cols<<endl;
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			
			cin>>arr_2d[i][j];
		}
	}
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			
			cout<<arr_2d[i][j]<<" ";
		}
		cout<<endl;
	}

	

	if(user_choice==1){
		cout<<"\n\tYou Have Opted To Add All Elements In The Matrix\n"<<endl;
		sum_of_matrix(arr_2d,rows,cols);
		
	}
			if(user_choice==2){
		
		cout<<"\n\tYou Have Opted To Take Product Of All Elements In The Matrix\n "<<endl;
		product_matrix(arr_2d,rows,cols);
		
	}
		if(user_choice==3){
		cout<<"\n\tYou Have Opted To Take Row Wise Average  Of The Matrix\n "<<endl;
		row_wise_avg(arr_2d,rows,cols);
		
		
	}
		if(user_choice==4){
		cout<<"\n\tYou Have Opted To Take Column Wise Average  Of The Matrix\n "<<endl;
		column_wise_avg(arr_2d,rows,cols);
		
	}
		if(user_choice==5){
		cout<<"\n\tYou Have Opted To Take Average  Of The Whole Matrix\n "<<endl;
		whole_matrix_avg(arr_2d,rows,cols);
		
	}
		if(user_choice==6){
		
     	cout<<"\n\tYou Have Opted To Sort The Matrix Row Wise\n "<<endl;
		row_wise_sort(arr_2d,rows,cols);
		
	}
		if(user_choice==7){
	cout<<"\n\tYou Have Opted To Sort The Matrix Column Wise\n "<<endl;
		column_wise_sort(arr_2d,rows,cols);
		
	}
		if(user_choice==8||user_choice==9){
		
			int rows_1 =0; 
	int cols_1=0;
	cout<<"\n\tPlease Enter 2nd matrix Rows And Columns That Has To Be More Than 0 \n"<<endl;
	cout<<"Please Enter Number Of Rows: ";
	cin>>rows_1;
	cout<<"Please Enter Number of Columns: ";
	cin>>cols_1;
	
	
	int **arr1_2d=new int*[rows_1];
	
	for(int i=0;i<rows_1;i++)
	{
		arr1_2d[i]=new int [cols_1];	
	}

	
	cout<<"You Have Created "<<rows_1<<"X"<<cols_1<<" Matrix \n"<<endl;
	cout<<"\nPlease Enter Integer Values To Populate The Matrix of "<<rows_1<<"X"<<cols_1<<endl;
	
	for(int i=0;i<rows_1;i++){
		for(int j=0;j<cols_1;j++){
			
			cin>>arr1_2d[i][j];
		}
	}
	
	for(int i=0;i<rows_1;i++){
		for(int j=0;j<cols_1;j++){
			
			cout<<arr1_2d[i][j]<<" ";
		}
		cout<<endl;
	}
	if(user_choice==8){
		
	
	cout<<"\n\tYou Have Opted To Add Two MAtrices\n "<<endl;
		two_matrices_addition(arr_2d,rows,cols,arr1_2d,rows_1,cols_1);
	}
	if(user_choice==9){
			cout<<"\n\tYou Have Opted To Subtract Two MAtrices\n "<<endl;
		two_matrices_subtraction(arr_2d,rows,cols,arr1_2d,rows_1,cols_1);
		
	}
			for(int i=0;i<rows_1;i++){
		
		delete[]arr1_2d[i];
		
		
	}
	delete[] arr1_2d;
}
		

		if(user_choice==10){
			cout<<"\n\tYou Have Opted Take Transpose Matrix\n "<<endl;
		matrix_transpose(arr_2d,rows,cols);
		
	}
if(user_choice>10)
	{
		cout<<"\n\tInvalid Choice! \nYou Are Asked To Choose Between Option 1 Till 10 To Perform Manipulation Of Matrix  \n"<<endl;
	}
	

		for(int i=0;i<rows;i++){
		
		delete[]arr_2d[i];
		
		
	}
	delete[] arr_2d;
	}
	

	else if(user_decision==2)
	{
		
		cin.ignore();
		char filename[20]={'\0'};
			cout<<"Please Enter Name of The File Of Your choice: ";
		cin.getline(filename,20);
	
	int rows_counter=0;
	int cols_counter=0;
	
		ifstream fin1,fin2,fin3;
		fin1.open(filename);
		
		if(!fin1.is_open())
{
	
	cout<<"\n\tFile Not Found!\n\tYou Have Enterd Wrong Extension of TXT File  Or Wrong File Name \n\tPlease Run Again! "<<endl;
		}		
		else
		{
			
			
			char endline[20]={'\0'};
			
			while(!fin1.eof()){
				
			fin1.getline(endline,20,'\n');
			rows_counter++;
			
				
			}
		}
	
		fin2.open(filename);
		int data=0;
		while(!fin2.eof()){
			
			fin2>>data;
			cols_counter++;
		}
		int col_avg=cols_counter/rows_counter;
		
	
		int rows_2=rows_counter;
		int cols_2=col_avg;
			cout<<"Number of Rows "<<rows_2<<endl;
		cout<<"Number of columns "<<cols_2<<endl;
		
		
		fin3.open(filename);
		
		
		int **arr2_2d=new int* [rows_2];
		
		for(int i=0;i<rows_2;i++){
			
			arr2_2d[i]=new int [cols_2];
		}
		for(int i=0;i<rows_2;i++){
			
			for(int j=0;j<cols_2;j++){
				
				fin3>>arr2_2d[i][j];
				cout<<arr2_2d[i][j]<<" ";
				
			}
			cout<<endl;
		}
			if(user_choice==1){
		cout<<"\n\tYou Have Opted To Add All Elements In The Matrix\n"<<endl;
		sum_of_matrix(arr2_2d,rows_2,cols_2);
		
	}
			if(user_choice==2){
		
		cout<<"\n\tYou Have Opted To Take Product Of All Elements In The Matrix\n "<<endl;
		product_matrix(arr2_2d,rows_2,cols_2);
		
	}
		if(user_choice==3){
		cout<<"\n\tYou Have Opted To Take Row Wise Average  Of The Matrix\n "<<endl;
		row_wise_avg(arr2_2d,rows_2,cols_2);
		
		
	}
		if(user_choice==4){
		cout<<"\n\tYou Have Opted To Take Column Wise Average  Of The Matrix\n "<<endl;
		column_wise_avg(arr2_2d,rows_2,cols_2);
		
	}
		if(user_choice==5){
		cout<<"\n\tYou Have Opted To Take Average  Of The Whole Matrix\n "<<endl;
		whole_matrix_avg(arr2_2d,rows_2,cols_2);
		
	}
		if(user_choice==6){
		
     	cout<<"\n\tYou Have Opted To Sort The Matrix Row Wise\n "<<endl;
		row_wise_sort(arr2_2d,rows_2,cols_2);
		
	}
		if(user_choice==7){
	cout<<"\n\tYou Have Opted To Sort The Matrix Column Wise\n "<<endl;
		column_wise_sort(arr2_2d,rows_2,cols_2);
		
	}
		
		if(user_choice==8||user_choice==9){
			
				char filename_1[20]={'\0'};
			cout<<"Please Enter 2nd Name of The File Of Your choice: ";
		cin.getline(filename_1,20);
	int rows_counter_1=0;
	int cols_counter_1=0;
	
		ifstream fin4,fin5,fin6;
		fin4.open(filename);
		
		if(!fin4.is_open())
{
	
	cout<<"File Not Found! Please Run Again MayBe your Extension Of file Is Not correct Or file Name is Wrong"<<endl;
		}		
		else
		{
			
			char endline_1[20]={'\0'};
			
			while(!fin4.eof()){
				
			fin4.getline(endline_1,20,'\n');
			rows_counter_1++;
			
				
			}
		}
	
		fin5.open(filename_1);
		int data_1=0;
		while(!fin5.eof()){
			
			fin5>>data_1;
			cols_counter_1++;
		}
		int col_avg_1=cols_counter_1/rows_counter_1;
		
	
		int rows_3=rows_counter_1;
		int cols_3=col_avg_1;
			cout<<"Number of Rows "<<rows_3<<endl;
		cout<<"Number of columns "<<cols_3<<endl;
		
		
		fin6.open(filename_1);
		
		
		int **arr3_2d=new int* [rows_3];
		
		for(int i=0;i<rows_3;i++){
			
			arr3_2d[i]=new int [cols_3];
		}
		for(int i=0;i<rows_3;i++){
			
			for(int j=0;j<cols_3;j++){
				
				fin6>>arr3_2d[i][j];
				cout<<arr3_2d[i][j]<<" ";
				
			}
			cout<<endl;
		}
			if(user_choice==8){
				
				
	cout<<"\n\tYou Have Opted To Add Two MAtrices\n "<<endl;
		two_matrices_addition(arr2_2d,rows_2,cols_3,arr3_2d,rows_3,cols_3);
				
			}
			if(user_choice==9)
			{
					cout<<"\n\tYou Have Opted To Subtract Two MAtrices\n "<<endl;
				two_matrices_subtraction(arr2_2d,rows_2,cols_3,arr3_2d,rows_3,cols_3);
			}
					for(int i=0;i<rows_3;i++){
		
		delete[]arr3_2d[i];
		
		
	}
	delete[] arr3_2d;
		}
		if(user_choice==10){
			
			matrix_transpose(arr2_2d,rows_2,cols_2);
		}
		if(user_choice>10){
			
				cout<<"\n\tInvalid Choice! \nYou Are Asked To Choose Between Option 1 Till 10 To Perform Manipulation Of Matrix  \n"<<endl;
			
		}
				for(int i=0;i<rows_2;i++){
		
		delete[]arr2_2d[i];
		
		
	}
	delete[] arr2_2d;
	
    }

	else
	{
		cout<<"\n\t\tInvalid Input!\n\t You Are Required To Input 1 Or 2 "<<endl;
	}

	cout<<"\nPress 0 To Exit Or Press Any Key To continue "<<endl;
	cin>>option;
}while(option!='0');


	system("pause");
	return 0;
}
void sum_of_matrix(int **d_arr,int rows,int cols){
	
	ofstream fout;
	fout.open("data.txt");
	cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
		
	
	float sum=0;
	
	for(int i=0;i<rows;i++){
		
		for(int j=0;j<cols;j++){
			
			
			sum=sum+d_arr[i][j];
		}
	}
	
	cout<<"Sum of Matrix: "<<sum<<endl;
}
else if(out_choice==2)
{
	
	float sum1=0;
	
	for(int i=0;i<rows;i++){
		
		for(int j=0;j<cols;j++){
			
			
			sum1=sum1+d_arr[i][j];
		}
	}
	
	fout<<"Sum of Matrix: "<<sum1<<endl;
	cout<<"Output Saved To file Successfully "<<endl;
}
else
{
	cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
}
void product_matrix(int **d_arr1,int rows1,int cols1){
	
	ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
	
	float product=1;
		for(int  i=0;i<rows1;i++){
		
		for( int j=0;j<cols1;j++){
			
			
			product=product*d_arr1[i][j];
		}
		
	}
		cout<<"Product of Matrix: "<<product<<endl;
	
}
else if(out_choice==2){
		float product=1;
		for(int  i=0;i<rows1;i++){
		
		for( int j=0;j<cols1;j++){
			
			
			product=product*d_arr1[i][j];
		}
		
	}
		fout<<"Product of Matrix: "<<product<<endl;
			cout<<"Output Saved To file Successfully "<<endl;
}
else
{
	cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
}


	

void row_wise_avg(int **d_arr2,int rows2,int cols2)
{
	ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
	
	float sum=0;
	float row_avg=0;
	for(int i=0;i<rows2;i++){
		for(int j=0;j<cols2;j++){
			
			sum=sum+d_arr2[i][j];
			
		}
			row_avg=sum/cols2;
	cout<<"Row Wise Average of The Matrix: "<<row_avg<<endl;
	}
}
else if(out_choice==2){
		float sum=0;
	float row_avg=0;
	for(int i=0;i<rows2;i++){
		for(int j=0;j<cols2;j++){
			
			sum=sum+d_arr2[i][j];
			
		}
			row_avg=sum/cols2;
	fout<<"Row Wise Average of The Matrix: "<<row_avg<<endl;
		cout<<"Output Saved To file Successfully "<<endl;
	}
	
}
else
{
	cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
}
void column_wise_avg(int **d_arr3,int rows3,int cols3)
{
	
		ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
	int sum=0;
	float col_avg=0;
	for(int i=0;i<cols3;i++){
		
		for(int j=0;j<rows3;j++){
			
			sum=sum+d_arr3[j][i];
			
			
		}
		col_avg=sum/rows3;
	
	cout<<"Column Wise Average Of The Matrix: "<<col_avg<<endl;
	}
}
else if(out_choice==2){
	
		int sum=0;
	float col_avg=0;
	for(int i=0;i<cols3;i++){
		
		for(int j=0;j<rows3;j++){
			
			sum=sum+d_arr3[j][i];
			
			
		}
		col_avg=sum/rows3;
	
	fout<<"Column Wise Average Of The Matrix: "<<col_avg<<endl;
	cout<<"Output Saved To file Successfully "<<endl;
	}
}
else
{
		cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
	
}
void whole_matrix_avg(int **d_arr4,int rows4,int cols4){
	
			ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
	float whole_avg=0;
	float table=0;
	float sum=0;
	for(int i=0;i<rows4;i++){
		
		
		for(int j=0;j<cols4;j++){
			
			sum=sum+d_arr4[i][j];
		}
	}
	table=rows4*cols4;
	whole_avg=sum/table;
	
	cout<<"Average Of The Whole Matrix "<<whole_avg<<endl;
}
else if(out_choice==2){
	float whole_avg=0;
	float table=0;
	float sum=0;
	for(int i=0;i<rows4;i++){
		
		
		for(int j=0;j<cols4;j++){
			
			sum=sum+d_arr4[i][j];
		}
	}
	table=rows4*cols4;
	whole_avg=sum/table;
	
	fout<<"Average Of The Whole Matrix "<<whole_avg<<endl;
		cout<<"Output Saved To file Successfully "<<endl;
}
else
{
	cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
}
void row_wise_sort(int **d_arr5,int rows5,int cols5){
	
		ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
	cout<<"\nRow Wise Sorted Table "<<endl;
 for (int i = 0; i < rows5; i++)
  {
  
    for (int j = 0; j < cols5; j++)
    {
     
      for (int k = 0; k < cols5 - j - 1; k++)
      {
        if (d_arr5[i][k] > d_arr5[i][k + 1])
        {
         
          swap(d_arr5[i][k], d_arr5[i][k + 1]);
        }
      }
    }
  }
 
  
  for (int i = 0; i < rows5; i++)
  {
    for (int j = 0; j < cols5; j++)
      cout << d_arr5[i][j] << " ";
    cout << endl;
  }
}
else if(out_choice==2){
		cout<<"\nRow Wise Sorted Table "<<endl;
 for (int i = 0; i < rows5; i++)
  {
  
    for (int j = 0; j < cols5; j++)
    {
     
      for (int k = 0; k < cols5 - j - 1; k++)
      {
        if (d_arr5[i][k] > d_arr5[i][k + 1])
        {
         
          swap(d_arr5[i][k], d_arr5[i][k + 1]);
        }
      }
    }
  }
 
  
  for (int i = 0; i < rows5; i++)
  {
    for (int j = 0; j < cols5; j++)
      fout << d_arr5[i][j] << " ";
    fout << endl;
  }
		cout<<"Output Saved To file Successfully "<<endl;
}
else
{
		cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
}

void column_wise_sort(int **d_arr6,int rows6,int cols6){
	
		ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
for (int j = 0; j < cols6; j++)
	{
		for (int i = 0; i < rows6; i++)
		{
			for (int k = i + 1; k < rows6; k++)
			{
				if (d_arr6[i][j] > d_arr6[k][j])
				{
					swap(d_arr6[i][j], d_arr6[k][j]);
				}
			}
		}
	}

	cout << "your sorted array by colom is:" << endl;
	for (int i = 0; i < rows6; i++)
	{
		for (int j = 0; j < cols6; j++)
		{
			cout << d_arr6[i][j] << " ";
		}
		cout << endl;
	}
}
else if(out_choice==2){
	
	for (int j = 0; j < cols6; j++)
	{
		for (int i = 0; i < rows6; i++)
		{
			for (int k = i + 1; k < rows6; k++)
			{
				if (d_arr6[i][j] > d_arr6[k][j])
				{
					swap(d_arr6[i][j], d_arr6[k][j]);
				}
			}
		}
	}

	cout << "your sorted array by colom is:" << endl;
	for (int i = 0; i < rows6; i++)
	{
		for (int j = 0; j < cols6; j++)
		{
			fout << d_arr6[i][j] << " ";
		}
		fout << endl;
	}
		cout<<"Output Saved To file Successfully "<<endl;
}
else
{
		cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
}
void two_matrices_addition(int **d_arr7,int rows7,int cols7,int **d_arr8,int rows8,int cols8)
{
			ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
	int **d_arr9=new int* [rows7];
	for(int i=0;i<rows7;i++){
		d_arr9[i]=new int [cols7];
	}
	if(rows7==rows8&&cols7==cols8){
		
		for(int i=0;i<rows7;i++){
			
			for(int j=0;j<cols7;j++){
				
				d_arr9[i][j]=d_arr7[i][j]+d_arr8[i][j];
			}
		}
		for(int i=0;i<rows7;i++){
			
			for(int j=0;j<cols7;j++){
				
				cout<<d_arr9[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	else
	{
		
		cout<<"In Order To Add Two Matrices Both Matrices Must Have Same Dimensions! \n\tPlease Try Again!"<<endl;
		
	}
}
else if(out_choice==2){
		int **d_arr9=new int* [rows7];
	for(int i=0;i<rows7;i++){
		d_arr9[i]=new int [cols7];
	}
	if(rows7==rows8&&cols7==cols8){
		
		for(int i=0;i<rows7;i++){
			
			for(int j=0;j<cols7;j++){
				
				d_arr9[i][j]=d_arr7[i][j]+d_arr8[i][j];
			}
		}
		for(int i=0;i<rows7;i++){
			
			for(int j=0;j<cols7;j++){
				
				fout<<d_arr9[i][j]<<" ";
			}
			fout<<endl;
		}
		
	}
	
	else
	{
		
		fout<<"In Order To Add Two Matrices Both Matrices Must Have Same Dimensions! \n\tPlease Try Again!"<<endl;
		
	}
		cout<<"Output Saved To file Successfully "<<endl;
}
else

{
	cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
	
}
void two_matrices_subtraction(int **d_arr10,int rows10,int cols10,int **d_arr11,int rows11,int cols11){
	
				ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
	int **d_arr12=new int* [rows10];
	for(int i=0;i<rows10;i++){
		d_arr12[i]=new int [cols10];
	}
	if(rows10==rows11&&cols10==cols11){
		
		for(int i=0;i<rows10;i++){
			
			for(int j=0;j<cols10;j++){
				
				d_arr12[i][j]=d_arr10[i][j]-d_arr11[i][j];
			}
		}
		for(int i=0;i<rows10;i++){
			
			for(int j=0;j<cols10;j++){
				
				cout<<d_arr12[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	else
	{
		
		cout<<"In Order To Subtract Two Matrices Both Matrices Must Have Same Dimensions! \n\tPlease Try Again!"<<endl;
		
	}
}
else if(out_choice==2)
{
	
		int **d_arr12=new int* [rows10];
	for(int i=0;i<rows10;i++){
		d_arr12[i]=new int [cols10];
	}
	if(rows10==rows11&&cols10==cols11){
		
		for(int i=0;i<rows10;i++){
			
			for(int j=0;j<cols10;j++){
				
				d_arr12[i][j]=d_arr10[i][j]-d_arr11[i][j];
			}
		}
		for(int i=0;i<rows10;i++){
			
			for(int j=0;j<cols10;j++){
				
				fout<<d_arr12[i][j]<<" ";
			}
			fout<<endl;
		}
	}
	
	else
	{
		
		fout<<"In Order To Subtract Two Matrices Both Matrices Must Have Same Dimensions! \n\tPlease Try Again!"<<endl;
		
	}
			cout<<"Output Saved To file Successfully "<<endl;
}
	else
	{
			cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
	}
}
void matrix_transpose(int **d_arr13,int rows13,int cols13){
	
				ofstream fout;
	fout.open("data.txt");
		cout<<"please enter 1 To Display Output On Console Or 2 To save In the file "<<endl;
	int out_choice=0;
	cin>>out_choice;
	if(out_choice==1)
	{
	for(int i=0;i<cols13;i++){
		
		for(int j=0;j<rows13;j++){
			cout<<d_arr13[j][i]<<" ";
			
		}
		cout<<endl;
	}
}
else if (out_choice==2){
	
		for(int i=0;i<cols13;i++){
		
		for(int j=0;j<rows13;j++){
			fout<<d_arr13[j][i]<<" ";
			
		}
		fout<<endl;
	}
			cout<<"Output Saved To file Successfully "<<endl;
}
else
{
	cout<<"Invalid Input!\n\tYou are Required To Enter 1 Or 2 "<<endl;
}
	
}

