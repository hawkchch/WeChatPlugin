//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ECDHKey, SKBuiltinBuffer_t;

@interface AutoAuthRsaReqData : PBGeneratedMessage
{
    unsigned int hasAesEncryptKey:1;
    unsigned int hasCliPubEcdhkey:1;
    SKBuiltinBuffer_t *aesEncryptKey;
    ECDHKey *cliPubEcdhkey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetCliPubEcdhkey:) ECDHKey *cliPubEcdhkey; // @synthesize cliPubEcdhkey;
@property(readonly, nonatomic) BOOL hasCliPubEcdhkey; // @synthesize hasCliPubEcdhkey;
@property(retain, nonatomic, setter=SetAesEncryptKey:) SKBuiltinBuffer_t *aesEncryptKey; // @synthesize aesEncryptKey;
@property(readonly, nonatomic) BOOL hasAesEncryptKey; // @synthesize hasAesEncryptKey;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

