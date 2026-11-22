#!/usr/bin/env python3
"""dis.py ADDR [NBYTES] : capstone disassembly of the ORIGINAL lomse.exe (read-only)."""
import sys, capstone, pefile
P='/workspace/lom_project/game/LoM/English/lomse.exe'
img=open(P,'rb').read(); pe=pefile.PE(data=img)
va=int(sys.argv[1],16); n=int(sys.argv[2]) if len(sys.argv)>2 else 64
off=pe.get_offset_from_rva(va-0x400000)
for i in capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32).disasm(img[off:off+n],va): print('%x %s %s'%(i.address,i.mnemonic,i.op_str))
