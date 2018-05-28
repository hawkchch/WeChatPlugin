//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface GetTransTextResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasMsgCount:1;
    unsigned int hasToLang:1;
    unsigned int msgCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableMsgListList;
    NSString *toLang;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetToLang:) NSString *toLang; // @synthesize toLang;
@property(readonly, nonatomic) BOOL hasToLang; // @synthesize hasToLang;
@property(retain, nonatomic) NSMutableArray *mutableMsgListList; // @synthesize mutableMsgListList;
@property(nonatomic, setter=SetMsgCount:) unsigned int msgCount; // @synthesize msgCount;
@property(readonly, nonatomic) BOOL hasMsgCount; // @synthesize hasMsgCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addMsgList:(id)arg1;
- (void)addMsgListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *msgList; // @dynamic msgList;
- (id)msgListList;
- (id)init;

@end

