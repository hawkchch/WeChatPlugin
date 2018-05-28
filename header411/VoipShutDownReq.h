//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, VoipStatReportData;

@interface VoipShutDownReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFromUsername:1;
    unsigned int hasRoomId:1;
    unsigned int hasRoomKey:1;
    unsigned int hasReportData:1;
    unsigned int hasTimestamp64:1;
    unsigned int hasDuration:1;
    int roomId;
    unsigned int duration;
    BaseRequest *baseRequest;
    NSString *fromUsername;
    long long roomKey;
    VoipStatReportData *reportData;
    unsigned long long timestamp64;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetDuration:) unsigned int duration; // @synthesize duration;
@property(readonly, nonatomic) BOOL hasDuration; // @synthesize hasDuration;
@property(nonatomic, setter=SetTimestamp64:) unsigned long long timestamp64; // @synthesize timestamp64;
@property(readonly, nonatomic) BOOL hasTimestamp64; // @synthesize hasTimestamp64;
@property(retain, nonatomic, setter=SetReportData:) VoipStatReportData *reportData; // @synthesize reportData;
@property(readonly, nonatomic) BOOL hasReportData; // @synthesize hasReportData;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetFromUsername:) NSString *fromUsername; // @synthesize fromUsername;
@property(readonly, nonatomic) BOOL hasFromUsername; // @synthesize hasFromUsername;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

