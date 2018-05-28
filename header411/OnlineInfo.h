//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSString, SKBuiltinBuffer_t;

@interface OnlineInfo : PBGeneratedMessage
{
    unsigned int hasDeviceType:1;
    unsigned int hasDeviceId:1;
    unsigned int hasWordingXml:1;
    unsigned int hasClientKey:1;
    unsigned int hasOnlineStatus:1;
    unsigned int hasDeviceHelperType:1;
    unsigned int deviceType;
    unsigned int onlineStatus;
    unsigned int deviceHelperType;
    NSData *deviceId;
    NSString *wordingXml;
    SKBuiltinBuffer_t *clientKey;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetDeviceHelperType:) unsigned int deviceHelperType; // @synthesize deviceHelperType;
@property(readonly, nonatomic) BOOL hasDeviceHelperType; // @synthesize hasDeviceHelperType;
@property(nonatomic, setter=SetOnlineStatus:) unsigned int onlineStatus; // @synthesize onlineStatus;
@property(readonly, nonatomic) BOOL hasOnlineStatus; // @synthesize hasOnlineStatus;
@property(retain, nonatomic, setter=SetClientKey:) SKBuiltinBuffer_t *clientKey; // @synthesize clientKey;
@property(readonly, nonatomic) BOOL hasClientKey; // @synthesize hasClientKey;
@property(retain, nonatomic, setter=SetWordingXml:) NSString *wordingXml; // @synthesize wordingXml;
@property(readonly, nonatomic) BOOL hasWordingXml; // @synthesize hasWordingXml;
@property(retain, nonatomic, setter=SetDeviceId:) NSData *deviceId; // @synthesize deviceId;
@property(readonly, nonatomic) BOOL hasDeviceId; // @synthesize hasDeviceId;
@property(nonatomic, setter=SetDeviceType:) unsigned int deviceType; // @synthesize deviceType;
@property(readonly, nonatomic) BOOL hasDeviceType; // @synthesize hasDeviceType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

