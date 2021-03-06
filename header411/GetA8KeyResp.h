//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, DeepLinkBitSet, GeneralControlBitSet, JSAPIPermissionBitSet, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetA8KeyResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasFullUrl:1;
    unsigned int hasA8Key:1;
    unsigned int hasActionCode:1;
    unsigned int hasTitle:1;
    unsigned int hasContent:1;
    unsigned int hasJsapipermission:1;
    unsigned int hasGeneralControlBitSet:1;
    unsigned int hasUserName:1;
    unsigned int hasShareUrl:1;
    unsigned int hasScopeCount:1;
    unsigned int hasAntispamTicket:1;
    unsigned int hasSsid:1;
    unsigned int hasMid:1;
    unsigned int hasDeepLinkBitSet:1;
    unsigned int hasJsapicontrolBytes:1;
    unsigned int actionCode;
    unsigned int scopeCount;
    BaseResponse *baseResponse;
    NSString *fullUrl;
    NSString *a8Key;
    NSString *title;
    NSString *content;
    JSAPIPermissionBitSet *jsapipermission;
    GeneralControlBitSet *generalControlBitSet;
    NSString *userName;
    NSString *shareUrl;
    NSMutableArray *mutableScopeListList;
    NSString *antispamTicket;
    NSString *ssid;
    NSString *mid;
    DeepLinkBitSet *deepLinkBitSet;
    SKBuiltinBuffer_t *jsapicontrolBytes;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetJsapicontrolBytes:) SKBuiltinBuffer_t *jsapicontrolBytes; // @synthesize jsapicontrolBytes;
@property(readonly, nonatomic) BOOL hasJsapicontrolBytes; // @synthesize hasJsapicontrolBytes;
@property(retain, nonatomic, setter=SetDeepLinkBitSet:) DeepLinkBitSet *deepLinkBitSet; // @synthesize deepLinkBitSet;
@property(readonly, nonatomic) BOOL hasDeepLinkBitSet; // @synthesize hasDeepLinkBitSet;
@property(retain, nonatomic, setter=SetMid:) NSString *mid; // @synthesize mid;
@property(readonly, nonatomic) BOOL hasMid; // @synthesize hasMid;
@property(retain, nonatomic, setter=SetSsid:) NSString *ssid; // @synthesize ssid;
@property(readonly, nonatomic) BOOL hasSsid; // @synthesize hasSsid;
@property(retain, nonatomic, setter=SetAntispamTicket:) NSString *antispamTicket; // @synthesize antispamTicket;
@property(readonly, nonatomic) BOOL hasAntispamTicket; // @synthesize hasAntispamTicket;
@property(retain, nonatomic) NSMutableArray *mutableScopeListList; // @synthesize mutableScopeListList;
@property(nonatomic, setter=SetScopeCount:) unsigned int scopeCount; // @synthesize scopeCount;
@property(readonly, nonatomic) BOOL hasScopeCount; // @synthesize hasScopeCount;
@property(retain, nonatomic, setter=SetShareUrl:) NSString *shareUrl; // @synthesize shareUrl;
@property(readonly, nonatomic) BOOL hasShareUrl; // @synthesize hasShareUrl;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetGeneralControlBitSet:) GeneralControlBitSet *generalControlBitSet; // @synthesize generalControlBitSet;
@property(readonly, nonatomic) BOOL hasGeneralControlBitSet; // @synthesize hasGeneralControlBitSet;
@property(retain, nonatomic, setter=SetJsapipermission:) JSAPIPermissionBitSet *jsapipermission; // @synthesize jsapipermission;
@property(readonly, nonatomic) BOOL hasJsapipermission; // @synthesize hasJsapipermission;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(nonatomic, setter=SetActionCode:) unsigned int actionCode; // @synthesize actionCode;
@property(readonly, nonatomic) BOOL hasActionCode; // @synthesize hasActionCode;
@property(retain, nonatomic, setter=SetA8Key:) NSString *a8Key; // @synthesize a8Key;
@property(readonly, nonatomic) BOOL hasA8Key; // @synthesize hasA8Key;
@property(retain, nonatomic, setter=SetFullUrl:) NSString *fullUrl; // @synthesize fullUrl;
@property(readonly, nonatomic) BOOL hasFullUrl; // @synthesize hasFullUrl;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addScopeList:(id)arg1;
- (void)addScopeListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
- (id)scopeListList;
- (id)init;

@end

