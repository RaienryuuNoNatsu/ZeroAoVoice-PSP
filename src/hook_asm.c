#include "hook_asm.h"

#define BREAK "\n"

__asm__(
	".global h_voice"									BREAK
	"h_voice:"											BREAK
	"    li   $a0, 'v' "								BREAK
	"    bne  $a0, $a1, voice_return"					BREAK
	"    add  $a0, $s0, $zero"							BREAK
	"    j    H_voice"									BREAK
	"voice_return:"										BREAK
	"    jr   $ra"										BREAK
);

__asm__(
	".global h_dududu"									BREAK
	"h_dududu:"											BREAK
	"    lui     $t0, %hi(h_dududu_volume)"				BREAK
	"    addiu   $t0, %lo(h_dududu_volume)"				BREAK
	"    lw      $t0, 0($t0)"							BREAK
	"    jr      $ra"									BREAK
);

__asm__(
	".global h_dlgse"									BREAK
	"h_dlgse:"											BREAK
	"    lui     $t4, %hi(h_dlgse_volume)"				BREAK
	"    addiu   $t4, %lo(h_dlgse_volume)"				BREAK
	"    lw      $t0,   0($t4)"							BREAK
	"    li      $t5,   0x64"							BREAK
	"    sw      $t5,   0($t4)"							BREAK
	"    jr      $ra"									BREAK
);

