#include <stdio.h>
// function that takes a fahrenheit value and converts it to celsious
float convert(float fahr){
	//convertion formula and set the value to float
	float cel = (5.0 / 9.0) * (fahr - 32);
	return cel;
}

main()
{
	  float fahr;

	  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	  //call the funtion and cahnged the rounding value to 6 decimal places
		    printf("%3f %6.6f\n", fahr, convert(fahr));
}
