//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface GetLoginURLRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUuid:1;
    unsigned int hasFromDeviceId:1;
    BaseRequest *baseRequest;
    NSString *uuid;
    NSData *fromDeviceId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetFromDeviceId:) NSData *fromDeviceId; // @synthesize fromDeviceId;
@property(readonly, nonatomic) BOOL hasFromDeviceId; // @synthesize hasFromDeviceId;
@property(retain, nonatomic, setter=SetUuid:) NSString *uuid; // @synthesize uuid;
@property(readonly, nonatomic) BOOL hasUuid; // @synthesize hasUuid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

