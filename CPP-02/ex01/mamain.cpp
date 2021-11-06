#include <iostream>

#include <math.h>

int		main()
{
	float		a = 13.37;	 //exp = 0(10000010)
	float 		b = -13.37;  //exp = 1(10000010)
	// float		c = 13.37;
	// int 		d = 13;

	// std::bitset<32>	xd(a);
	std::bitset<sizeof(float)*CHAR_BIT> xd(*reinterpret_cast<unsigned long*>(&a));	
	std::cout << xd << std::endl;

	// std::bitset<32>	xd2(b);
	std::bitset<sizeof(float)*CHAR_BIT> xd2(*reinterpret_cast<unsigned long*>(&b));	
	std::cout << xd2 << std::endl;

	int		fp;
	float	fp_float;
	// fp = roundf(a);
	fp = roundf(a * (1<<8));
	std::bitset<sizeof(float)*CHAR_BIT> xd3(*reinterpret_cast<unsigned long*>(&fp));	
	std::cout << std::endl;
	std::cout << fp << " : " << xd3 << std::endl;
	std::cout << (float)fp / (1 << 8) << std::endl;

	fp_float = a * (1<<8);
	std::bitset<sizeof(float)*CHAR_BIT> xd4(*reinterpret_cast<unsigned long*>(&fp_float));
	std::cout << std::endl;
	std::cout << fp << " : " << xd4 << std::endl;
	std::cout << (float)fp / (1 << 8) << std::endl;
	// std::cout << ( b = (roundf(b) * (1<<8)) )<< std::endl;
	// std::cout <<  a << 8 << std::endl;
	// std::cout <<  c << std::endl;
	// std::cout << d << 8 << std::endl;
	return (0);
}
