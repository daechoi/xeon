#include "gflags/gflags.h"
#include <iostream>
using namespace std;

DEFINE_string(init, "Hello World", "Message to print");

int main(int argc, char* argv[]) {
  gflags::SetUsageMessage("Some usage message");
  gflags::SetVersionString("0.0.1");
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  cout<<FLAGS_init<<endl;
  gflags::ShutDownCommandLineFlags();
  return 0;
}
