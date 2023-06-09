	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3                               ; -- Begin function main
lCPI0_0:
	.quad	0x4040000000000000              ; double 32
lCPI0_1:
	.quad	0x3ffccccccccccccd              ; double 1.8
lCPI0_2:
	.quad	0x4071126666666666              ; double 273.14999999999998
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #80                     ; =80
	stp	x29, x30, [sp, #64]             ; 16-byte Folded Spill
	add	x29, sp, #64                    ; =64
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x8, __ZNSt3__14coutE@GOTPAGE
	ldr	x8, [x8, __ZNSt3__14coutE@GOTPAGEOFF]
	adrp	x9, __ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_@GOTPAGE
	ldr	x9, [x9, __ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_@GOTPAGEOFF]
	adrp	x10, __ZNSt3__13cinE@GOTPAGE
	ldr	x10, [x10, __ZNSt3__13cinE@GOTPAGEOFF]
	stur	wzr, [x29, #-4]
	mov	x0, x8
	adrp	x1, l_.str@PAGE
	add	x1, x1, l_.str@PAGEOFF
	stur	x8, [x29, #-24]                 ; 8-byte Folded Spill
	str	x9, [sp, #32]                   ; 8-byte Folded Spill
	str	x10, [sp, #24]                  ; 8-byte Folded Spill
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	adrp	x1, l_.str.1@PAGE
	add	x1, x1, l_.str.1@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	ldur	x8, [x29, #-24]                 ; 8-byte Folded Reload
	mov	x0, x8
	adrp	x1, l_.str.2@PAGE
	add	x1, x1, l_.str.2@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	adrp	x1, l_.str.3@PAGE
	add	x1, x1, l_.str.3@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	ldur	x8, [x29, #-24]                 ; 8-byte Folded Reload
	mov	x0, x8
	adrp	x1, l_.str.4@PAGE
	add	x1, x1, l_.str.4@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	adrp	x1, l_.str.5@PAGE
	add	x1, x1, l_.str.5@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	adrp	x1, l_.str.6@PAGE
	add	x1, x1, l_.str.6@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	mov	x0, x8
	sub	x1, x29, #8                     ; =8
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	s0, [x29, #-12]
	fmov	s1, #5.00000000
	fcmp	s0, s1
	cset	w8, gt
	mov	w9, #1
	str	w9, [sp, #20]                   ; 4-byte Folded Spill
	tbnz	w8, #0, LBB0_3
; %bb.2:                                ;   in Loop: Header=BB0_1 Depth=1
	ldur	s0, [x29, #-12]
	fcmp	s0, #0.0
	cset	w8, mi
	str	w8, [sp, #20]                   ; 4-byte Folded Spill
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #20]                   ; 4-byte Folded Reload
	tbnz	w8, #0, LBB0_4
	b	LBB0_5
LBB0_4:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	x0, [x29, #-24]                 ; 8-byte Folded Reload
	adrp	x1, l_.str.7@PAGE
	add	x1, x1, l_.str.7@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	adrp	x1, l_.str.6@PAGE
	add	x1, x1, l_.str.6@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	mov	x0, x8
	sub	x1, x29, #8                     ; =8
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	b	LBB0_1
LBB0_5:
	ldur	w8, [x29, #-8]
	mov	x9, x8
	cmp	x9, #5                          ; =5
	str	x9, [sp, #8]                    ; 8-byte Folded Spill
	b.hi	LBB0_13
; %bb.6:
	adrp	x8, lJTI0_0@PAGE
	add	x8, x8, lJTI0_0@PAGEOFF
	ldr	x11, [sp, #8]                   ; 8-byte Folded Reload
Ltmp0:
	adr	x9, Ltmp0
	ldrsw	x10, [x8, x11, lsl #2]
	add	x9, x9, x10
	br	x9
LBB0_7:
	ldur	x0, [x29, #-24]                 ; 8-byte Folded Reload
	adrp	x1, l_.str.8@PAGE
	add	x1, x1, l_.str.8@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	mov	x0, x8
	sub	x1, x29, #12                    ; =12
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf
	ldur	s0, [x29, #-12]
	fcvt	d1, s0
	adrp	x8, lCPI0_1@PAGE
	ldr	d2, [x8, lCPI0_1@PAGEOFF]
	fmul	d1, d1, d2
	adrp	x8, lCPI0_0@PAGE
	ldr	d2, [x8, lCPI0_0@PAGEOFF]
	fadd	d1, d1, d2
	fcvt	s0, d1
	stur	s0, [x29, #-16]
	ldur	s0, [x29, #-12]
	ldur	x8, [x29, #-24]                 ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.9@PAGE
	add	x1, x1, l_.str.9@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldur	s0, [x29, #-16]
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.10@PAGE
	add	x1, x1, l_.str.10@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	b	LBB0_13
LBB0_8:
	ldur	x0, [x29, #-24]                 ; 8-byte Folded Reload
	adrp	x1, l_.str.8@PAGE
	add	x1, x1, l_.str.8@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	mov	x0, x8
	sub	x1, x29, #12                    ; =12
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf
	ldur	s0, [x29, #-12]
	fcvt	d1, s0
	adrp	x8, lCPI0_2@PAGE
	ldr	d2, [x8, lCPI0_2@PAGEOFF]
	fadd	d1, d1, d2
	fcvt	s0, d1
	stur	s0, [x29, #-16]
	ldur	s0, [x29, #-12]
	ldur	x8, [x29, #-24]                 ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.9@PAGE
	add	x1, x1, l_.str.9@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldur	s0, [x29, #-16]
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.11@PAGE
	add	x1, x1, l_.str.11@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	b	LBB0_13
LBB0_9:
	ldur	x0, [x29, #-24]                 ; 8-byte Folded Reload
	adrp	x1, l_.str.12@PAGE
	add	x1, x1, l_.str.12@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	mov	x0, x8
	sub	x1, x29, #12                    ; =12
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf
	ldur	s0, [x29, #-12]
	mov	w9, #1107296256
	fmov	s1, w9
	fsub	s0, s0, s1
	fmov	s1, #5.00000000
	fmul	s0, s0, s1
	fmov	s1, #9.00000000
	fdiv	s0, s0, s1
	stur	s0, [x29, #-16]
	ldur	s0, [x29, #-12]
	ldur	x8, [x29, #-24]                 ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.13@PAGE
	add	x1, x1, l_.str.13@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldur	s0, [x29, #-16]
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.14@PAGE
	add	x1, x1, l_.str.14@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	b	LBB0_13
LBB0_10:
	ldur	x0, [x29, #-24]                 ; 8-byte Folded Reload
	adrp	x1, l_.str.12@PAGE
	add	x1, x1, l_.str.12@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	mov	x0, x8
	sub	x1, x29, #12                    ; =12
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf
	ldur	s0, [x29, #-12]
	mov	w9, #1107296256
	fmov	s1, w9
	fsub	s0, s0, s1
	fmov	s1, #5.00000000
	fmul	s0, s0, s1
	fmov	s1, #9.00000000
	fdiv	s0, s0, s1
	fcvt	d2, s0
	adrp	x8, lCPI0_2@PAGE
	ldr	d3, [x8, lCPI0_2@PAGEOFF]
	fadd	d2, d2, d3
	fcvt	s0, d2
	stur	s0, [x29, #-16]
	ldur	s0, [x29, #-12]
	ldur	x8, [x29, #-24]                 ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.13@PAGE
	add	x1, x1, l_.str.13@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldur	s0, [x29, #-16]
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.11@PAGE
	add	x1, x1, l_.str.11@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	b	LBB0_13
LBB0_11:
	ldur	x0, [x29, #-24]                 ; 8-byte Folded Reload
	adrp	x1, l_.str.15@PAGE
	add	x1, x1, l_.str.15@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	mov	x0, x8
	sub	x1, x29, #12                    ; =12
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf
	ldur	s0, [x29, #-12]
	fcvt	d1, s0
	adrp	x8, lCPI0_2@PAGE
	ldr	d2, [x8, lCPI0_2@PAGEOFF]
	fsub	d1, d1, d2
	fcvt	s0, d1
	stur	s0, [x29, #-16]
	ldur	s0, [x29, #-12]
	ldur	x8, [x29, #-24]                 ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.16@PAGE
	add	x1, x1, l_.str.16@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldur	s0, [x29, #-16]
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.14@PAGE
	add	x1, x1, l_.str.14@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	b	LBB0_13
LBB0_12:
	ldur	x0, [x29, #-24]                 ; 8-byte Folded Reload
	adrp	x1, l_.str.15@PAGE
	add	x1, x1, l_.str.15@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	mov	x0, x8
	sub	x1, x29, #12                    ; =12
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf
	ldur	s0, [x29, #-12]
	fcvt	d1, s0
	adrp	x8, lCPI0_2@PAGE
	ldr	d2, [x8, lCPI0_2@PAGEOFF]
	fsub	d1, d1, d2
	adrp	x8, lCPI0_1@PAGE
	ldr	d2, [x8, lCPI0_1@PAGEOFF]
	fmul	d1, d1, d2
	adrp	x8, lCPI0_0@PAGE
	ldr	d2, [x8, lCPI0_0@PAGEOFF]
	fadd	d1, d1, d2
	fcvt	s0, d1
	stur	s0, [x29, #-16]
	ldur	s0, [x29, #-12]
	ldur	x8, [x29, #-24]                 ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.16@PAGE
	add	x1, x1, l_.str.16@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldur	s0, [x29, #-16]
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
	adrp	x1, l_.str.10@PAGE
	add	x1, x1, l_.str.10@PAGEOFF
	bl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
LBB0_13:
	mov	w8, #0
	mov	x0, x8
	ldp	x29, x30, [sp, #64]             ; 16-byte Folded Reload
	add	sp, sp, #80                     ; =80
	ret
	.cfi_endproc
	.p2align	2
lJTI0_0:
	.long	LBB0_7-Ltmp0
	.long	LBB0_8-Ltmp0
	.long	LBB0_9-Ltmp0
	.long	LBB0_10-Ltmp0
	.long	LBB0_11-Ltmp0
	.long	LBB0_12-Ltmp0
                                        ; -- End function
	.globl	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc ; -- Begin function _ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.weak_definition	__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.p2align	2
__ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc: ; @_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	x1, [x29, #-16]
	ldur	x0, [x29, #-8]
	ldur	x1, [x29, #-16]
	ldur	x8, [x29, #-16]
	str	x0, [sp, #24]                   ; 8-byte Folded Spill
	mov	x0, x8
	str	x1, [sp, #16]                   ; 8-byte Folded Spill
	bl	__ZNSt3__111char_traitsIcE6lengthEPKc
	ldr	x8, [sp, #24]                   ; 8-byte Folded Reload
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	mov	x0, x8
	ldr	x1, [sp, #16]                   ; 8-byte Folded Reload
	ldr	x2, [sp, #8]                    ; 8-byte Folded Reload
	bl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E: ; @_ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	str	x1, [sp]
	ldr	x0, [sp, #8]
	ldr	x8, [sp]
	blr	x8
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_ ; -- Begin function _ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.weak_definition	__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.p2align	2
__ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_: ; @_ZNSt3__14endlIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	ldur	x0, [x29, #-8]
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x8, x8, x9
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
	mov	x0, x8
	mov	w10, #10
	sxtb	w1, w10
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
	ldr	x8, [sp, #16]                   ; 8-byte Folded Reload
	str	w0, [sp, #12]                   ; 4-byte Folded Spill
	mov	x0, x8
	ldr	w1, [sp, #12]                   ; 4-byte Folded Reload
	sxtb	w1, w1
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	ldur	x8, [x29, #-8]
	mov	x0, x8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	ldur	x8, [x29, #-8]
	mov	x0, x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m ; -- Begin function _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_definition	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	2
__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ; @_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
; %bb.0:
	sub	sp, sp, #160                    ; =160
	stp	x29, x30, [sp, #144]            ; 16-byte Folded Spill
	add	x29, sp, #144                   ; =144
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	x1, [x29, #-16]
	stur	x2, [x29, #-24]
	ldur	x1, [x29, #-8]
Ltmp1:
	sub	x0, x29, #40                    ; =40
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp2:
	b	LBB4_1
LBB4_1:
Ltmp3:
	sub	x0, x29, #40                    ; =40
	bl	__ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbEv
Ltmp4:
	str	w0, [sp, #68]                   ; 4-byte Folded Spill
	b	LBB4_2
LBB4_2:
	ldr	w8, [sp, #68]                   ; 4-byte Folded Reload
	tbnz	w8, #0, LBB4_3
	b	LBB4_15
LBB4_3:
	ldur	x1, [x29, #-8]
	add	x0, sp, #72                     ; =72
	bl	__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1ERNS_13basic_ostreamIcS2_EE
	ldur	x1, [x29, #-16]
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x8, x8, x9
Ltmp5:
	mov	x0, x8
	str	x1, [sp, #56]                   ; 8-byte Folded Spill
	bl	__ZNKSt3__18ios_base5flagsEv
Ltmp6:
	str	w0, [sp, #52]                   ; 4-byte Folded Spill
	b	LBB4_4
LBB4_4:
	mov	w8, #176
	ldr	w9, [sp, #52]                   ; 4-byte Folded Reload
	and	w8, w9, w8
	cmp	w8, #32                         ; =32
	b.ne	LBB4_6
; %bb.5:
	ldur	x8, [x29, #-16]
	ldur	x9, [x29, #-24]
	add	x8, x8, x9
	str	x8, [sp, #40]                   ; 8-byte Folded Spill
	b	LBB4_7
LBB4_6:
	ldur	x8, [x29, #-16]
	str	x8, [sp, #40]                   ; 8-byte Folded Spill
LBB4_7:
	ldr	x8, [sp, #40]                   ; 8-byte Folded Reload
	ldur	x9, [x29, #-16]
	ldur	x10, [x29, #-24]
	add	x3, x9, x10
	ldur	x9, [x29, #-8]
	ldr	x10, [x9]
	ldur	x10, [x10, #-24]
	add	x4, x9, x10
	ldur	x9, [x29, #-8]
	ldr	x10, [x9]
	ldur	x10, [x10, #-24]
	add	x0, x9, x10
Ltmp7:
	str	x8, [sp, #32]                   ; 8-byte Folded Spill
	str	x3, [sp, #24]                   ; 8-byte Folded Spill
	str	x4, [sp, #16]                   ; 8-byte Folded Spill
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv
Ltmp8:
	str	w0, [sp, #12]                   ; 4-byte Folded Spill
	b	LBB4_8
LBB4_8:
	ldr	x0, [sp, #72]
Ltmp9:
	ldr	x1, [sp, #56]                   ; 8-byte Folded Reload
	ldr	x2, [sp, #32]                   ; 8-byte Folded Reload
	ldr	x3, [sp, #24]                   ; 8-byte Folded Reload
	ldr	x4, [sp, #16]                   ; 8-byte Folded Reload
	ldr	w5, [sp, #12]                   ; 4-byte Folded Reload
	sxtb	w5, w5
	bl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp10:
	str	x0, [sp]                        ; 8-byte Folded Spill
	b	LBB4_9
LBB4_9:
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	sub	x8, x29, #64                    ; =64
	stur	x0, [x29, #-64]
	mov	x0, x8
	bl	__ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedEv
	tbnz	w0, #0, LBB4_10
	b	LBB4_14
LBB4_10:
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
Ltmp11:
	mov	w1, #5
	bl	__ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj
Ltmp12:
	b	LBB4_11
LBB4_11:
	b	LBB4_14
LBB4_12:
Ltmp18:
                                        ; kill: def $w1 killed $w1 killed $x1
	stur	x0, [x29, #-48]
	stur	w1, [x29, #-52]
	b	LBB4_18
LBB4_13:
Ltmp13:
                                        ; kill: def $w1 killed $w1 killed $x1
	stur	x0, [x29, #-48]
	stur	w1, [x29, #-52]
Ltmp14:
	sub	x0, x29, #40                    ; =40
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp15:
	b	LBB4_17
LBB4_14:
LBB4_15:
Ltmp16:
	sub	x0, x29, #40                    ; =40
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp17:
	b	LBB4_16
LBB4_16:
	b	LBB4_20
LBB4_17:
LBB4_18:
	ldur	x0, [x29, #-48]
	bl	___cxa_begin_catch
	ldur	x8, [x29, #-8]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x8, x8, x9
Ltmp19:
	mov	x0, x8
	bl	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp20:
	b	LBB4_19
LBB4_19:
	bl	___cxa_end_catch
LBB4_20:
	ldur	x0, [x29, #-8]
	ldp	x29, x30, [sp, #144]            ; 16-byte Folded Reload
	add	sp, sp, #160                    ; =160
	ret
LBB4_21:
Ltmp21:
                                        ; kill: def $w1 killed $w1 killed $x1
	stur	x0, [x29, #-48]
	stur	w1, [x29, #-52]
Ltmp22:
	bl	___cxa_end_catch
Ltmp23:
	b	LBB4_22
LBB4_22:
; %bb.23:
	ldur	x0, [x29, #-48]
	bl	__Unwind_Resume
LBB4_24:
Ltmp24:
	bl	___clang_call_terminate
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table4:
Lexception0:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase0-Lttbaseref0
Lttbaseref0:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end0-Lcst_begin0
Lcst_begin0:
	.uleb128 Ltmp1-Lfunc_begin0             ; >> Call Site 1 <<
	.uleb128 Ltmp2-Ltmp1                    ;   Call between Ltmp1 and Ltmp2
	.uleb128 Ltmp18-Lfunc_begin0            ;     jumps to Ltmp18
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp3-Lfunc_begin0             ; >> Call Site 2 <<
	.uleb128 Ltmp12-Ltmp3                   ;   Call between Ltmp3 and Ltmp12
	.uleb128 Ltmp13-Lfunc_begin0            ;     jumps to Ltmp13
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp14-Lfunc_begin0            ; >> Call Site 3 <<
	.uleb128 Ltmp15-Ltmp14                  ;   Call between Ltmp14 and Ltmp15
	.uleb128 Ltmp24-Lfunc_begin0            ;     jumps to Ltmp24
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp16-Lfunc_begin0            ; >> Call Site 4 <<
	.uleb128 Ltmp17-Ltmp16                  ;   Call between Ltmp16 and Ltmp17
	.uleb128 Ltmp18-Lfunc_begin0            ;     jumps to Ltmp18
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp17-Lfunc_begin0            ; >> Call Site 5 <<
	.uleb128 Ltmp19-Ltmp17                  ;   Call between Ltmp17 and Ltmp19
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp19-Lfunc_begin0            ; >> Call Site 6 <<
	.uleb128 Ltmp20-Ltmp19                  ;   Call between Ltmp19 and Ltmp20
	.uleb128 Ltmp21-Lfunc_begin0            ;     jumps to Ltmp21
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp20-Lfunc_begin0            ; >> Call Site 7 <<
	.uleb128 Ltmp22-Ltmp20                  ;   Call between Ltmp20 and Ltmp22
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp22-Lfunc_begin0            ; >> Call Site 8 <<
	.uleb128 Ltmp23-Ltmp22                  ;   Call between Ltmp22 and Ltmp23
	.uleb128 Ltmp24-Lfunc_begin0            ;     jumps to Ltmp24
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp23-Lfunc_begin0            ; >> Call Site 9 <<
	.uleb128 Lfunc_end0-Ltmp23              ;   Call between Ltmp23 and Lfunc_end0
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end0:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.p2align	2
                                        ; >> Catch TypeInfos <<
	.long	0                               ; TypeInfo 1
Lttbase0:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__111char_traitsIcE6lengthEPKc ; -- Begin function _ZNSt3__111char_traitsIcE6lengthEPKc
	.weak_definition	__ZNSt3__111char_traitsIcE6lengthEPKc
	.p2align	2
__ZNSt3__111char_traitsIcE6lengthEPKc:  ; @_ZNSt3__111char_traitsIcE6lengthEPKc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	_strlen
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbEv
__ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbEv: ; @_ZNKSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentrycvbEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldrb	w9, [x8]
	and	w0, w9, #0x1
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.private_extern	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_ ; -- Begin function _ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_definition	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.p2align	2
__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ; @_ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
; %bb.0:
	sub	sp, sp, #240                    ; =240
	stp	x29, x30, [sp, #224]            ; 16-byte Folded Spill
	add	x29, sp, #224                   ; =224
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-16]
	stur	x1, [x29, #-24]
	stur	x2, [x29, #-32]
	stur	x3, [x29, #-40]
	stur	x4, [x29, #-48]
	sturb	w5, [x29, #-49]
	ldur	x8, [x29, #-16]
	str	x8, [sp, #56]                   ; 8-byte Folded Spill
	bl	__ZNSt3__1L15__get_nullptr_tEv
	sub	x8, x29, #64                    ; =64
	stur	x0, [x29, #-64]
	mov	x0, x8
	bl	__ZNKSt3__19nullptr_tcvPT_INS_15basic_streambufIcNS_11char_traitsIcEEEEEEv
	ldr	x8, [sp, #56]                   ; 8-byte Folded Reload
	subs	x9, x8, x0
	b.ne	LBB7_2
; %bb.1:
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
	b	LBB7_26
LBB7_2:
	ldur	x8, [x29, #-40]
	ldur	x9, [x29, #-24]
	subs	x8, x8, x9
	stur	x8, [x29, #-72]
	ldur	x0, [x29, #-48]
	bl	__ZNKSt3__18ios_base5widthEv
	stur	x0, [x29, #-80]
	ldur	x8, [x29, #-80]
	ldur	x9, [x29, #-72]
	subs	x8, x8, x9
	b.le	LBB7_4
; %bb.3:
	ldur	x8, [x29, #-72]
	ldur	x9, [x29, #-80]
	subs	x8, x9, x8
	stur	x8, [x29, #-80]
	b	LBB7_5
LBB7_4:
	stur	xzr, [x29, #-80]
LBB7_5:
	ldur	x8, [x29, #-32]
	ldur	x9, [x29, #-24]
	subs	x8, x8, x9
	stur	x8, [x29, #-88]
	ldur	x8, [x29, #-88]
	cmp	x8, #0                          ; =0
	cset	w10, le
	tbnz	w10, #0, LBB7_9
; %bb.6:
	ldur	x0, [x29, #-16]
	ldur	x1, [x29, #-24]
	ldur	x2, [x29, #-88]
	bl	__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
	ldur	x8, [x29, #-88]
	subs	x8, x0, x8
	b.eq	LBB7_8
; %bb.7:
	bl	__ZNSt3__1L15__get_nullptr_tEv
	sub	x8, x29, #96                    ; =96
	stur	x0, [x29, #-96]
	mov	x0, x8
	bl	__ZNKSt3__19nullptr_tcvPT_INS_15basic_streambufIcNS_11char_traitsIcEEEEEEv
	stur	x0, [x29, #-16]
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
	b	LBB7_26
LBB7_8:
LBB7_9:
	ldur	x8, [x29, #-80]
	cmp	x8, #0                          ; =0
	cset	w9, le
	tbnz	w9, #0, LBB7_21
; %bb.10:
	ldur	x1, [x29, #-80]
	ldursb	w2, [x29, #-49]
	add	x8, sp, #104                    ; =104
	mov	x0, x8
	str	x8, [sp, #48]                   ; 8-byte Folded Spill
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Emc
	ldur	x8, [x29, #-16]
	ldr	x9, [sp, #48]                   ; 8-byte Folded Reload
	mov	x0, x9
	str	x8, [sp, #40]                   ; 8-byte Folded Spill
	bl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv
	ldur	x2, [x29, #-80]
Ltmp26:
	ldr	x8, [sp, #40]                   ; 8-byte Folded Reload
	str	x0, [sp, #32]                   ; 8-byte Folded Spill
	mov	x0, x8
	ldr	x1, [sp, #32]                   ; 8-byte Folded Reload
	bl	__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
Ltmp27:
	str	x0, [sp, #24]                   ; 8-byte Folded Spill
	b	LBB7_11
LBB7_11:
	ldur	x8, [x29, #-80]
	ldr	x9, [sp, #24]                   ; 8-byte Folded Reload
	subs	x8, x9, x8
	b.eq	LBB7_16
; %bb.12:
Ltmp28:
	bl	__ZNSt3__1L15__get_nullptr_tEv
Ltmp29:
	str	x0, [sp, #16]                   ; 8-byte Folded Spill
	b	LBB7_13
LBB7_13:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	add	x8, sp, #80                     ; =80
	str	x0, [sp, #80]
Ltmp30:
	mov	x0, x8
	bl	__ZNKSt3__19nullptr_tcvPT_INS_15basic_streambufIcNS_11char_traitsIcEEEEEEv
Ltmp31:
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	b	LBB7_14
LBB7_14:
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	stur	x8, [x29, #-16]
	ldur	x9, [x29, #-16]
	stur	x9, [x29, #-8]
	mov	w10, #1
	str	w10, [sp, #76]
	b	LBB7_17
LBB7_15:
Ltmp32:
                                        ; kill: def $w1 killed $w1 killed $x1
	str	x0, [sp, #96]
	str	w1, [sp, #92]
Ltmp33:
	add	x0, sp, #104                    ; =104
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
Ltmp34:
	b	LBB7_20
LBB7_16:
	str	wzr, [sp, #76]
LBB7_17:
	add	x0, sp, #104                    ; =104
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev
	ldr	w8, [sp, #76]
	cbz	w8, LBB7_19
	b	LBB7_18
LBB7_18:
	b	LBB7_26
LBB7_19:
	b	LBB7_21
LBB7_20:
	b	LBB7_27
LBB7_21:
	ldur	x8, [x29, #-40]
	ldur	x9, [x29, #-32]
	subs	x8, x8, x9
	stur	x8, [x29, #-88]
	ldur	x8, [x29, #-88]
	cmp	x8, #0                          ; =0
	cset	w10, le
	tbnz	w10, #0, LBB7_25
; %bb.22:
	ldur	x0, [x29, #-16]
	ldur	x1, [x29, #-32]
	ldur	x2, [x29, #-88]
	bl	__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
	ldur	x8, [x29, #-88]
	subs	x8, x0, x8
	b.eq	LBB7_24
; %bb.23:
	bl	__ZNSt3__1L15__get_nullptr_tEv
	add	x8, sp, #64                     ; =64
	str	x0, [sp, #64]
	mov	x0, x8
	bl	__ZNKSt3__19nullptr_tcvPT_INS_15basic_streambufIcNS_11char_traitsIcEEEEEEv
	stur	x0, [x29, #-16]
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
	b	LBB7_26
LBB7_24:
LBB7_25:
	ldur	x0, [x29, #-48]
	mov	x8, #0
	mov	x1, x8
	bl	__ZNSt3__18ios_base5widthEl
	ldur	x8, [x29, #-16]
	stur	x8, [x29, #-8]
LBB7_26:
	ldur	x0, [x29, #-8]
	ldp	x29, x30, [sp, #224]            ; 16-byte Folded Reload
	add	sp, sp, #240                    ; =240
	ret
LBB7_27:
	ldr	x0, [sp, #96]
	bl	__Unwind_Resume
LBB7_28:
Ltmp35:
	bl	___clang_call_terminate
; %bb.29:
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table7:
Lexception1:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase1-Lttbaseref1
Lttbaseref1:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end1-Lcst_begin1
Lcst_begin1:
	.uleb128 Lfunc_begin1-Lfunc_begin1      ; >> Call Site 1 <<
	.uleb128 Ltmp26-Lfunc_begin1            ;   Call between Lfunc_begin1 and Ltmp26
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp26-Lfunc_begin1            ; >> Call Site 2 <<
	.uleb128 Ltmp31-Ltmp26                  ;   Call between Ltmp26 and Ltmp31
	.uleb128 Ltmp32-Lfunc_begin1            ;     jumps to Ltmp32
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp33-Lfunc_begin1            ; >> Call Site 3 <<
	.uleb128 Ltmp34-Ltmp33                  ;   Call between Ltmp33 and Ltmp34
	.uleb128 Ltmp35-Lfunc_begin1            ;     jumps to Ltmp35
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp34-Lfunc_begin1            ; >> Call Site 4 <<
	.uleb128 Lfunc_end1-Ltmp34              ;   Call between Ltmp34 and Lfunc_end1
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end1:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.p2align	2
                                        ; >> Catch TypeInfos <<
	.long	0                               ; TypeInfo 1
Lttbase1:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1ERNS_13basic_ostreamIcS2_EE
__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1ERNS_13basic_ostreamIcS2_EE: ; @_ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC1ERNS_13basic_ostreamIcS2_EE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	ldur	x8, [x29, #-8]
	ldr	x1, [sp, #16]
	mov	x0, x8
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	bl	__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2ERNS_13basic_ostreamIcS2_EE
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__18ios_base5flagsEv
__ZNKSt3__18ios_base5flagsEv:           ; @_ZNKSt3__18ios_base5flagsEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	w0, [x8, #8]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE4fillEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	str	x8, [sp]                        ; 8-byte Folded Spill
	bl	__ZNSt3__111char_traitsIcE3eofEv
	ldr	x8, [sp]                        ; 8-byte Folded Reload
	ldr	w1, [x8, #144]
	bl	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	tbnz	w0, #0, LBB10_1
	b	LBB10_2
LBB10_1:
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	mov	w8, #32
	sxtb	w1, w8
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
	sxtb	w8, w0
	ldr	x9, [sp]                        ; 8-byte Folded Reload
	str	w8, [x9, #144]
LBB10_2:
	ldr	x8, [sp]                        ; 8-byte Folded Reload
	ldr	w9, [x8, #144]
	sxtb	w0, w9
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedEv
__ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedEv: ; @_ZNKSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEE6failedEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	x8, [x8]
	cmp	x8, #0                          ; =0
	cset	w9, eq
	and	w0, w9, #0x1
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj
__ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj: ; @_ZNSt3__19basic_iosIcNS_11char_traitsIcEEE8setstateEj
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	str	w1, [sp, #4]
	ldr	x0, [sp, #8]
	ldr	w1, [sp, #4]
	bl	__ZNSt3__18ios_base8setstateEj
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.private_extern	___clang_call_terminate ; -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_definition	___clang_call_terminate
	.p2align	2
___clang_call_terminate:                ; @__clang_call_terminate
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	bl	___cxa_begin_catch
	bl	__ZSt9terminatev
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__1L15__get_nullptr_tEv
__ZNSt3__1L15__get_nullptr_tEv:         ; @_ZNSt3__1L15__get_nullptr_tEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	add	x0, sp, #8                      ; =8
	mov	x1, #-1
	bl	__ZNSt3__19nullptr_tC1EMNS0_5__natEi
	ldr	x8, [sp, #8]
	mov	x0, x8
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__19nullptr_tcvPT_INS_15basic_streambufIcNS_11char_traitsIcEEEEEEv
__ZNKSt3__19nullptr_tcvPT_INS_15basic_streambufIcNS_11char_traitsIcEEEEEEv: ; @_ZNKSt3__19nullptr_tcvPT_INS_15basic_streambufIcNS_11char_traitsIcEEEEEEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	mov	x8, #0
	mov	x0, x8
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__18ios_base5widthEv
__ZNKSt3__18ios_base5widthEv:           ; @_ZNKSt3__18ios_base5widthEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	x0, [x8, #24]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl: ; @_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	str	x2, [sp, #8]
	ldur	x8, [x29, #-8]
	ldr	x1, [sp, #16]
	ldr	x2, [sp, #8]
	ldr	x9, [x8]
	ldr	x9, [x9, #96]
	mov	x0, x8
	blr	x9
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Emc
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Emc: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1Emc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	strb	w2, [sp, #15]
	ldur	x8, [x29, #-8]
	ldr	x1, [sp, #16]
	ldrsb	w2, [sp, #15]
	mov	x0, x8
	str	x8, [sp]                        ; 8-byte Folded Spill
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Emc
	ldr	x8, [sp]                        ; 8-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv: ; @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4dataEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
	bl	__ZNSt3__1L12__to_addressIKcEEPT_S3_
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__18ios_base5widthEl
__ZNSt3__18ios_base5widthEl:            ; @_ZNSt3__18ios_base5widthEl
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	.cfi_def_cfa_offset 32
	str	x0, [sp, #24]
	str	x1, [sp, #16]
	ldr	x8, [sp, #24]
	ldr	x9, [x8, #24]
	str	x9, [sp, #8]
	ldr	x9, [sp, #16]
	str	x9, [x8, #24]
	ldr	x0, [sp, #8]
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__19nullptr_tC1EMNS0_5__natEi
__ZNSt3__19nullptr_tC1EMNS0_5__natEi:   ; @_ZNSt3__19nullptr_tC1EMNS0_5__natEi
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	ldur	x8, [x29, #-8]
	ldr	x1, [sp, #16]
	mov	x0, x8
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	bl	__ZNSt3__19nullptr_tC2EMNS0_5__natEi
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__19nullptr_tC2EMNS0_5__natEi
__ZNSt3__19nullptr_tC2EMNS0_5__natEi:   ; @_ZNSt3__19nullptr_tC2EMNS0_5__natEi
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	str	x1, [sp]
	ldr	x8, [sp, #8]
	str	xzr, [x8]
	mov	x0, x8
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Emc
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Emc: ; @_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2Emc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	strb	w2, [sp, #15]
	ldur	x8, [x29, #-8]
	mov	x0, x8
	add	x1, sp, #14                     ; =14
	add	x2, sp, #13                     ; =13
	str	x8, [sp]                        ; 8-byte Folded Spill
	bl	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_
	ldr	x1, [sp, #16]
	ldrsb	w2, [sp, #15]
	ldr	x8, [sp]                        ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_
__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_: ; @_ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC1INS_18__default_init_tagESA_EEOT_OT0_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	str	x2, [sp, #8]
	ldur	x8, [x29, #-8]
	ldr	x1, [sp, #16]
	ldr	x2, [sp, #8]
	mov	x0, x8
	str	x8, [sp]                        ; 8-byte Folded Spill
	bl	__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2INS_18__default_init_tagESA_EEOT_OT0_
	ldr	x8, [sp]                        ; 8-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2INS_18__default_init_tagESA_EEOT_OT0_
__ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2INS_18__default_init_tagESA_EEOT_OT0_: ; @_ZNSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_EC2INS_18__default_init_tagESA_EEOT_OT0_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	x1, [x29, #-16]
	str	x2, [sp, #24]
	ldur	x8, [x29, #-8]
	ldur	x0, [x29, #-16]
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	bl	__ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2ENS_18__default_init_tagE
	ldr	x8, [sp, #24]
	mov	x0, x8
	bl	__ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	mov	x0, x8
	bl	__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2ENS_18__default_init_tagE
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE
__ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE: ; @_ZNSt3__1L7forwardINS_18__default_init_tagEEEOT_RNS_16remove_referenceIS2_E4typeE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2ENS_18__default_init_tagE
__ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2ENS_18__default_init_tagE: ; @_ZNSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EEC2ENS_18__default_init_tagE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp]
	ldr	x0, [sp]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2ENS_18__default_init_tagE
__ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2ENS_18__default_init_tagE: ; @_ZNSt3__122__compressed_pair_elemINS_9allocatorIcEELi1ELb1EEC2ENS_18__default_init_tagE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #16]
	ldr	x8, [sp, #16]
	mov	x0, x8
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	bl	__ZNSt3__19allocatorIcEC2Ev
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__19allocatorIcEC2Ev
__ZNSt3__19allocatorIcEC2Ev:            ; @_ZNSt3__19allocatorIcEC2Ev
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__1L12__to_addressIKcEEPT_S3_
__ZNSt3__1L12__to_addressIKcEEPT_S3_:   ; @_ZNSt3__1L12__to_addressIKcEEPT_S3_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv: ; @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13__get_pointerEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	ldur	x8, [x29, #-8]
	mov	x0, x8
	str	x8, [sp, #16]                   ; 8-byte Folded Spill
	bl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
	tbnz	w0, #0, LBB31_1
	b	LBB31_2
LBB31_1:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	bl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	b	LBB31_3
LBB31_2:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	bl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
LBB31_3:
	ldr	x8, [sp, #8]                    ; 8-byte Folded Reload
	mov	x0, x8
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv: ; @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__is_longEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	ldrb	w8, [x0, #23]
	mov	x9, x8
	tst	x9, #0x80
	cset	w8, ne
	and	w0, w8, #0x1
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv: ; @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE18__get_long_pointerEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	ldr	x0, [x0]
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv: ; @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE19__get_short_pointerEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	bl	__ZNSt3__114pointer_traitsIPKcE10pointer_toERS1_
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
__ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv: ; @_ZNKSt3__117__compressed_pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repES5_E5firstEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
__ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv: ; @_ZNKSt3__122__compressed_pair_elemINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5__repELi0ELb0EE5__getEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__114pointer_traitsIPKcE10pointer_toERS1_
__ZNSt3__114pointer_traitsIPKcE10pointer_toERS1_: ; @_ZNSt3__114pointer_traitsIPKcE10pointer_toERS1_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNSt3__1L9addressofIKcEEPT_RS2_
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__1L9addressofIKcEEPT_RS2_
__ZNSt3__1L9addressofIKcEEPT_RS2_:      ; @_ZNSt3__1L9addressofIKcEEPT_RS2_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2ERNS_13basic_ostreamIcS2_EE
__ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2ERNS_13basic_ostreamIcS2_EE: ; @_ZNSt3__119ostreambuf_iteratorIcNS_11char_traitsIcEEEC2ERNS_13basic_ostreamIcS2_EE
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	stur	x1, [x29, #-16]
	ldur	x8, [x29, #-8]
	ldur	x9, [x29, #-16]
	ldr	x10, [x9]
	ldur	x10, [x10, #-24]
	add	x0, x9, x10
Ltmp48:
	str	x8, [sp, #8]                    ; 8-byte Folded Spill
	bl	__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv
Ltmp49:
	str	x0, [sp]                        ; 8-byte Folded Spill
	b	LBB39_1
LBB39_1:
	ldr	x8, [sp]                        ; 8-byte Folded Reload
	ldr	x9, [sp, #8]                    ; 8-byte Folded Reload
	str	x8, [x9]
	mov	x0, x9
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
LBB39_2:
Ltmp50:
                                        ; kill: def $w1 killed $w1 killed $x1
	str	x0, [sp, #24]
	str	w1, [sp, #20]
; %bb.3:
	ldr	x0, [sp, #24]
	bl	___cxa_call_unexpected
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table39:
Lexception2:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase2-Lttbaseref2
Lttbaseref2:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end2-Lcst_begin2
Lcst_begin2:
	.uleb128 Ltmp48-Lfunc_begin2            ; >> Call Site 1 <<
	.uleb128 Ltmp49-Ltmp48                  ;   Call between Ltmp48 and Ltmp49
	.uleb128 Ltmp50-Lfunc_begin2            ;     jumps to Ltmp50
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp49-Lfunc_begin2            ; >> Call Site 2 <<
	.uleb128 Lfunc_end2-Ltmp49              ;   Call between Ltmp49 and Lfunc_end2
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end2:
	.byte	127                             ; >> Action Record 1 <<
                                        ;   Filter TypeInfo -1
	.byte	0                               ;   No further actions
	.p2align	2
Lttbase2:
                                        ; >> Filter TypeInfos <<
	.byte	0
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5rdbufEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	bl	__ZNKSt3__18ios_base5rdbufEv
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__18ios_base5rdbufEv
__ZNKSt3__18ios_base5rdbufEv:           ; @_ZNKSt3__18ios_base5rdbufEv
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	x0, [x8, #40]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__111char_traitsIcE11eq_int_typeEii ; -- Begin function _ZNSt3__111char_traitsIcE11eq_int_typeEii
	.weak_definition	__ZNSt3__111char_traitsIcE11eq_int_typeEii
	.p2align	2
__ZNSt3__111char_traitsIcE11eq_int_typeEii: ; @_ZNSt3__111char_traitsIcE11eq_int_typeEii
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	str	w1, [sp, #8]
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #8]
	subs	w8, w8, w9
	cset	w9, eq
	and	w0, w9, #0x1
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNSt3__111char_traitsIcE3eofEv ; -- Begin function _ZNSt3__111char_traitsIcE3eofEv
	.weak_definition	__ZNSt3__111char_traitsIcE3eofEv
	.p2align	2
__ZNSt3__111char_traitsIcE3eofEv:       ; @_ZNSt3__111char_traitsIcE3eofEv
	.cfi_startproc
; %bb.0:
	mov	w0, #-1
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
__ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc: ; @_ZNKSt3__19basic_iosIcNS_11char_traitsIcEEE5widenEc
Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception3
; %bb.0:
	sub	sp, sp, #80                     ; =80
	stp	x29, x30, [sp, #64]             ; 16-byte Folded Spill
	add	x29, sp, #64                    ; =64
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	sturb	w1, [x29, #-9]
	ldur	x0, [x29, #-8]
	sub	x8, x29, #24                    ; =24
	str	x8, [sp, #16]                   ; 8-byte Folded Spill
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp53:
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	bl	__ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
Ltmp54:
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	b	LBB44_1
LBB44_1:
	ldursb	w1, [x29, #-9]
Ltmp55:
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	bl	__ZNKSt3__15ctypeIcE5widenEc
Ltmp56:
	str	w0, [sp, #4]                    ; 4-byte Folded Spill
	b	LBB44_2
LBB44_2:
	sub	x0, x29, #24                    ; =24
	bl	__ZNSt3__16localeD1Ev
	ldr	w1, [sp, #4]                    ; 4-byte Folded Reload
	sxtb	w8, w1
	mov	x0, x8
	ldp	x29, x30, [sp, #64]             ; 16-byte Folded Reload
	add	sp, sp, #80                     ; =80
	ret
LBB44_3:
Ltmp57:
                                        ; kill: def $w1 killed $w1 killed $x1
	str	x0, [sp, #32]
	str	w1, [sp, #28]
Ltmp58:
	sub	x0, x29, #24                    ; =24
	bl	__ZNSt3__16localeD1Ev
Ltmp59:
	b	LBB44_4
LBB44_4:
; %bb.5:
	ldr	x0, [sp, #32]
	bl	__Unwind_Resume
LBB44_6:
Ltmp60:
	bl	___clang_call_terminate
Lfunc_end3:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table44:
Lexception3:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase3-Lttbaseref3
Lttbaseref3:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end3-Lcst_begin3
Lcst_begin3:
	.uleb128 Lfunc_begin3-Lfunc_begin3      ; >> Call Site 1 <<
	.uleb128 Ltmp53-Lfunc_begin3            ;   Call between Lfunc_begin3 and Ltmp53
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp53-Lfunc_begin3            ; >> Call Site 2 <<
	.uleb128 Ltmp56-Ltmp53                  ;   Call between Ltmp53 and Ltmp56
	.uleb128 Ltmp57-Lfunc_begin3            ;     jumps to Ltmp57
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp56-Lfunc_begin3            ; >> Call Site 3 <<
	.uleb128 Ltmp58-Ltmp56                  ;   Call between Ltmp56 and Ltmp58
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp58-Lfunc_begin3            ; >> Call Site 4 <<
	.uleb128 Ltmp59-Ltmp58                  ;   Call between Ltmp58 and Ltmp59
	.uleb128 Ltmp60-Lfunc_begin3            ;     jumps to Ltmp60
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp59-Lfunc_begin3            ; >> Call Site 5 <<
	.uleb128 Lfunc_end3-Ltmp59              ;   Call between Ltmp59 and Lfunc_end3
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end3:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.p2align	2
                                        ; >> Catch TypeInfos <<
	.long	0                               ; TypeInfo 1
Lttbase3:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.p2align	2                               ; -- Begin function _ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
__ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE: ; @_ZNSt3__1L9use_facetINS_5ctypeIcEEEERKT_RKNS_6localeE
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	ldr	x0, [sp, #8]
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNKSt3__15ctypeIcE5widenEc
__ZNKSt3__15ctypeIcE5widenEc:           ; @_ZNKSt3__15ctypeIcE5widenEc
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	strb	w1, [sp, #7]
	ldr	x8, [sp, #8]
	ldrsb	w1, [sp, #7]
	ldr	x9, [x8]
	ldr	x9, [x9, #56]
	mov	x0, x8
	blr	x9
	sxtb	w0, w0
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.p2align	2                               ; -- Begin function _ZNSt3__18ios_base8setstateEj
__ZNSt3__18ios_base8setstateEj:         ; @_ZNSt3__18ios_base8setstateEj
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	str	x0, [sp, #8]
	str	w1, [sp, #4]
	ldr	x8, [sp, #8]
	ldr	w9, [x8, #32]
	ldr	w10, [sp, #4]
	orr	w1, w9, w10
	mov	x0, x8
	bl	__ZNSt3__18ios_base5clearEj
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Celsius to Fahrenheit (enter 0)"

l_.str.1:                               ; @.str.1
	.asciz	"Celsius to Kelvin (enter 1)"

l_.str.2:                               ; @.str.2
	.asciz	"Fahrenheit to Celsius (enter 2)"

l_.str.3:                               ; @.str.3
	.asciz	"Fahrenheit to Kelvin (enter 3)"

l_.str.4:                               ; @.str.4
	.asciz	"Kelvin to Celsius (enter 4)"

l_.str.5:                               ; @.str.5
	.asciz	"Kelvin to Fahrenheit (enter 5)"

l_.str.6:                               ; @.str.6
	.asciz	"conversion type: "

l_.str.7:                               ; @.str.7
	.asciz	"you did not enter a valid option please enter a new number."

l_.str.8:                               ; @.str.8
	.asciz	"Enter the amount in Celsisus: "

l_.str.9:                               ; @.str.9
	.asciz	" Celsius is "

l_.str.10:                              ; @.str.10
	.asciz	" Farenheit"

l_.str.11:                              ; @.str.11
	.asciz	" Kelvin"

l_.str.12:                              ; @.str.12
	.asciz	"Enter the amount in Farenheit: "

l_.str.13:                              ; @.str.13
	.asciz	" Farenheit is "

l_.str.14:                              ; @.str.14
	.asciz	" Celsius"

l_.str.15:                              ; @.str.15
	.asciz	"Enter the amount in Kelvin: "

l_.str.16:                              ; @.str.16
	.asciz	" Kelvin is "

.subsections_via_symbols
