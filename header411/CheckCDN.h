//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface CheckCDN : PBGeneratedMessage
{
    unsigned int hasDataId:1;
    unsigned int hasFullMd5:1;
    unsigned int hasHead256Md5:1;
    unsigned int hasFullSize:1;
    unsigned int hasDataSourceType:1;
    unsigned int hasDataSourceId:1;
    unsigned int hasIsThumb:1;
    unsigned int fullSize;
    unsigned int dataSourceType;
    unsigned int isThumb;
    NSString *dataId;
    NSString *fullMd5;
    NSString *head256Md5;
    NSString *dataSourceId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetIsThumb:) unsigned int isThumb; // @synthesize isThumb;
@property(readonly, nonatomic) BOOL hasIsThumb; // @synthesize hasIsThumb;
@property(retain, nonatomic, setter=SetDataSourceId:) NSString *dataSourceId; // @synthesize dataSourceId;
@property(readonly, nonatomic) BOOL hasDataSourceId; // @synthesize hasDataSourceId;
@property(nonatomic, setter=SetDataSourceType:) unsigned int dataSourceType; // @synthesize dataSourceType;
@property(readonly, nonatomic) BOOL hasDataSourceType; // @synthesize hasDataSourceType;
@property(nonatomic, setter=SetFullSize:) unsigned int fullSize; // @synthesize fullSize;
@property(readonly, nonatomic) BOOL hasFullSize; // @synthesize hasFullSize;
@property(retain, nonatomic, setter=SetHead256Md5:) NSString *head256Md5; // @synthesize head256Md5;
@property(readonly, nonatomic) BOOL hasHead256Md5; // @synthesize hasHead256Md5;
@property(retain, nonatomic, setter=SetFullMd5:) NSString *fullMd5; // @synthesize fullMd5;
@property(readonly, nonatomic) BOOL hasFullMd5; // @synthesize hasFullMd5;
@property(retain, nonatomic, setter=SetDataId:) NSString *dataId; // @synthesize dataId;
@property(readonly, nonatomic) BOOL hasDataId; // @synthesize hasDataId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

