#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "ssm2.h"

int main(int argc, char* argv[]) {
  unsigned char f[6];
  f[MessageBegins] = 0x80;
  f[Destination] = SubaruEcu;
  f[Source] = DiagnosticTool;
  f[MessageSize] = 1;
  f[Command] = EcuInit;
  f[5] = 0x40; // TODO: Checksum.
  // TODO: Endianness?

  // TODO: whoa is my C ever rusty
  for(int i = 0; i < sizeof(f); ++i) {
    printf("%02X ", f[i]);
  }
  printf("\n");
}
