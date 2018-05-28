//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMMessageFileServiceExt.h"
#import "MMCDNDownloadMgrExt.h"
#import "MMService.h"

@class MessageData, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface MessageBatchExportMgr : MMService <MMCDNDownloadMgrExt, IMMMessageFileServiceExt, MMService>
{
    NSString *m_nsExportTaskId;
    NSString *m_nsDestExportPath;
    BOOL m_isDoingBatchExport;
    NSRecursiveLock *m_oLock;
    NSObject<OS_dispatch_queue> *m_msgExportQueue;
    NSMutableDictionary *m_dictCanExportMsg;
    NSRecursiveLock *m_oLockForDictCanExportMsg;
    NSMutableDictionary *m_dictNeedDownloadMsg;
    NSRecursiveLock *m_oLockForDictNeedDownloadMsg;
    unsigned int m_uiTotalFileToExport;
    unsigned int m_uiExportedFileCount;
    unsigned int m_uiEPFailedFileCount;
    NSMutableArray *m_exportFailedMsgList;
    NSMutableDictionary *m_dictExportFailedErrMsg;
    BOOL m_bShouldShowExportProgress;
    MessageData *m_currentExportMsgData;
    unsigned int m_uiSelectMsgCount;
    unsigned int m_uiDownloadedMsgCnt;
    unsigned int m_uiNeedDownloadMsgCnt;
    unsigned int m_uiExpiredMsgCnt;
    unsigned int m_uiServerFaultsMsgCnt;
    unsigned int m_uiClientFaultsMsgCnt;
    unsigned int m_uiCanceledMsgCnt;
    unsigned int m_uiSaveFaultsMsgCnt;
}

- (void).cxx_destruct;
- (void)startCdnDownloadFail:(id)arg1;
- (void)messageFileService:(id)arg1 didFailDownloadWithMessage:(id)arg2;
- (void)cdnDownloadMgrDidCancelledDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)cdnDownloadMgrDidFailedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)cdnDownloadMgrDidFinishedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)doClear;
- (void)exportFinishedWithMessage:(id)arg1 isSuccess:(BOOL)arg2 errMsg:(id)arg3;
- (id)pathWithoutDuplicates:(id)arg1;
- (void)doExportWithMessage:(id)arg1;
- (BOOL)BatchExportToDestExportPath:(id)arg1 canExportMsgList:(id)arg2 needDownloadMsgList:(id)arg3 selectedMsgCount:(unsigned int)arg4;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

