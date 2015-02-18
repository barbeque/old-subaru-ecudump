#ifndef _ssm2_h_
#define _ssm2_h_

enum TargetByte {
  SubaruEcu = 0x10,
  SubaruTcuOrDccd = 0x18,
  DiagnosticTool = 0xf0
};

enum MonitorCommand {
  EcuInit = 0xbf,
  WriteByte = 0xb8
};

enum MessageParts {
  MessageBegins = 0,
  Destination = 1,
  Source = 2,
  MessageSize = 3,
  Command = 4
};

#endif
