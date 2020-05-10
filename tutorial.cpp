#include <iostream>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#include "MathFunctions.h"
#else
#include <cmath>
#endif // USE_MYMATH

int main(int argc, char *argv[]) {
	  if (argc < 2) {
		      // report version
		      std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
		          << Tutorial_VERSION_MINOR << std::endl;
		      std::cout << "Usage: " << argv[0] << " number" << std::endl;
		      return 1;
		      }

	
	std::cout << "Hello world. cmake tutorial\n";

	float outputValue = -1;

#ifdef USE_MYMATH
	outputValue = mysqrt(100);
#else
	float inputValue = 100;
	outputValue = std::sqrt(inputValue);
#endif	
        std::cout << outputValue <<"\n";
	return 0;

}
