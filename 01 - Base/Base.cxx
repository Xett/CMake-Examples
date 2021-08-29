#include <iostream>
#include "Config.h"

int main(int argc, char* argv[])
{
  // report version
  std::cout << argv[0] << " Version " << Base_VERSION_MAJOR << "."
            << Base_VERSION_MINOR << std::endl;

  return 0;
}
