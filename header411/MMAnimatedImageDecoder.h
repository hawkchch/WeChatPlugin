//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage;

@interface MMAnimatedImageDecoder : NSObject
{
    BOOL _hasDecodeOneLoop;
    BOOL _isSingleFrame;
    int _currentFrameId;
    int _frameCount;
    NSImage *_currentFrameImage;
    double _currentFrameDuration;
    double _scale;
    struct CGSize _imageSize;
}

+ (void)updateMaxWidth:(unsigned int)arg1;
+ (id)animatedDecoderOfData:(id)arg1;
+ (id)framesOfData:(id)arg1;
+ (int)frameCountForImageData:(id)arg1;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) BOOL isSingleFrame; // @synthesize isSingleFrame=_isSingleFrame;
@property(readonly, nonatomic) BOOL hasDecodeOneLoop; // @synthesize hasDecodeOneLoop=_hasDecodeOneLoop;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) int currentFrameId; // @synthesize currentFrameId=_currentFrameId;
@property(readonly, nonatomic) double currentFrameDuration; // @synthesize currentFrameDuration=_currentFrameDuration;
@property(readonly, nonatomic) NSImage *currentFrameImage; // @synthesize currentFrameImage=_currentFrameImage;
- (void).cxx_destruct;
- (void)seekToNextFrame;

@end

