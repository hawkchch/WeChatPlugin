//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface GetLastestExpressInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasExpressCount:1;
    unsigned int hasRetCode:1;
    unsigned int hasRetMsg:1;
    unsigned int expressCount;
    int retCode;
    BaseResponse *baseResponse;
    NSMutableArray *mutableExpressListList;
    NSString *retMsg;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRetMsg:) NSString *retMsg; // @synthesize retMsg;
@property(readonly, nonatomic) BOOL hasRetMsg; // @synthesize hasRetMsg;
@property(nonatomic, setter=SetRetCode:) int retCode; // @synthesize retCode;
@property(readonly, nonatomic) BOOL hasRetCode; // @synthesize hasRetCode;
@property(nonatomic, setter=SetExpressCount:) unsigned int expressCount; // @synthesize expressCount;
@property(readonly, nonatomic) BOOL hasExpressCount; // @synthesize hasExpressCount;
@property(retain, nonatomic) NSMutableArray *mutableExpressListList; // @synthesize mutableExpressListList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addExpressList:(id)arg1;
- (void)addExpressListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *expressList; // @dynamic expressList;
- (id)expressListList;
- (id)init;

@end

