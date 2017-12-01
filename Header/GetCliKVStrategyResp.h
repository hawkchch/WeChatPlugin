//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GetCliKVStrategyResp : PBGeneratedMessage
{
    unsigned int hasRet:1;
    unsigned int hasGeneralVersion:1;
    unsigned int hasSpecialVersion:1;
    unsigned int hasWhiteOrBlackUinVersion:1;
    unsigned int hasMaxValidDataTime:1;
    unsigned int hasBanReportTime:1;
    unsigned int hasAskSvrStrategyInterval:1;
    unsigned int hasKvgeneralVersion:1;
    unsigned int hasKvspecialVersion:1;
    unsigned int hasKvwhiteOrBlackUinVersion:1;
    int ret;
    unsigned int generalVersion;
    unsigned int specialVersion;
    unsigned int whiteOrBlackUinVersion;
    unsigned int maxValidDataTime;
    unsigned int banReportTime;
    unsigned int askSvrStrategyInterval;
    unsigned int kvgeneralVersion;
    unsigned int kvspecialVersion;
    unsigned int kvwhiteOrBlackUinVersion;
    NSMutableArray *mutableGeneralStrategiesList;
    NSMutableArray *mutableSpecialStrategiesList;
    NSMutableArray *mutableWhiteOrBlackUinStrategiesList;
    NSMutableArray *mutableKvgeneralStrategiesList;
    NSMutableArray *mutableKvspecialStrategiesList;
    NSMutableArray *mutableKvwhiteOrBlackUinStrategiesList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableKvwhiteOrBlackUinStrategiesList; // @synthesize mutableKvwhiteOrBlackUinStrategiesList;
@property(retain, nonatomic) NSMutableArray *mutableKvspecialStrategiesList; // @synthesize mutableKvspecialStrategiesList;
@property(retain, nonatomic) NSMutableArray *mutableKvgeneralStrategiesList; // @synthesize mutableKvgeneralStrategiesList;
@property(nonatomic, setter=SetKvwhiteOrBlackUinVersion:) unsigned int kvwhiteOrBlackUinVersion; // @synthesize kvwhiteOrBlackUinVersion;
@property(readonly, nonatomic) BOOL hasKvwhiteOrBlackUinVersion; // @synthesize hasKvwhiteOrBlackUinVersion;
@property(nonatomic, setter=SetKvspecialVersion:) unsigned int kvspecialVersion; // @synthesize kvspecialVersion;
@property(readonly, nonatomic) BOOL hasKvspecialVersion; // @synthesize hasKvspecialVersion;
@property(nonatomic, setter=SetKvgeneralVersion:) unsigned int kvgeneralVersion; // @synthesize kvgeneralVersion;
@property(readonly, nonatomic) BOOL hasKvgeneralVersion; // @synthesize hasKvgeneralVersion;
@property(nonatomic, setter=SetAskSvrStrategyInterval:) unsigned int askSvrStrategyInterval; // @synthesize askSvrStrategyInterval;
@property(readonly, nonatomic) BOOL hasAskSvrStrategyInterval; // @synthesize hasAskSvrStrategyInterval;
@property(nonatomic, setter=SetBanReportTime:) unsigned int banReportTime; // @synthesize banReportTime;
@property(readonly, nonatomic) BOOL hasBanReportTime; // @synthesize hasBanReportTime;
@property(nonatomic, setter=SetMaxValidDataTime:) unsigned int maxValidDataTime; // @synthesize maxValidDataTime;
@property(readonly, nonatomic) BOOL hasMaxValidDataTime; // @synthesize hasMaxValidDataTime;
@property(retain, nonatomic) NSMutableArray *mutableWhiteOrBlackUinStrategiesList; // @synthesize mutableWhiteOrBlackUinStrategiesList;
@property(retain, nonatomic) NSMutableArray *mutableSpecialStrategiesList; // @synthesize mutableSpecialStrategiesList;
@property(retain, nonatomic) NSMutableArray *mutableGeneralStrategiesList; // @synthesize mutableGeneralStrategiesList;
@property(nonatomic, setter=SetWhiteOrBlackUinVersion:) unsigned int whiteOrBlackUinVersion; // @synthesize whiteOrBlackUinVersion;
@property(readonly, nonatomic) BOOL hasWhiteOrBlackUinVersion; // @synthesize hasWhiteOrBlackUinVersion;
@property(nonatomic, setter=SetSpecialVersion:) unsigned int specialVersion; // @synthesize specialVersion;
@property(readonly, nonatomic) BOOL hasSpecialVersion; // @synthesize hasSpecialVersion;
@property(nonatomic, setter=SetGeneralVersion:) unsigned int generalVersion; // @synthesize generalVersion;
@property(readonly, nonatomic) BOOL hasGeneralVersion; // @synthesize hasGeneralVersion;
@property(nonatomic, setter=SetRet:) int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
- (void).cxx_destruct;
- (void)addKvwhiteOrBlackUinStrategies:(id)arg1;
- (void)addKvwhiteOrBlackUinStrategiesFromArray:(id)arg1;
- (void)addKvspecialStrategies:(id)arg1;
- (void)addKvspecialStrategiesFromArray:(id)arg1;
- (void)addKvgeneralStrategies:(id)arg1;
- (void)addKvgeneralStrategiesFromArray:(id)arg1;
- (void)addWhiteOrBlackUinStrategies:(id)arg1;
- (void)addWhiteOrBlackUinStrategiesFromArray:(id)arg1;
- (void)addSpecialStrategies:(id)arg1;
- (void)addSpecialStrategiesFromArray:(id)arg1;
- (void)addGeneralStrategies:(id)arg1;
- (void)addGeneralStrategiesFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *kvwhiteOrBlackUinStrategies; // @dynamic kvwhiteOrBlackUinStrategies;
- (id)kvwhiteOrBlackUinStrategiesList;
@property(retain, nonatomic) NSMutableArray *kvspecialStrategies; // @dynamic kvspecialStrategies;
- (id)kvspecialStrategiesList;
@property(retain, nonatomic) NSMutableArray *kvgeneralStrategies; // @dynamic kvgeneralStrategies;
- (id)kvgeneralStrategiesList;
@property(retain, nonatomic) NSMutableArray *whiteOrBlackUinStrategies; // @dynamic whiteOrBlackUinStrategies;
- (id)whiteOrBlackUinStrategiesList;
@property(retain, nonatomic) NSMutableArray *specialStrategies; // @dynamic specialStrategies;
- (id)specialStrategiesList;
@property(retain, nonatomic) NSMutableArray *generalStrategies; // @dynamic generalStrategies;
- (id)generalStrategiesList;
- (id)init;

@end
