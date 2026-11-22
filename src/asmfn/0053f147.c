/* _abort @ 0x0053f147 (5 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053f147 1
__attribute__((naked)) void rb_0053f147(void)
{
  __asm__(
    "  call *_lom_af_0053f147_0\n"
  );
}
__asm__(".data\n"
  "_lom_af_0053f147_0: .long 0x00544b40\n"
  ".text\n");
