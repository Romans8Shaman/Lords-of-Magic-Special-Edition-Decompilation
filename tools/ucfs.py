"""Give a Unicorn x86-32 instance an FS segment whose base is a fake TEB (for fs:[0] SEH accesses)."""
import struct
from unicorn import UC_PROT_READ, UC_PROT_WRITE
from unicorn.x86_const import UC_X86_REG_GDTR, UC_X86_REG_FS, UC_X86_REG_SS, UC_X86_REG_DS, UC_X86_REG_ES
GDT = 0x00030000
TEB = 0x7ffd0000
def desc(base, limit, access, flags):
    d = limit & 0xffff
    d |= (base & 0xffffff) << 16
    d |= access << 40
    d |= ((limit >> 16) & 0xf) << 48
    d |= flags << 52
    d |= ((base >> 24) & 0xff) << 56
    return struct.pack('<Q', d)
def setup(uc, teb_bytes=None):
    uc.mem_map(GDT, 0x1000, UC_PROT_READ | UC_PROT_WRITE)
    uc.mem_map(TEB, 0x1000, UC_PROT_READ | UC_PROT_WRITE)
    if teb_bytes: uc.mem_write(TEB, teb_bytes)
    uc.mem_write(GDT + 2 * 8, desc(0, 0xfffff, 0x92, 0xc))  # flat 4GB data, 32-bit (SS/DS/ES)
    uc.mem_write(GDT + 3 * 8, desc(TEB, 0xfff, 0x92, 0x4))  # present, ring0, data RW, 32-bit
    uc.reg_write(UC_X86_REG_GDTR, (0, GDT, 0x1000, 0x0))
    uc.reg_write(UC_X86_REG_FS, 3 << 3)
    for r in (UC_X86_REG_SS, UC_X86_REG_DS, UC_X86_REG_ES): uc.reg_write(r, 2 << 3)
