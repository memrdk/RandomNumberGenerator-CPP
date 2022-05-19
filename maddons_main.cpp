#include <iostream>
#include <string>

//Custom Header
#include "maddons_main.h"



using namespace std;

//<--------------------------- Generators --------------------------

void maddons_main::Header_Generator(string module_name,string VoN,string extras)
{
//	WallGen wall; Algorithm_Logics ALG;
//	bool A_M_A = 0;
//	A_M_A = ALG.Authentication_for_Master_Account();
	custom_generator(1,68,1,"=");
	if(module_name != "Default")
	{
	cout << module_name; cout << " | "; 
	}
	/*
	if(A_M_A != 0)
	{
	
		if(version_number != "Default")
		{
		cout << version_number; cout << " | ";
		}
	}
	*/
	//You can move this line to be visible only when desired user is logged in. For this you require a login screen or something like that.
	cout << VoN; cout << " | ";
	if(extras != "Default")
	{
		cout << extras;
	}
	//This largely depends Logged in User in Marky so it won't work here.
	// Any how you can add your favourite lines in here
	//greeter();
	cout << endl;
	custom_generator(1,68,1,"=");
}





//<------------------------- Generators End ---------------------------




//<--------------- WallGen -----------------------------------
void maddons_main::custom_generator(int NoW,int LoW,int NLaE,string ToW)
{
	//Algorithm_Logics ALG;
	int NoW_backup=0,LoW_backup=0,NLaE_backup=0;
	//int lines_length_counter=0,lines_number_counter=0,new_lines_at_end_counter=0;
	string ToW_backup="-";
	//int master_authentication = 0;
	//master_authentication = ALG.Authentication_for_Master_Account();
	while(NoW > 0)
	{
		//This counters are disblaed as these are shown only to developer account. Basically in Unified Marky & Project MArkX
		//As this program is forked from the main program because I wanted to port some useful parts of marky and put them seprate here
		//So Counters and Authentication for Master Account (Developer Account) is disabled here.
		//However, they are kept as comment to remind their usage once.
		//lines_number_counter++;
		while(LoW>0)
		{
												
			cout << ToW;
			//lines_length_counter++;
			LoW--;
		}
		//Developer Account Authentication 
		//(Remove this line when logic is added)
		/*
		if(master_authentication == 2)
		{
			
		cout << "Length of Line generated = "<<lines_length_counter<<endl;
		}
		*/
		while(NLaE >0)
		{
			cout << "" << endl;
			NLaE--;
			//new_lines_at_end_counter++;
		}
		
		NoW--;
		
		//Developer Account Authentication
		
		/*
		if(master_authentication == 2)
		{
		cout << "Number of New lines at end of Line = "<<new_lines_at_end_counter<<endl;
		}
		*/
	}
	/*
	if(master_authentication == 2)
	{
	cout << "Total Lines Generated = "<<lines_number_counter<<endl;
	}
	*/
	
}





void maddons_main::V_N_Generator(int LoW,int NoW,string ToW,string module_name)
{
	//Algorithm_Logics ALG;
	//Counter
	//int lines_length_counter =0, new_lines_at_end_counter=0, lines_number_counter = 0;
	//Backup
	int LoW_backup=LoW; 	
	
	//int master_authentication = 0;
	//master_authentication = ALG.Authentication_for_Master_Account();

	while(NoW>0)
	{
		if(NoW>0)
			{
				
				LoW = LoW_backup;
				
			}
		while(LoW>0)
		{			
			cout << ToW;			
			LoW--;
			//lines_length_counter++;
		}
		/*
			if(master_authentication == 2)
		{
			
		cout << "Length of Line generated = "<<lines_length_counter<<endl;
		}
		*/
		if(module_name != "Default")
		{
			cout << " " << module_name << " ";
			module_name = "Default";
			LoW = LoW_backup;
			continue;
		}
		
	NoW--;
	//lines_number_counter++;
	cout << "" << endl;
	//new_lines_at_end_counter++;
	/*
	if(master_authentication == 2)
	{
	cout << "Number of New lines at end of Line = "<<new_lines_at_end_counter<<endl;
	}
	*/
	}
	/*
	if(master_authentication == 2)
	{
	cout << "Total Lines Generated = "<<lines_number_counter<<endl;
	}
	*/
	
}

void maddons_main::name_or_version_display(string name_or_version)
{
	cout << " " << name_or_version << " ";
}


//<-------------------- Wall GEn end ------------------------------>
