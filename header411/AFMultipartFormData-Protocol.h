//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDictionary, NSInputStream, NSString, NSURL;

@protocol AFMultipartFormData
- (void)throttleBandwidthWithPacketSize:(unsigned long long)arg1 delay:(double)arg2;
- (void)appendPartWithHeaders:(NSDictionary *)arg1 body:(NSData *)arg2;
- (void)appendPartWithFormData:(NSData *)arg1 name:(NSString *)arg2;
- (void)appendPartWithFileData:(NSData *)arg1 name:(NSString *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4;
- (void)appendPartWithInputStream:(NSInputStream *)arg1 name:(NSString *)arg2 fileName:(NSString *)arg3 length:(long long)arg4 mimeType:(NSString *)arg5;
- (BOOL)appendPartWithFileURL:(NSURL *)arg1 name:(NSString *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4 error:(id *)arg5;
- (BOOL)appendPartWithFileURL:(NSURL *)arg1 name:(NSString *)arg2 error:(id *)arg3;
@end

