//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface FriendGroup : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned int hasGroupName:1;
    unsigned int groupId;
    NSString *groupName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetGroupName:) NSString *groupName; // @synthesize groupName;
@property(readonly, nonatomic) BOOL hasGroupName; // @synthesize hasGroupName;
@property(nonatomic, setter=SetGroupId:) unsigned int groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

