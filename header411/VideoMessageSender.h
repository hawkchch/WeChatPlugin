//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageSender.h"

#import "ICdnComMgrExt.h"
#import "MMCGIDelegate.h"

@class CdnTaskInfo, NSString;

@interface VideoMessageSender : MessageSender <ICdnComMgrExt, MMCGIDelegate>
{
    CdnTaskInfo *_curTaskInfo;
    NSString *m_nsMsgMd5;
    unsigned int m_uMsgCrc32;
}

- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)setThumbImgSize;
- (BOOL)sendUploadVideoRequestWithFileExists:(BOOL)arg1 videoNewMd5:(id)arg2;
- (void)startSending;
- (void)uploadSuccessByCDN:(id)arg1;
- (void)uploadFailByCDN:(int)arg1;
- (void)startUploadVideo;
- (void)startUploadVideoByCDNWithHitCheck:(BOOL)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
