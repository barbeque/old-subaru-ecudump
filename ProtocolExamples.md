Assuming SSM2 Subarus (future version may have SSM1 for pre-99)

==Protocol examples==

===SSM2 Init ECU===
Writing: 80 10 f0 01 bf 40

80 - 0x80 - always there
10 - 0x10 - Destination: ECU
f0 - 0xf0 - Source: Diagnostic Tool (us!)
01 - 0x01 - data size (1 byte)
bf - 0xbf - "ECU Init" command
40 - 0x40 - checksum byte (8 lsbs of the sum of every byte in the packet, incl. header)

===Switching to 10,400 Baud (SSM2 Only)===
After connecting at 4800baud on the k-line (OBD2 pin #7):

80 10 f0 05 b8 00 01 98 5a 30

80 - 0x80 - Always there
10 - 0x10 - Destination: ECU
f0 - 0xf0 - Source: diagnostic tool
05 - 0x05 - 5 bytes following
b8 - 0xb8 - Write to single address
00 01 98 - 0x000198 - Write to address 0x000198
5a - 0x5a - Write the byte 0x5a (90: 5a is used 'all over' the subaru ECU for some reason)
30 - 0x30 - Checksum byte
