#include <iostream>

#include <math.h>

int		main()
{
	float		a = 13.37;	 //exp = 0(10000010)

	std::bitset<sizeof(float)*CHAR_BIT> xd(*reinterpret_cast<unsigned long*>(&a));	
	std::cout << a << " : " << xd << std::endl;

	int		firstFp;
	float	rw_float;
	rw_float = a * (1 << 8);
	firstFp = (int)rw_float;
	std::bitset<sizeof(float)*CHAR_BIT> xd2(*reinterpret_cast<unsigned long*>(&rw_float));
	std::cout << std::endl;
	std::cout << rw_float << " : " << xd2 << std::endl;
	std::bitset<sizeof(float)*CHAR_BIT> xd3(*reinterpret_cast<unsigned long*>(&firstFp));
	std::cout << "fixedPoint: " << firstFp << " : " << xd3 << std::endl;
	std::cout << "fixedPoint to float: " << (float)rw_float / (1 << 8) << std::endl;

	int		secondFp;
	float	rw_float_rounded;
	rw_float_rounded = round(a * (1 << 8));
	secondFp = (int)rw_float_rounded;
	std::bitset<sizeof(float)*CHAR_BIT> xd4(*reinterpret_cast<unsigned long*>(&rw_float_rounded));	
	std::cout << std::endl;
	std::cout << rw_float_rounded << " : " << xd4 << std::endl;
	std::bitset<sizeof(float)*CHAR_BIT> xd5(*reinterpret_cast<unsigned long*>(&secondFp));	
	std::cout << "fixedPoint: " << secondFp << " : " << xd5 << std::endl;
	std::cout << "fixedPoint to float: " << (float)rw_float_rounded / (1 << 8) << std::endl;

	return (0);
}


//(13.37) = 1.10101011110101110000101 * 2^3 = 1101.01011110101110000101

//(13.37 * (1 << 8)) = 1.10101011110101110000101 * 2^11 = 110101011110.101110000101

//round(13.37 * (1 << 8)) = 1.10101011111000000000000 * 2^11 = 110101011111.000000000000

//int fixedPoint = 110101011111 == 3423

//fixedPoint to float = 1101.01011111 = 13.3711

