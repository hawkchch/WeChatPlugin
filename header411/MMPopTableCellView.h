//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MMImageView, MMTextField;

@interface MMPopTableCellView : NSTableCellView
{
    MMImageView *_icon;
    MMTextField *_title;
    MMTextField *_subtitle;
}

@property(retain, nonatomic) MMTextField *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) MMTextField *title; // @synthesize title=_title;
@property(retain, nonatomic) MMImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
