//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageData, NSArray, NSString, SendVideoInfo;

@protocol IMsgExtendOperation <NSObject>
@property(nonatomic) MessageData *m_refMessageData;
- (id)copy;

@optional
- (void)ChangeForBackup;
- (BOOL)cleanupMediaRes;
- (void)clearReaderWraps;
- (BOOL)isAppHDImageExist;
- (NSString *)getAppHDImagePath;
- (BOOL)isAppImgExist;
- (NSString *)getReaderWrapDisplayTitle;
- (void)parseReaderContent;
- (NSString *)getSingleReaderCoverUrl;
- (NSArray *)getReaderWraps;
- (BOOL)isAppBrandMsg;
- (BOOL)isLargeFileMsg;
- (BOOL)isNoteMsg;
- (BOOL)isCustomEmojiMsg;
- (BOOL)isAppTransferMsg;
- (BOOL)isAppHongbaoMsg;
- (BOOL)isAppC2CMsg;
- (BOOL)isAppRecordMsg;
- (BOOL)isTextAppMsg;
- (BOOL)isMultiReaderMsg;
- (BOOL)isSingleReaderMsg;
- (BOOL)isSupportedAppMsg;
- (BOOL)isURLAppMsg;
- (BOOL)isEmojiAppMsg;
- (BOOL)isImgAppMsg;
- (BOOL)isFileAppMsg;
- (unsigned int)getPreviewType;
- (BOOL)isEmotionExist;
- (BOOL)getDownloadThumbStatus:(unsigned int *)arg1;
- (BOOL)isNeedDownloadThumb;
- (NSString *)getThumbPath;
- (BOOL)saveVideoThumb:(SendVideoInfo *)arg1 toUser:(NSString *)arg2;
- (BOOL)saveVideoResource:(SendVideoInfo *)arg1 toUser:(NSString *)arg2;
- (BOOL)isVideoExist;
- (BOOL)isThumbImgExist;
- (BOOL)isImgExist;
- (BOOL)isHDImg;
- (BOOL)saveMsgThumbImg;
- (BOOL)saveMsgImg;
- (BOOL)isVoiceExist;
- (void)SetPlaySounded:(BOOL)arg1;
- (BOOL)IsPlaySounded;
- (void)SetPlayingSoundStatus:(BOOL)arg1;
- (BOOL)IsPlayingSound;
- (BOOL)IsRecording;
- (void)SetPlayed;
- (BOOL)IsDownloadEnded;
- (BOOL)IsUnPlayed;
- (BOOL)SaveMesVoice:(unsigned int)arg1;
- (BOOL)isCanUseCdnDownload;
- (BOOL)isCanUseCdnUpload;
- (void)encodeMsgFieldToXML:(NSString *)arg1;
- (void)parseMsgFieldFromXML;
- (NSString *)getMsgContentWithXMLFormat;
- (void)updateMsgContentForBackup;
- (void)updateContent:(NSString *)arg1;
@end

