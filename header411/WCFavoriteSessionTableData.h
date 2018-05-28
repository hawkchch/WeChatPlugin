//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString, WCFavoriteSessionTableDataPackedInfo;

@interface WCFavoriteSessionTableData : NSObject <WCTTableCoding>
{
    unsigned int _lastUpdateTime;
    unsigned int _msgCount;
    NSString *_usrName;
    WCFavoriteSessionTableDataPackedInfo *_m_packedInfo;
}

+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)msgCount;
+ (const struct WCTProperty *)lastUpdateTime;
+ (const struct WCTProperty *)usrName;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) WCFavoriteSessionTableDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName=_usrName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

