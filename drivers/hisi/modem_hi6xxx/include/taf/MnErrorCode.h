/******************************************************************************

              Copyright (C), 2001-2011, Huawei Tech. Co., Ltd.

 ******************************************************************************
  File name   : MnErrorCode.h
  Version     : V100R002
  Author      : D49431
  Date        : 2008-01-09
  Description : This file contains error codes of MN API.
  History     :
  1.Date         : 2008-01-09
    Author       : D49431
    Modification : Create
  2.Date         : 2009-01-12
    Author       : f62575
    Modification : 问题单号:AT2D07548, 短信中心查询操作失败需要返回准确原因
  3.Date         : 2009-04-01
    Author       : z40661
    Modification : 问题单号:AT2D09786, 用AT+CMGD=,4删除短信时，长时间不回应，导致自动化脚本检测不到单板
  4.日    期   : 2009年05月11日
    作    者   : f62575
    修改内容   : 问题单号：AT2D11136，PICS表设置为仅支持SM存储，执行GCF测试用例34.2.5.3，测试用例失败

******************************************************************************/
#ifndef  MN_ERROR_CODE_H
#define  MN_ERROR_CODE_H

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  1 常量定义
*****************************************************************************/

/* Class of error */
#define    MN_ERR_CLASS_COMMON                              0
#define    MN_ERR_CLASS_PH                                  0x100
#define    MN_ERR_CLASS_CS_CALL                             0x200
#define    MN_ERR_CLASS_PS_CALL                             0x300
#define    MN_ERR_CLASS_MSG                                 0x400
#define    MN_ERR_CLASS_SS                                  0x500
/* Added by w00176964 for SS FDN&Call Control, 2013-5-23, begin */
#define    MN_ERR_CLASS_SPM                                 (0x600)
/* Added by w00176964 for SS FDN&Call Control, 2013-5-23, end */


/* Common error codes */
#define    MN_ERR_NO_ERROR                                  (MN_ERR_CLASS_COMMON + 0)
#define    MN_ERR_UNSPECIFIED                               (MN_ERR_CLASS_COMMON + 1)
#define    MN_ERR_NULLPTR                                   (MN_ERR_CLASS_COMMON + 2)
#define    MN_ERR_NOMEM                                     (MN_ERR_CLASS_COMMON + 3)
#define    MN_ERR_INVALIDPARM                               (MN_ERR_CLASS_COMMON + 4)
#define    MN_ERR_SYS_BUSY                                  (MN_ERR_CLASS_COMMON + 5)
#define    MN_ERR_INVALID_BCD                               (MN_ERR_CLASS_COMMON + 6)
#define    MN_ERR_INVALID_ASCII                             (MN_ERR_CLASS_COMMON + 7)
#define    MN_ERR_SEND_MSG_ERROR                            (MN_ERR_CLASS_COMMON + 8)
#define    MN_ERR_USIM_SIM_NOT_EXIST                        (MN_ERR_CLASS_COMMON + 9)               /*USIM卡不存在*/
#define    MN_ERR_CLIENTID_NO_FREE                          (MN_ERR_CLASS_COMMON + 10)
#define    MN_ERR_CLIENTID_NOT_EXIST                        (MN_ERR_CLASS_COMMON + 11)
#define    MN_ERR_CALLBACK_FUNC_ERROR                       (MN_ERR_CLASS_COMMON + 12)
#define    MN_ERR_USIMM_PIN_NEED                            (MN_ERR_CLASS_COMMON + 13)


/* Error codes of phone API */

/* Error codes of PS call API */


/* Error codes of SMS API */
#define    MN_ERR_CLASS_SMS_INVALID_TPDU                    (MN_ERR_CLASS_MSG + 0)
#define    MN_ERR_CLASS_SMS_INVALID_TPDUTYPE                (MN_ERR_CLASS_MSG + 1)
#define    MN_ERR_CLASS_SMS_NOUSIM                          (MN_ERR_CLASS_MSG + 2)
#define    MN_ERR_CLASS_SMS_NOAVAILDOMAIN                   (MN_ERR_CLASS_MSG + 3)
#define    MN_ERR_CLASS_SMS_USIM_ENVELOPEPENDING            (MN_ERR_CLASS_MSG + 4)
#define    MN_ERR_CLASS_SMS_INTERNAL                        (MN_ERR_CLASS_MSG + 5)
#define    MN_ERR_CLASS_SMS_INVALID_REC                     (MN_ERR_CLASS_MSG + 6)
#define    MN_ERR_CLASS_SMS_EMPTY_REC                       (MN_ERR_CLASS_MSG + 7)
#define    MN_ERR_CLASS_SMS_NVIM                            (MN_ERR_CLASS_MSG + 8)
#define    MN_ERR_CLASS_SMS_UPDATE_USIM                     (MN_ERR_CLASS_MSG + 9)
#define    MN_ERR_CLASS_SMS_NO_SM                           (MN_ERR_CLASS_MSG + 10)
#define    MN_ERR_CLASS_SMS_STORAGE_FULL                    (MN_ERR_CLASS_MSG + 11)
#define    MN_ERR_CLASS_SMS_INVALID_SMSTATUS                (MN_ERR_CLASS_MSG + 12)
#define    MN_ERR_CLASS_SMS_NO_BUFFER                       (MN_ERR_CLASS_MSG + 13)
#define    MN_ERR_CLASS_SMS_INVALID_MTSTATE                 (MN_ERR_CLASS_MSG + 14)
#define    MN_ERR_CLASS_SMS_INVALID_SCADDR                  (MN_ERR_CLASS_MSG + 15)
#define    MN_ERR_CLASS_SMS_INVALID_DESTADDR                (MN_ERR_CLASS_MSG + 16)
#define    MN_ERR_CLASS_SMS_FILE_NOEXIST                    (MN_ERR_CLASS_MSG + 17)
#define    MN_ERR_CLASS_SMS_MSGID_OVERFLOW                  (MN_ERR_CLASS_MSG + 18)
#define    MN_ERR_CLASS_SMS_NO_EFCBMI                       (MN_ERR_CLASS_MSG + 19)
#define    MN_ERR_CLASS_SMS_NO_EFCBMIR                      (MN_ERR_CLASS_MSG + 20)
#define    MN_ERR_CLASS_SMS_INVALID_VPF                     (MN_ERR_CLASS_MSG + 21)
#define    MN_ERR_CLASS_SMS_INVALID_MSG_CODING              (MN_ERR_CLASS_MSG + 22)
#define    MN_ERR_CLASS_SMS_INVALID_MSG_LANG                (MN_ERR_CLASS_MSG + 23)
#define    MN_ERR_CLASS_SMS_INVALID_CODING_GRP              (MN_ERR_CLASS_MSG + 24)
#define    MN_ERR_CLASS_SMS_MSGLEN_OVERFLOW                 (MN_ERR_CLASS_MSG + 25)
#define    MN_ERR_CLASS_SMS_INVALID_DATE                    (MN_ERR_CLASS_MSG + 26)
#define    MN_ERR_CLASS_SMS_INVALID_RELATTTIME              (MN_ERR_CLASS_MSG + 27)
#define    MN_ERR_CLASS_SMS_INVALID_NUMTYPE                 (MN_ERR_CLASS_MSG + 28)
#define    MN_ERR_CLASS_SMS_INVALID_NUMPLAN                 (MN_ERR_CLASS_MSG + 29)
#define    MN_ERR_CLASS_SMS_INVALID_ADDRLEN                 (MN_ERR_CLASS_MSG + 30)
#define    MN_ERR_CLASS_SMS_INVALID_TIMEZONE                (MN_ERR_CLASS_MSG + 31)
#define    MN_ERR_CLASS_SMS_NEED_PIN1                       (MN_ERR_CLASS_MSG + 32)
#define    MN_ERR_CLASS_SMS_NEED_PUK1                       (MN_ERR_CLASS_MSG + 33)
#define    MN_ERR_CLASS_SMS_UNAVAILABLE                     (MN_ERR_CLASS_MSG + 34)
#define    MN_ERR_CLASS_SMS_READING_EFSMSR                  (MN_ERR_CLASS_MSG + 35)
#define    MN_ERR_CLASS_SMS_READING_EFSMS                   (MN_ERR_CLASS_MSG + 36)
#define    MN_ERR_CLASS_SMS_READING_EF                      (MN_ERR_CLASS_MSG + 37)
#define    MN_ERR_CLASS_SMS_CREATE_NODE                     (MN_ERR_CLASS_MSG + 38)
#define    MN_ERR_CLASS_SMS_FEATURE_INAVAILABLE             (MN_ERR_CLASS_MSG + 39)
#define    MN_ERR_CLASS_SMS_USIM_MEM_ERROR                  (MN_ERR_CLASS_MSG + 40)
#define    MN_ERR_CLASS_SMS_FLASH_MEM_CREATE_FILE           (MN_ERR_CLASS_MSG + 41)
#define    MN_ERR_CLASS_SMS_FLASH_MEM_OPEN_FILE             (MN_ERR_CLASS_MSG + 42)
#define    MN_ERR_CLASS_SMS_FLASH_MEM_SEEK_FILE             (MN_ERR_CLASS_MSG + 43)
#define    MN_ERR_CLASS_SMS_FLASH_MEM_READ_FILE             (MN_ERR_CLASS_MSG + 44)
#define    MN_ERR_CLASS_SMS_FLASH_MEM_WRITE_FILE            (MN_ERR_CLASS_MSG + 45)
#define    MN_ERR_CLASS_SMS_FLASH_MEM_TELL_FILE             (MN_ERR_CLASS_MSG + 46)
#define    MN_ERR_CLASS_SMS_FLASH_MEM_NOTEXIST_FILE         (MN_ERR_CLASS_MSG + 47)
#define    MN_ERR_CLASS_SMS_MO_CTRL_USIM_PARA_ERROR         (MN_ERR_CLASS_MSG + 48)
#define    MN_ERR_CLASS_SMS_MO_CTRL_ACTION_NOT_ALLOWED      (MN_ERR_CLASS_MSG + 49)
/* Added by f62575 for 2012082906141, 2012/10/10, begin */
#define    MN_ERR_CLASS_SMS_MOSTATE                         (MN_ERR_CLASS_MSG + 50)
/* Added by f62575 for 2012082906141, 2012/10/10, end */

#define    MN_ERR_CLASS_CBS_CROSS_MID_ERROR                 (MN_ERR_CLASS_MSG + 101)
#define    MN_ERR_CLASS_CBS_NOW_INITING                     (MN_ERR_CLASS_MSG + 102)
#define    MN_ERR_CLASS_CBS_TOO_CBMIDS                      (MN_ERR_CLASS_MSG + 103)
/* Modified by s46746 for SS FDN&Call Control, 2013-05-17, begin */
/* Added by f62575 for C50_IPC Project, 2012/02/23, begin */
#define    MN_ERR_CLASS_FDN_CHECK_DN_FAILURE                (MN_ERR_CLASS_MSG + 104)
#define    MN_ERR_CLASS_FDN_CHECK_SC_FAILURE                (MN_ERR_CLASS_MSG + 105)
/* Added by f62575 for C50_IPC Project, 2012/02/23, end   */
/* Modified by s46746 for SS FDN&Call Control, 2013-05-17, end */
/* Added by f62575 for V9R1 STK升级, 2013-6-26, begin */
#define    MN_ERR_CLASS_INVALID_TP_ADDRESS                  (MN_ERR_CLASS_MSG + 106)
#define    MN_ERR_CLASS_INVALID_TP_UD                       (MN_ERR_CLASS_MSG + 107)
/* Added by f62575 for V9R1 STK升级, 2013-6-26, end */

/* Added by y00245242 for VoLTE_PhaseII 项目, 2013-10-17, begin */
#define    MN_ERR_CLASS_SMS_DOMAIN_SELECTION_FAILURE        (MN_ERR_CLASS_MSG + 108)  /* 业务域选择失败 */
#define    MN_ERR_CLASS_SMS_DOMAIN_SELECTION_TIMER_EXPIRED  (MN_ERR_CLASS_MSG + 109)  /* 业务域选择缓存定时器超时 */
#define    MN_ERR_CLASS_SMS_POWER_OFF                       (MN_ERR_CLASS_MSG + 110)  /* 业务域选择收到关机指示触发缓存处理 */
/* Added by y00245242 for VoLTE_PhaseII 项目, 2013-10-17, end */

/* Added by y00245242 for VoLTE_PhaseIII, 2013-12-25, begin */
#define    MN_ERR_CLASS_SMS_REDIAL_BUFFER_FULL              (MN_ERR_CLASS_MSG + 111)  /* 短信重拨缓存满 */
/* Added by y00245242 for VoLTE_PhaseIII, 2013-12-25, end */

/* Error codes of SS API */


/* Error codes of phone book API */


/* Error codes of SAT API */

/* Added by w00176964 for SS FDN&Call Control, 2013-5-23, begin */
#define    MN_ERR_CLASS_SPM_BEYOND_CONCURRENCY_CAPABILITY                                 (MN_ERR_CLASS_SPM + 0)            /* SPM状态机运行达最大个数 */
/* Added by w00176964 for SS FDN&Call Control, 2013-5-23, end */

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* MN_ERROR_CODE_H */


