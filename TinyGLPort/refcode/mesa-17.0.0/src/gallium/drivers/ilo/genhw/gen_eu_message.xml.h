#ifndef GEN_EU_MESSAGE_XML
#define GEN_EU_MESSAGE_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
https://github.com/olvaffe/envytools/
git clone https://github.com/olvaffe/envytools.git

Copyright (C) 2014-2015 by the following authors:
- Chia-I Wu <olvaffe@gmail.com> (olv)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


enum gen_eu_urb_op {
    GEN6_MSG_URB_WRITE					      = 0x0,
    GEN6_MSG_URB_FF_SYNC				      = 0x1,
    GEN7_MSG_URB_WRITE_HWORD				      = 0x0,
    GEN7_MSG_URB_WRITE_OWORD				      = 0x1,
    GEN7_MSG_URB_READ_HWORD				      = 0x2,
    GEN7_MSG_URB_READ_OWORD				      = 0x3,
    GEN7_MSG_URB_ATOMIC_MOV				      = 0x4,
    GEN7_MSG_URB_ATOMIC_INC				      = 0x5,
    GEN75_MSG_URB_ATOMIC_ADD				      = 0x6,
    GEN8_MSG_URB_SIMD8_WRITE				      = 0x7,
    GEN8_MSG_URB_SIMD8_READ				      = 0x8,
};

enum gen_eu_pi_simd {
    GEN7_MSG_PI_SIMD8					      = 0x0,
    GEN7_MSG_PI_SIMD16					      = 0x1,
};

enum gen_eu_pi_op {
    GEN7_MSG_PI_EVAL_SNAPPED_IMM			      = 0x0,
    GEN7_MSG_PI_EVAL_SINDEX				      = 0x1,
    GEN7_MSG_PI_EVAL_CENTROID				      = 0x2,
    GEN7_MSG_PI_EVAL_SNAPPED				      = 0x3,
};

enum gen_eu_sampler_simd {
    GEN6_MSG_SAMPLER_SIMD4X2				      = 0x0,
    GEN9_MSG_SAMPLER_SIMD8D				      = 0x0,
    GEN6_MSG_SAMPLER_SIMD8				      = 0x1,
    GEN6_MSG_SAMPLER_SIMD16				      = 0x2,
    GEN6_MSG_SAMPLER_SIMD32_64				      = 0x3,
};

enum gen_eu_sampler_op {
    GEN6_MSG_SAMPLER_SAMPLE				      = 0x0,
    GEN6_MSG_SAMPLER_SAMPLE_B				      = 0x1,
    GEN6_MSG_SAMPLER_SAMPLE_L				      = 0x2,
    GEN6_MSG_SAMPLER_SAMPLE_C				      = 0x3,
    GEN6_MSG_SAMPLER_SAMPLE_D				      = 0x4,
    GEN6_MSG_SAMPLER_SAMPLE_B_C				      = 0x5,
    GEN6_MSG_SAMPLER_SAMPLE_L_C				      = 0x6,
    GEN6_MSG_SAMPLER_LD					      = 0x7,
    GEN6_MSG_SAMPLER_GATHER4				      = 0x8,
    GEN6_MSG_SAMPLER_LOD				      = 0x9,
    GEN6_MSG_SAMPLER_RESINFO				      = 0xa,
    GEN6_MSG_SAMPLER_SAMPLEINFO				      = 0xb,
    GEN7_MSG_SAMPLER_GATHER4_C				      = 0x10,
    GEN7_MSG_SAMPLER_GATHER4_PO				      = 0x11,
    GEN7_MSG_SAMPLER_GATHER4_PO_C			      = 0x12,
    GEN7_MSG_SAMPLER_SAMPLE_D_C				      = 0x14,
    GEN7_MSG_SAMPLER_SAMPLE_LZ				      = 0x18,
    GEN7_MSG_SAMPLER_SAMPLE_C_LC			      = 0x19,
    GEN7_MSG_SAMPLER_LD_LZ				      = 0x1a,
    GEN7_MSG_SAMPLER_LD_MCS				      = 0x1d,
    GEN7_MSG_SAMPLER_LD2DMS				      = 0x1e,
    GEN7_MSG_SAMPLER_LD2DSS				      = 0x1f,
};

enum gen_eu_dp_op {
    GEN6_MSG_DP_OWORD_BLOCK_READ			      = 0x0,
    GEN6_MSG_DP_RT_UNORM_READ				      = 0x1,
    GEN6_MSG_DP_OWORD_DUAL_BLOCK_READ			      = 0x2,
    GEN6_MSG_DP_MEDIA_BLOCK_READ			      = 0x4,
    GEN6_MSG_DP_UNALIGNED_OWORD_BLOCK_READ		      = 0x5,
    GEN6_MSG_DP_DWORD_SCATTERED_READ			      = 0x6,
    GEN6_MSG_DP_DWORD_ATOMIC_WRITE			      = 0x7,
    GEN6_MSG_DP_OWORD_BLOCK_WRITE			      = 0x8,
    GEN6_MSG_DP_OWORD_DUAL_BLOCK_WRITE			      = 0x9,
    GEN6_MSG_DP_MEDIA_BLOCK_WRITE			      = 0xa,
    GEN6_MSG_DP_DWORD_SCATTERED_WRITE			      = 0xb,
    GEN6_MSG_DP_RT_WRITE				      = 0xc,
    GEN6_MSG_DP_SVB_WRITE				      = 0xd,
    GEN6_MSG_DP_RT_UNORM_WRITE				      = 0xe,
    GEN7_MSG_DP_SAMPLER_UNALIGNED_OWORD_BLOCK_READ	      = 0x1,
    GEN7_MSG_DP_SAMPLER_MEDIA_BLOCK_READ		      = 0x4,
    GEN7_MSG_DP_RC_MEDIA_BLOCK_READ			      = 0x4,
    GEN7_MSG_DP_RC_TYPED_SURFACE_READ			      = 0x5,
    GEN7_MSG_DP_RC_TYPED_ATOMIC_OP			      = 0x6,
    GEN7_MSG_DP_RC_MEMORY_FENCE				      = 0x7,
    GEN7_MSG_DP_RC_MEDIA_BLOCK_WRITE			      = 0xa,
    GEN7_MSG_DP_RC_RT_WRITE				      = 0xc,
    GEN7_MSG_DP_RC_TYPED_SURFACE_WRITE			      = 0xd,
    GEN7_MSG_DP_CC_OWORD_BLOCK_READ			      = 0x0,
    GEN7_MSG_DP_CC_UNALIGNED_OWORD_BLOCK_READ		      = 0x1,
    GEN7_MSG_DP_CC_OWORD_DUAL_BLOCK_READ		      = 0x2,
    GEN7_MSG_DP_CC_DWORD_SCATTERED_READ			      = 0x3,
    GEN7_MSG_DP_DC0_OWORD_BLOCK_READ			      = 0x0,
    GEN7_MSG_DP_DC0_UNALIGNED_OWORD_BLOCK_READ		      = 0x1,
    GEN7_MSG_DP_DC0_OWORD_DUAL_BLOCK_READ		      = 0x2,
    GEN7_MSG_DP_DC0_DWORD_SCATTERED_READ		      = 0x3,
    GEN7_MSG_DP_DC0_BYTE_SCATTERED_READ			      = 0x4,
    GEN7_MSG_DP_DC0_UNTYPED_SURFACE_READ		      = 0x5,
    GEN7_MSG_DP_DC0_UNTYPED_ATOMIC_OP			      = 0x6,
    GEN7_MSG_DP_DC0_MEMORY_FENCE			      = 0x7,
    GEN7_MSG_DP_DC0_OWORD_BLOCK_WRITE			      = 0x8,
    GEN7_MSG_DP_DC0_OWORD_DUAL_BLOCK_WRITE		      = 0xa,
    GEN7_MSG_DP_DC0_DWORD_SCATTERED_WRITE		      = 0xb,
    GEN7_MSG_DP_DC0_BYTE_SCATTERED_WRITE		      = 0xc,
    GEN7_MSG_DP_DC0_UNTYPED_SURFACE_WRITE		      = 0xd,
    GEN75_MSG_DP_SAMPLER_READ_SURFACE_INFO		      = 0x0,
    GEN75_MSG_DP_SAMPLER_UNALIGNED_OWORD_BLOCK_READ	      = 0x1,
    GEN75_MSG_DP_SAMPLER_MEDIA_BLOCK_READ		      = 0x4,
    GEN75_MSG_DP_RC_MEDIA_BLOCK_READ			      = 0x4,
    GEN75_MSG_DP_RC_MEMORY_FENCE			      = 0x7,
    GEN75_MSG_DP_RC_MEDIA_BLOCK_WRITE			      = 0xa,
    GEN75_MSG_DP_RC_RT_WRITE				      = 0xc,
    GEN8_MSG_DP_RC_RT_READ				      = 0xd,
    GEN75_MSG_DP_CC_OWORD_BLOCK_READ			      = 0x0,
    GEN75_MSG_DP_CC_UNALIGNED_OWORD_BLOCK_READ		      = 0x1,
    GEN75_MSG_DP_CC_OWORD_DUAL_BLOCK_READ		      = 0x2,
    GEN75_MSG_DP_CC_DWORD_SCATTERED_READ		      = 0x3,
    GEN75_MSG_DP_DC0_OWORD_BLOCK_READ			      = 0x0,
    GEN75_MSG_DP_DC0_UNALIGNED_OWORD_BLOCK_READ		      = 0x1,
    GEN75_MSG_DP_DC0_OWORD_DUAL_BLOCK_READ		      = 0x2,
    GEN75_MSG_DP_DC0_DWORD_SCATTERED_READ		      = 0x3,
    GEN75_MSG_DP_DC0_BYTE_SCATTERED_READ		      = 0x4,
    GEN75_MSG_DP_DC0_MEMORY_FENCE			      = 0x7,
    GEN75_MSG_DP_DC0_OWORD_BLOCK_WRITE			      = 0x8,
    GEN75_MSG_DP_DC0_OWORD_DUAL_BLOCK_WRITE		      = 0xa,
    GEN75_MSG_DP_DC0_DWORD_SCATTERED_WRITE		      = 0xb,
    GEN75_MSG_DP_DC0_BYTE_SCATTERED_WRITE		      = 0xc,
    GEN75_MSG_DP_DC1_UNTYPED_SURFACE_READ		      = 0x1,
    GEN75_MSG_DP_DC1_UNTYPED_ATOMIC_OP			      = 0x2,
    GEN75_MSG_DP_DC1_UNTYPED_ATOMIC_OP_SIMD4X2		      = 0x3,
    GEN75_MSG_DP_DC1_MEDIA_BLOCK_READ			      = 0x4,
    GEN75_MSG_DP_DC1_TYPED_SURFACE_READ			      = 0x5,
    GEN75_MSG_DP_DC1_TYPED_ATOMIC_OP			      = 0x6,
    GEN75_MSG_DP_DC1_TYPED_ATOMIC_OP_SIMD4X2		      = 0x7,
    GEN75_MSG_DP_DC1_UNTYPED_SURFACE_WRITE		      = 0x9,
    GEN75_MSG_DP_DC1_MEDIA_BLOCK_WRITE			      = 0xa,
    GEN75_MSG_DP_DC1_ATOMIC_COUNTER_OP			      = 0xb,
    GEN75_MSG_DP_DC1_ATOMIC_COUNTER_OP_SIMD4X2		      = 0xc,
    GEN75_MSG_DP_DC1_TYPED_SURFACE_WRITE		      = 0xd,
};

enum gen_eu_dp_aop {
    GEN7_MSG_DP_AOP_CMPWR8B				      = 0x0,
    GEN7_MSG_DP_AOP_AND					      = 0x1,
    GEN7_MSG_DP_AOP_OR					      = 0x2,
    GEN7_MSG_DP_AOP_XOR					      = 0x3,
    GEN7_MSG_DP_AOP_MOV					      = 0x4,
    GEN7_MSG_DP_AOP_INC					      = 0x5,
    GEN7_MSG_DP_AOP_DEC					      = 0x6,
    GEN7_MSG_DP_AOP_ADD					      = 0x7,
    GEN7_MSG_DP_AOP_SUB					      = 0x8,
    GEN7_MSG_DP_AOP_REVSUB				      = 0x9,
    GEN7_MSG_DP_AOP_IMAX				      = 0xa,
    GEN7_MSG_DP_AOP_IMIN				      = 0xb,
    GEN7_MSG_DP_AOP_UMAX				      = 0xc,
    GEN7_MSG_DP_AOP_UMIN				      = 0xd,
    GEN7_MSG_DP_AOP_CMPWR				      = 0xe,
    GEN7_MSG_DP_AOP_PREDEC				      = 0xf,
};

#define GEN6_MSG_EOT						(0x1 << 31)
#define GEN6_MSG_MLEN__MASK					0x1e000000
#define GEN6_MSG_MLEN__SHIFT					25
#define GEN6_MSG_RLEN__MASK					0x01f00000
#define GEN6_MSG_RLEN__SHIFT					20
#define GEN6_MSG_HEADER_PRESENT					(0x1 << 19)
#define GEN6_MSG_FUNCTION_CONTROL__MASK				0x0007ffff
#define GEN6_MSG_FUNCTION_CONTROL__SHIFT			0
#define GEN6_MSG_URB_COMPLETE					(0x1 << 15)
#define GEN6_MSG_URB_USED					(0x1 << 14)
#define GEN6_MSG_URB_ALLOCATE					(0x1 << 13)
#define GEN6_MSG_URB_INTERLEAVED				(0x1 << 10)
#define GEN6_MSG_URB_OFFSET__MASK				0x000003f0
#define GEN6_MSG_URB_OFFSET__SHIFT				4
#define GEN6_MSG_URB_OP__MASK					0x0000000f
#define GEN6_MSG_URB_OP__SHIFT					0
#define GEN7_MSG_URB_PER_SLOT_OFFSET				(0x1 << 16)
#define GEN7_MSG_URB_COMPLETE					(0x1 << 15)
#define GEN7_MSG_URB_INTERLEAVED				(0x1 << 14)
#define GEN7_MSG_URB_GLOBAL_OFFSET__MASK			0x00003ff8
#define GEN7_MSG_URB_GLOBAL_OFFSET__SHIFT			3
#define GEN7_MSG_URB_OP__MASK					0x00000007
#define GEN7_MSG_URB_OP__SHIFT					0
#define GEN8_MSG_URB_PER_SLOT_OFFSET				(0x1 << 17)
#define GEN8_MSG_URB_INTERLEAVED				(0x1 << 15)
#define GEN8_MSG_URB_GLOBAL_OFFSET__MASK			0x00007ff0
#define GEN8_MSG_URB_GLOBAL_OFFSET__SHIFT			4
#define GEN8_MSG_URB_OP__MASK					0x0000000f
#define GEN8_MSG_URB_OP__SHIFT					0
#define GEN7_MSG_PI_SIMD__MASK					0x00010000
#define GEN7_MSG_PI_SIMD__SHIFT					16
#define GEN7_MSG_PI_LINEAR_INTERP				(0x1 << 14)
#define GEN7_MSG_PI_OP__MASK					0x00003000
#define GEN7_MSG_PI_OP__SHIFT					12
#define GEN7_MSG_PI_SLOTGRP_HI					(0x1 << 11)
#define GEN7_MSG_PI_OFFSET_Y__MASK				0x000000f0
#define GEN7_MSG_PI_OFFSET_Y__SHIFT				4
#define GEN7_MSG_PI_OFFSET_X__MASK				0x0000000f
#define GEN7_MSG_PI_OFFSET_X__SHIFT				0
#define GEN7_MSG_PI_SAMPLE_INDEX__MASK				0x000000f0
#define GEN7_MSG_PI_SAMPLE_INDEX__SHIFT				4
#define GEN6_MSG_SAMPLER_SIMD__MASK				0x00030000
#define GEN6_MSG_SAMPLER_SIMD__SHIFT				16
#define GEN6_MSG_SAMPLER_OP__MASK				0x0000f000
#define GEN6_MSG_SAMPLER_OP__SHIFT				12
#define GEN7_MSG_SAMPLER_SIMD__MASK				0x00060000
#define GEN7_MSG_SAMPLER_SIMD__SHIFT				17
#define GEN7_MSG_SAMPLER_OP__MASK				0x0001f000
#define GEN7_MSG_SAMPLER_OP__SHIFT				12
#define GEN6_MSG_SAMPLER_INDEX__MASK				0x00000f00
#define GEN6_MSG_SAMPLER_INDEX__SHIFT				8
#define GEN6_MSG_SAMPLER_SURFACE__MASK				0x000000ff
#define GEN6_MSG_SAMPLER_SURFACE__SHIFT				0
#define GEN6_MSG_DP_SEND_WRITE_COMMIT				(0x1 << 17)
#define GEN6_MSG_DP_OP__MASK					0x0001e000
#define GEN6_MSG_DP_OP__SHIFT					13
#define GEN6_MSG_DP_CTRL__MASK					0x00001f00
#define GEN6_MSG_DP_CTRL__SHIFT					8
#define GEN7_MSG_DP_CATEGORY					(0x1 << 18)
#define GEN7_MSG_DP_OP__MASK					0x0003c000
#define GEN7_MSG_DP_OP__SHIFT					14
#define GEN7_MSG_DP_CTRL__MASK					0x00003f00
#define GEN7_MSG_DP_CTRL__SHIFT					8
#define GEN7_MSG_DP_OWORD_BLOCK_READ_INVALIDATE			(0x1 << 13)
#define GEN6_MSG_DP_OWORD_BLOCK_SIZE__MASK			0x00000700
#define GEN6_MSG_DP_OWORD_BLOCK_SIZE__SHIFT			8
#define GEN6_MSG_DP_OWORD_BLOCK_SIZE_1_LO			(0x0 << 8)
#define GEN6_MSG_DP_OWORD_BLOCK_SIZE_1_HI			(0x1 << 8)
#define GEN6_MSG_DP_OWORD_BLOCK_SIZE_2				(0x2 << 8)
#define GEN6_MSG_DP_OWORD_BLOCK_SIZE_4				(0x3 << 8)
#define GEN6_MSG_DP_OWORD_BLOCK_SIZE_8				(0x4 << 8)
#define GEN6_MSG_DP_UNALIGNED_OWORD_BLOCK_SIZE__MASK		0x00000700
#define GEN6_MSG_DP_UNALIGNED_OWORD_BLOCK_SIZE__SHIFT		8
#define GEN6_MSG_DP_UNALIGNED_OWORD_BLOCK_SIZE_1_LO		(0x0 << 8)
#define GEN6_MSG_DP_UNALIGNED_OWORD_BLOCK_SIZE_1_HI		(0x1 << 8)
#define GEN6_MSG_DP_UNALIGNED_OWORD_BLOCK_SIZE_2		(0x2 << 8)
#define GEN6_MSG_DP_UNALIGNED_OWORD_BLOCK_SIZE_4		(0x3 << 8)
#define GEN6_MSG_DP_UNALIGNED_OWORD_BLOCK_SIZE_8		(0x4 << 8)
#define GEN7_MSG_DP_OWORD_DUAL_BLOCK_READ_INVALIDATE		(0x1 << 13)
#define GEN6_MSG_DP_OWORD_DUAL_BLOCK_SIZE__MASK			0x00000300
#define GEN6_MSG_DP_OWORD_DUAL_BLOCK_SIZE__SHIFT		8
#define GEN6_MSG_DP_OWORD_DUAL_BLOCK_SIZE_1			(0x0 << 8)
#define GEN6_MSG_DP_OWORD_DUAL_BLOCK_SIZE_4			(0x2 << 8)
#define GEN7_MSG_DP_DWORD_SCATTERED_READ_INVALIDATE		(0x1 << 13)
#define GEN6_MSG_DP_DWORD_SCATTERED_BLOCK_SIZE__MASK		0x00000300
#define GEN6_MSG_DP_DWORD_SCATTERED_BLOCK_SIZE__SHIFT		8
#define GEN6_MSG_DP_DWORD_SCATTERED_BLOCK_SIZE_8		(0x2 << 8)
#define GEN6_MSG_DP_DWORD_SCATTERED_BLOCK_SIZE_16		(0x3 << 8)
#define GEN6_MSG_DP_BYTE_SCATTERED_DATA_SIZE__MASK		0x00000600
#define GEN6_MSG_DP_BYTE_SCATTERED_DATA_SIZE__SHIFT		9
#define GEN6_MSG_DP_BYTE_SCATTERED_DATA_SIZE_1			(0x0 << 9)
#define GEN6_MSG_DP_BYTE_SCATTERED_DATA_SIZE_2			(0x1 << 9)
#define GEN6_MSG_DP_BYTE_SCATTERED_DATA_SIZE_4			(0x2 << 9)
#define GEN6_MSG_DP_BYTE_SCATTERED_MODE__MASK			0x00000100
#define GEN6_MSG_DP_BYTE_SCATTERED_MODE__SHIFT			8
#define GEN6_MSG_DP_BYTE_SCATTERED_MODE_SIMD8			(0x0 << 8)
#define GEN6_MSG_DP_BYTE_SCATTERED_MODE_SIMD16			(0x1 << 8)
#define GEN6_MSG_DP_RT_LAST					(0x1 << 12)
#define GEN6_MSG_DP_RT_SLOTGRP_HI				(0x1 << 11)
#define GEN6_MSG_DP_RT_MODE__MASK				0x00000700
#define GEN6_MSG_DP_RT_MODE__SHIFT				8
#define GEN6_MSG_DP_RT_MODE_SIMD16				(0x0 << 8)
#define GEN6_MSG_DP_RT_MODE_SIMD16_REPDATA			(0x1 << 8)
#define GEN6_MSG_DP_RT_MODE_SIMD8_DUALSRC_LO			(0x2 << 8)
#define GEN6_MSG_DP_RT_MODE_SIMD8_DUALSRC_HI			(0x3 << 8)
#define GEN6_MSG_DP_RT_MODE_SIMD8_LO				(0x4 << 8)
#define GEN6_MSG_DP_RT_MODE_SIMD8_IMAGE_WR			(0x5 << 8)
#define GEN7_MSG_DP_TYPED_SLOTGRP_HI				(0x1 << 13)
#define GEN7_MSG_DP_TYPED_MASK__MASK				0x00000f00
#define GEN7_MSG_DP_TYPED_MASK__SHIFT				8
#define GEN7_MSG_DP_UNTYPED_MODE__MASK				0x00003000
#define GEN7_MSG_DP_UNTYPED_MODE__SHIFT				12
#define GEN7_MSG_DP_UNTYPED_MODE_SIMD4X2			(0x0 << 12)
#define GEN7_MSG_DP_UNTYPED_MODE_SIMD16				(0x1 << 12)
#define GEN7_MSG_DP_UNTYPED_MODE_SIMD8				(0x2 << 12)
#define GEN7_MSG_DP_UNTYPED_MASK__MASK				0x00000f00
#define GEN7_MSG_DP_UNTYPED_MASK__SHIFT				8
#define GEN7_MSG_DP_ATOMIC_RETURN_DATA_ENABLE			(0x1 << 13)
#define GEN7_MSG_DP_ATOMIC_TYPED_SLOTGRP_HI			(0x1 << 12)
#define GEN7_MSG_DP_ATOMIC_UNTYPED_MODE__MASK			0x00001000
#define GEN7_MSG_DP_ATOMIC_UNTYPED_MODE__SHIFT			12
#define GEN7_MSG_DP_ATOMIC_UNTYPED_MODE_SIMD16			(0x0 << 12)
#define GEN7_MSG_DP_ATOMIC_UNTYPED_MODE_SIMD8			(0x1 << 12)
#define GEN7_MSG_DP_ATOMIC_OP__MASK				0x00000f00
#define GEN7_MSG_DP_ATOMIC_OP__SHIFT				8
#define GEN6_MSG_DP_SURFACE__MASK				0x000000ff
#define GEN6_MSG_DP_SURFACE__SHIFT				0
#define GEN6_MSG_TS_RESOURCE_SELECT__MASK			0x00000010
#define GEN6_MSG_TS_RESOURCE_SELECT__SHIFT			4
#define GEN6_MSG_TS_RESOURCE_SELECT_CHILD			(0x0 << 4)
#define GEN6_MSG_TS_RESOURCE_SELECT_ROOT			(0x1 << 4)
#define GEN6_MSG_TS_RESOURCE_SELECT_DEREF			(0x0 << 4)
#define GEN6_MSG_TS_RESOURCE_SELECT_NO_DEREF			(0x1 << 4)
#define GEN6_MSG_TS_REQUESTER_TYPE__MASK			0x00000002
#define GEN6_MSG_TS_REQUESTER_TYPE__SHIFT			1
#define GEN6_MSG_TS_REQUESTER_TYPE_ROOT				(0x0 << 1)
#define GEN6_MSG_TS_REQUESTER_TYPE_CHILD			(0x1 << 1)
#define GEN6_MSG_TS_OPCODE__MASK				0x00000001
#define GEN6_MSG_TS_OPCODE__SHIFT				0
#define GEN6_MSG_TS_OPCODE_DEREF				0x0
#define GEN6_MSG_TS_OPCODE_SPAWN				0x1

#endif /* GEN_EU_MESSAGE_XML */
