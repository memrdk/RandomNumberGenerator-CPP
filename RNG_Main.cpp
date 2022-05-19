#include <string>
#include <iostream>
#include <Windows.h>

//Custom Header
#include "RNG_Main.h"
#include "maddons_main.h"


//<================== Start of Random Numbers Generator Modules ==================

int last_RNG;

void RNG_Main::RNG_Generator_Facility_Main()
{
	maddons_main generator;
	int range = 0, NumbersToGenerate = 0;
	generator.Header_Generator("Random Number Generator", "2.0", "Default");
	cout << "Enter Range for Number to be generated:" << endl;
	cin >> range;
	cout << "How many Random number do you want to generate" << endl;
	cin >> NumbersToGenerate;
	RNG_Generator(range, NumbersToGenerate);
}

int RNG_Main::RNG_Generator(int range,int NumbersToGenerate)
{
	//Function Declaration
	//Algorithm_Logics ALG;
	//Variables
	//int A_M_A = 0;
	
	//A_M_A = ALG.Authentication_for_Master_Account();
	bool show_generated_number = false;
	//If NumberToGenerated is greater than 1 than we will show each generated Number here. Even Without developer account logged on.
	if (NumbersToGenerate > 1)
	{
		show_generated_number = true;
	}


	int v1=0;
	int i=NumbersToGenerate;		 
	while(i!=0)
	{	
	v1 = RNG_Main_Algorithm(range);

	if (show_generated_number == true)
	{
		cout << "Generated Number " << i << " = " << v1 << endl;
	}
	//These lines might be useful during debugging of program	
	/*
	if(A_M_A == 2)
		{	
		cout << "About to return RNGed = "<<v1<<endl;
		system("pause");
		}
	*/
		i--;
	}
	
	
	return v1;
}


int RNG_Main::RNG_Main_Algorithm(int range)
{
	//int A_M_A=0;
	//Algorithm_Logics ALG;
//	A_M_A = ALG.Authentication_for_Master_Account();
	int v1=0,i=0;
	while(i == 0)
	{
		i--;
	v1 = rand() % range+1;
		/*
		if(A_M_A == 2)
		{
		cout << "Generated v1 "<<v1<<endl;
		}
		*/
		if(v1 == last_RNG)
		{	
		continue;
		}
		break;
	}
	/*
	if(A_M_A == 2)
	{	
	cout << "Out of RNG MAin Algorithm loop. About to return value"<<endl;	
	cout << "Values Returned v1 = "<<v1<<" last_RNG = "<<last_RNG<<endl;
	}
	*/
	last_RNG = v1;
	/*
	if(A_M_A == 2)
	{	
	cout << "Update last RNG "<<last_RNG<<" V1 = "<<v1<<endl;
	}
	*/
	return v1;
}

//<================== End of Random Numbers Generator Modules ==================


