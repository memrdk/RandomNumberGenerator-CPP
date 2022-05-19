#ifndef MADDONS_MAIN_H
#define MADDONS_MAIN_H

#include <string>
using namespace std;

class maddons_main
{
	public:
		
	//Wall Generator	
	void custom_generator(int NoW,int LoW,int NLaE,string ToW);
	
	void V_N_Generator(int LoW,int NoW,string ToW,string module_name);
	//Name display Useless
	void name_or_version_display(string name_or_version);
	//Header walls generator
	//===========
	//Lines | Lines } Lies
	//===============
	void Header_Generator(string module_name,string VoN,string extras);

	protected:
};

#endif
