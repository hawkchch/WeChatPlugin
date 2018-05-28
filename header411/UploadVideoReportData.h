//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UploadVideoReportData : NSObject
{
    unsigned int _m_touin;
    unsigned int _m_nettype;
    unsigned int _m_size;
    unsigned int _m_length;
    unsigned int _m_videobitrate;
    unsigned int _m_audiobitrate;
    unsigned int _m_framerate;
    unsigned int _m_cpvideobitrate;
    unsigned int _m_cpaudiobitrate;
    unsigned int _m_cpframerate;
    unsigned int _m_cplength;
    unsigned int _m_cpsize;
    unsigned int _m_scene;
    unsigned int _m_status;
    NSString *_m_msgsource;
    NSString *_m_fileid;
    NSString *_m_cdnip;
    NSString *_m_newmd5;
    unsigned long long _m_begintime;
    unsigned long long _m_endtime;
    NSString *_m_resolution;
    NSString *_m_cpresolution;
    NSString *_m_newtouin;
}

@property(retain, nonatomic) NSString *m_newtouin; // @synthesize m_newtouin=_m_newtouin;
@property(nonatomic) unsigned int m_status; // @synthesize m_status=_m_status;
@property(nonatomic) unsigned int m_scene; // @synthesize m_scene=_m_scene;
@property(nonatomic) unsigned int m_cpsize; // @synthesize m_cpsize=_m_cpsize;
@property(nonatomic) unsigned int m_cplength; // @synthesize m_cplength=_m_cplength;
@property(nonatomic) unsigned int m_cpframerate; // @synthesize m_cpframerate=_m_cpframerate;
@property(retain, nonatomic) NSString *m_cpresolution; // @synthesize m_cpresolution=_m_cpresolution;
@property(nonatomic) unsigned int m_cpaudiobitrate; // @synthesize m_cpaudiobitrate=_m_cpaudiobitrate;
@property(nonatomic) unsigned int m_cpvideobitrate; // @synthesize m_cpvideobitrate=_m_cpvideobitrate;
@property(retain, nonatomic) NSString *m_resolution; // @synthesize m_resolution=_m_resolution;
@property(nonatomic) unsigned int m_framerate; // @synthesize m_framerate=_m_framerate;
@property(nonatomic) unsigned int m_audiobitrate; // @synthesize m_audiobitrate=_m_audiobitrate;
@property(nonatomic) unsigned int m_videobitrate; // @synthesize m_videobitrate=_m_videobitrate;
@property(nonatomic) unsigned int m_length; // @synthesize m_length=_m_length;
@property(nonatomic) unsigned int m_size; // @synthesize m_size=_m_size;
@property(nonatomic) unsigned long long m_endtime; // @synthesize m_endtime=_m_endtime;
@property(nonatomic) unsigned long long m_begintime; // @synthesize m_begintime=_m_begintime;
@property(retain, nonatomic) NSString *m_newmd5; // @synthesize m_newmd5=_m_newmd5;
@property(retain, nonatomic) NSString *m_cdnip; // @synthesize m_cdnip=_m_cdnip;
@property(retain, nonatomic) NSString *m_fileid; // @synthesize m_fileid=_m_fileid;
@property(nonatomic) unsigned int m_nettype; // @synthesize m_nettype=_m_nettype;
@property(retain, nonatomic) NSString *m_msgsource; // @synthesize m_msgsource=_m_msgsource;
@property(nonatomic) unsigned int m_touin; // @synthesize m_touin=_m_touin;
- (void).cxx_destruct;
- (id)copy;
- (id)logStr;
- (id)init;

@end

