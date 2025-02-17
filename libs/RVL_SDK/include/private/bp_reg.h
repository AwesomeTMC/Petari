#ifndef BP_REG_H
#define BP_REG_H

#define BP_IMASK_RID_SIZE	8
#define BP_IMASK_RID_SHIFT	24
#define BP_IMASK_RID_MASK	0xff000000
#define BP_IMASK_GET_RID(bp_imask) \
	((((unsigned long)(bp_imask)) & BP_IMASK_RID_MASK) >> BP_IMASK_RID_SHIFT)

#define BP_CMD_BT_SIZE	2
#define BP_CMD_BT_SHIFT	0
#define BP_CMD_BT_MASK	0x00000003
#define BP_CMD_GET_BT(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_BT_MASK) >> BP_CMD_BT_SHIFT)

#define BP_CMD_FMT_SIZE	2
#define BP_CMD_FMT_SHIFT	2
#define BP_CMD_FMT_MASK	0x0000000c
#define BP_CMD_GET_FMT(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_FMT_MASK) >> BP_CMD_FMT_SHIFT)

#define BP_CMD_BIAS_SIZE	3
#define BP_CMD_BIAS_SHIFT	4
#define BP_CMD_BIAS_MASK	0x00000070
#define BP_CMD_GET_BIAS(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_BIAS_MASK) >> BP_CMD_BIAS_SHIFT)

#define BP_CMD_BS_SIZE	2
#define BP_CMD_BS_SHIFT	7
#define BP_CMD_BS_MASK	0x00000180
#define BP_CMD_GET_BS(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_BS_MASK) >> BP_CMD_BS_SHIFT)

#define BP_CMD_M_SIZE	4
#define BP_CMD_M_SHIFT	9
#define BP_CMD_M_MASK	0x00001e00
#define BP_CMD_GET_M(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_M_MASK) >> BP_CMD_M_SHIFT)

#define BP_CMD_SW_SIZE	3
#define BP_CMD_SW_SHIFT	13
#define BP_CMD_SW_MASK	0x0000e000
#define BP_CMD_GET_SW(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_SW_MASK) >> BP_CMD_SW_SHIFT)

#define BP_CMD_TW_SIZE	3
#define BP_CMD_TW_SHIFT	16
#define BP_CMD_TW_MASK	0x00070000
#define BP_CMD_GET_TW(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_TW_MASK) >> BP_CMD_TW_SHIFT)

#define BP_CMD_LB_SIZE	1
#define BP_CMD_LB_SHIFT	19
#define BP_CMD_LB_MASK	0x00080000
#define BP_CMD_GET_LB(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_LB_MASK) >> BP_CMD_LB_SHIFT)

#define BP_CMD_FB_SIZE	1
#define BP_CMD_FB_SHIFT	20
#define BP_CMD_FB_MASK	0x00100000
#define BP_CMD_GET_FB(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_FB_MASK) >> BP_CMD_FB_SHIFT)

#define BP_CMD_PAD0_SIZE	3
#define BP_CMD_PAD0_SHIFT	21
#define BP_CMD_PAD0_MASK	0x00e00000
#define BP_CMD_GET_PAD0(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_PAD0_MASK) >> BP_CMD_PAD0_SHIFT)

#define BP_CMD_RID_SIZE	8
#define BP_CMD_RID_SHIFT	24
#define BP_CMD_RID_MASK	0xff000000
#define BP_CMD_GET_RID(bp_cmd) \
	((((unsigned long)(bp_cmd)) & BP_CMD_RID_MASK) >> BP_CMD_RID_SHIFT)

#define BP_MTXA_MA_SIZE	11
#define BP_MTXA_MA_SHIFT	0
#define BP_MTXA_MA_MASK	0x000007ff
#define BP_MTXA_GET_MA(bp_mtxa) \
	((((unsigned long)(bp_mtxa)) & BP_MTXA_MA_MASK) >> BP_MTXA_MA_SHIFT)

#define BP_MTXA_MB_SIZE	11
#define BP_MTXA_MB_SHIFT	11
#define BP_MTXA_MB_MASK	0x003ff800
#define BP_MTXA_GET_MB(bp_mtxa) \
	((((unsigned long)(bp_mtxa)) & BP_MTXA_MB_MASK) >> BP_MTXA_MB_SHIFT)

#define BP_MTXA_S_SIZE	2
#define BP_MTXA_S_SHIFT	22
#define BP_MTXA_S_MASK	0x00c00000
#define BP_MTXA_GET_S(bp_mtxa) \
	((((unsigned long)(bp_mtxa)) & BP_MTXA_S_MASK) >> BP_MTXA_S_SHIFT)

#define BP_MTXA_RID_SIZE	8
#define BP_MTXA_RID_SHIFT	24
#define BP_MTXA_RID_MASK	0xff000000
#define BP_MTXA_GET_RID(bp_mtxa) \
	((((unsigned long)(bp_mtxa)) & BP_MTXA_RID_MASK) >> BP_MTXA_RID_SHIFT)

#define BP_MTXB_MC_SIZE	11
#define BP_MTXB_MC_SHIFT	0
#define BP_MTXB_MC_MASK	0x000007ff
#define BP_MTXB_GET_MC(bp_mtxb) \
	((((unsigned long)(bp_mtxb)) & BP_MTXB_MC_MASK) >> BP_MTXB_MC_SHIFT)

#define BP_MTXB_MD_SIZE	11
#define BP_MTXB_MD_SHIFT	11
#define BP_MTXB_MD_MASK	0x003ff800
#define BP_MTXB_GET_MD(bp_mtxb) \
	((((unsigned long)(bp_mtxb)) & BP_MTXB_MD_MASK) >> BP_MTXB_MD_SHIFT)

#define BP_MTXB_S_SIZE	2
#define BP_MTXB_S_SHIFT	22
#define BP_MTXB_S_MASK	0x00c00000
#define BP_MTXB_GET_S(bp_mtxb) \
	((((unsigned long)(bp_mtxb)) & BP_MTXB_S_MASK) >> BP_MTXB_S_SHIFT)

#define BP_MTXB_RID_SIZE	8
#define BP_MTXB_RID_SHIFT	24
#define BP_MTXB_RID_MASK	0xff000000
#define BP_MTXB_GET_RID(bp_mtxb) \
	((((unsigned long)(bp_mtxb)) & BP_MTXB_RID_MASK) >> BP_MTXB_RID_SHIFT)

#define BP_MTXC_ME_SIZE	11
#define BP_MTXC_ME_SHIFT	0
#define BP_MTXC_ME_MASK	0x000007ff
#define BP_MTXC_GET_ME(bp_mtxc) \
	((((unsigned long)(bp_mtxc)) & BP_MTXC_ME_MASK) >> BP_MTXC_ME_SHIFT)

#define BP_MTXC_MF_SIZE	11
#define BP_MTXC_MF_SHIFT	11
#define BP_MTXC_MF_MASK	0x003ff800
#define BP_MTXC_GET_MF(bp_mtxc) \
	((((unsigned long)(bp_mtxc)) & BP_MTXC_MF_MASK) >> BP_MTXC_MF_SHIFT)

#define BP_MTXC_S_SIZE	2
#define BP_MTXC_S_SHIFT	22
#define BP_MTXC_S_MASK	0x00c00000
#define BP_MTXC_GET_S(bp_mtxc) \
	((((unsigned long)(bp_mtxc)) & BP_MTXC_S_MASK) >> BP_MTXC_S_SHIFT)

#define BP_MTXC_RID_SIZE	8
#define BP_MTXC_RID_SHIFT	24
#define BP_MTXC_RID_MASK	0xff000000
#define BP_MTXC_GET_RID(bp_mtxc) \
	((((unsigned long)(bp_mtxc)) & BP_MTXC_RID_MASK) >> BP_MTXC_RID_SHIFT)

#endif // BP_REG_H
