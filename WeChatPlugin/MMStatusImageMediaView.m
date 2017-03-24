//
//  MMStatusImageMediaView.m
//  WeChatTimeLine
//
//  Created by CorbinChen on 2017/3/24.
//  Copyright © 2017年 CorbinChen. All rights reserved.
//

#import "MMStatusImageMediaView.h"

@implementation MMStatusImageMediaView

- (void)awakeFromNib {
    [super awakeFromNib];
    for (NSImageView *imageView in [self imageViews]) {
        imageView.wantsLayer = true;
        imageView.layer.backgroundColor = [NSColor colorWithWhite:0.9 alpha:1.0].CGColor;
        imageView.layer.borderColor = [NSColor whiteColor].CGColor;
        imageView.layer.borderWidth = 0.5;
    }
    _imageViews = @[self.imageView0, self.imageView1, self.imageView2, self.imageView3, self.imageView4, self.imageView5, self.imageView6, self.imageView7, self.imageView8];
}

@end