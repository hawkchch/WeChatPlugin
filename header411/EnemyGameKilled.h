//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface EnemyGameKilled : PBGeneratedMessage
{
    unsigned int hasType:1;
    unsigned int hasCount:1;
    unsigned int hasGeneralCount:1;
    unsigned int hasUsedCount:1;
    unsigned int type;
    unsigned int count;
    unsigned int generalCount;
    unsigned int usedCount;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetUsedCount:) unsigned int usedCount; // @synthesize usedCount;
@property(readonly, nonatomic) BOOL hasUsedCount; // @synthesize hasUsedCount;
@property(nonatomic, setter=SetGeneralCount:) unsigned int generalCount; // @synthesize generalCount;
@property(readonly, nonatomic) BOOL hasGeneralCount; // @synthesize hasGeneralCount;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

