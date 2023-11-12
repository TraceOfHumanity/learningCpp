//bool						1	true або false
//unsigned short int		2	від 0 до 65 535
//short int					2	від -32 768 до 32 767
//unsigned long int			4	від 0 до 4 294 967 295
//long int					4	від -2 147 483 648 до 2 147 483 647
//int(16 розрядів)			2	від -32 768 до 32 767
//int(32 розряди)			4	від -2 147 483 648 до 2 147 483 647
//unsigned int(16 розрядів)	2	від 0 до 65 535
//unsigned int(32 розряди)	4	від 0 до 4 294 967 295
//char						1	від 0 до 256
//float						4	від 1.2е-38 до 3.4е38
//double					8	від 2.2е-308 до 1.8е308
//long double				10	від 3.4е-4932 до 3.4е+4932

#include <iostream>

int main()
{
	short num = 32767;
	short num2 = -32768;
	bool num3 = true;
	unsigned short num4 = 65535;
	long num5 = 2147483647;
	int num6 = -2147483648;
	unsigned long num7 = 4294967295;
	char num8 = 'q';
	float num9 = 3.4e38;
	const double PI = 3.14159265358979323846;
	//double num10 = 1.8e308;
	//long double num11 = 3.4e+4932;

	std::cout << num << std::endl
		<< num2 << std::endl
		<< num3 << std::endl
		<< num4 << std::endl
		<< num5 << std::endl
		<< num6 << std::endl
		<< num7 << std::endl
		<< num8 << std::endl
		<< num9 << std::endl
		<< PI << std::endl;

	return 0;
}
