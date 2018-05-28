//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMBasePreviewPanelWindowController.h"

#import "MMCDNDownloadMgrExt.h"
#import "MMFavoritesMgrExt.h"

@class MMQLPhotoPreviewItem, NSString;

@interface MMFavImgPreviewPanelWindowController : MMBasePreviewPanelWindowController <MMCDNDownloadMgrExt, MMFavoritesMgrExt>
{
    MMQLPhotoPreviewItem *m_currentPreviewingImgItem;
}

- (void).cxx_destruct;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)cdnDownloadMgrDidFinishedDownloadWithFavItemData:(id)arg1 type:(int)arg2 filePath:(id)arg3 taskID:(id)arg4;
- (struct CGRect)pageController:(id)arg1 frameForObject:(id)arg2;
- (void)pageControllerDidEndLiveTransition:(id)arg1;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageControllerWillStartLiveTransition:(id)arg1;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (id)pageController:(id)arg1 viewControllerForIdentifier:(id)arg2;
- (id)pageController:(id)arg1 identifierForObject:(id)arg2;
- (void)openWith:(id)arg1;
- (id)getCurrentPreviewItem;
- (void)show;
- (unsigned long long)indexOfPreviewItemWithFavItem:(id)arg1;
- (void)updatePreviewItem:(id)arg1;
- (void)removePreviewItemWithLocalDataID:(unsigned int)arg1;
- (void)initialPreviewItemListWithFavItemList:(id)arg1 andInitialSelectedFavItem:(id)arg2;
- (void)dealloc;
- (id)initWithFavItemList:(id)arg1 AndInitialSelectedFavItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

