//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class MMResInfoPackedInfo, NSData, NSMutableArray, NSString;

@interface MMResInfo : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    BOOL _isEncrypt;
    BOOL _isCompress;
    BOOL _isTemp;
    unsigned int _crc32;
    unsigned int _supportVersion;
    unsigned int _reportId;
    unsigned int _resInfoId;
    unsigned int _resType;
    unsigned int _accessTime;
    unsigned int _resSubType;
    unsigned int _eid;
    unsigned int _fileId;
    unsigned int _createTime;
    unsigned int _expireTime;
    long long lastInsertedRowID;
    NSString *_resMd5;
    NSString *_resOriginalMd5;
    long long _offset;
    long long _chunkLength;
    NSString *_sampleId;
    NSData *_signatureData;
    NSMutableArray *_arrSignatureDataInfo;
    NSString *_resUrlMd5;
    NSString *_appId;
    NSString *_localSubPath;
    NSString *_version;
    NSString *_domain;
    unsigned long long _size;
    MMResInfoPackedInfo *_m_packedInfo;
}

+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)isTemp;
+ (const struct WCTProperty *)isCompress;
+ (const struct WCTProperty *)isEncrypt;
+ (const struct WCTProperty *)size;
+ (const struct WCTProperty *)expireTime;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)fileId;
+ (const struct WCTProperty *)eid;
+ (const struct WCTProperty *)resSubType;
+ (const struct WCTProperty *)domain;
+ (const struct WCTProperty *)accessTime;
+ (const struct WCTProperty *)version;
+ (const struct WCTProperty *)resType;
+ (const struct WCTProperty *)localSubPath;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)resUrlMd5;
+ (const struct WCTProperty *)resInfoId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) MMResInfoPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(nonatomic) BOOL isTemp; // @synthesize isTemp=_isTemp;
@property(nonatomic) BOOL isCompress; // @synthesize isCompress=_isCompress;
@property(nonatomic) BOOL isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int fileId; // @synthesize fileId=_fileId;
@property(nonatomic) unsigned int eid; // @synthesize eid=_eid;
@property(nonatomic) unsigned int resSubType; // @synthesize resSubType=_resSubType;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int accessTime; // @synthesize accessTime=_accessTime;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;
@property(retain, nonatomic) NSString *localSubPath; // @synthesize localSubPath=_localSubPath;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *resUrlMd5; // @synthesize resUrlMd5=_resUrlMd5;
@property(nonatomic) unsigned int resInfoId; // @synthesize resInfoId=_resInfoId;
@property(retain, nonatomic) NSMutableArray *arrSignatureDataInfo; // @synthesize arrSignatureDataInfo=_arrSignatureDataInfo;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
@property(nonatomic) unsigned int supportVersion; // @synthesize supportVersion=_supportVersion;
@property(nonatomic) long long chunkLength; // @synthesize chunkLength=_chunkLength;
@property(nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *resOriginalMd5; // @synthesize resOriginalMd5=_resOriginalMd5;
@property(retain, nonatomic) NSString *resMd5; // @synthesize resMd5=_resMd5;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;
- (long long)compareAccessTimeByResInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end
