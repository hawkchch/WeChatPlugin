//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFavoriteItemViewerWindow.h"

#import "NSSharingServiceDelegate.h"

@class AVPlayer, AVPlayerLayer, NSString;

@interface MMFavoriteItemSightViewerWindow : MMFavoriteItemViewerWindow <NSSharingServiceDelegate>
{
    BOOL _addedReplayObserver;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
}

@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)contentForSharing;
- (id)getSightPath;
- (void)close;
- (void)openWith:(id)arg1;
- (void)forwardContentToContacts:(id)arg1;
- (id)supportedActions;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (struct CGSize)sizeForContent;
- (void)showWindowAnimated:(BOOL)arg1;
- (void)didFinishClosing:(BOOL)arg1;
- (void)willStartClosing:(BOOL)arg1;
- (void)didFinishOpening:(BOOL)arg1;
- (void)willStartOpening:(BOOL)arg1;
- (void)loadContent;
- (void)dealloc;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

