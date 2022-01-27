#include "utils/Logger.hpp"
#include "utils/Constants.hpp"
#include <iostream>

int main() {
  using namespace grok;
  using namespace std;
  glog.info("Starting {} ({})", Constants::APPLICATION_NAME, Constants::APPLICATION_VERSION);
  return 0;
}
