//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMBasePreviewPanelWindowControllerDelegate.h"
#import "MMService.h"

@class MMBasePreviewPanelWindowController, NSString;

@interface MMPreviewPanelUIMgr : MMService <MMBasePreviewPanelWindowControllerDelegate, MMService>
{
    BOOL _isMessageMode;
    id <MMPreviewPanelUIMgrDelegate> _delegate;
    MMBasePreviewPanelWindowController *_previewPanelWindowController;
}

@property(nonatomic) BOOL isMessageMode; // @synthesize isMessageMode=_isMessageMode;
@property(retain, nonatomic) MMBasePreviewPanelWindowController *previewPanelWindowController; // @synthesize previewPanelWindowController=_previewPanelWindowController;
@property(nonatomic) __weak id <MMPreviewPanelUIMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)previewPanelDidClose:(id)arg1;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (BOOL)isDataListContainImgOrFileData:(id)arg1;
- (void)ensurePreviewPanelClose;
- (void)previewPanelHandleCurrentFileParaInfo:(id)arg1 paraInfoList:(id)arg2;
- (void)previewPanelHandleCurrentImageParaInfo:(id)arg1 paraInfoList:(id)arg2;
- (void)previewPanelHandleCurrentFileDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3;
- (void)previewPanelHandleCurrentImageDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3;
- (void)previewPanelHandleCurrentFileDataField:(id)arg1 parentDataField:(id)arg2;
- (void)previewPanelHandleCurrentImageDataField:(id)arg1 parentDataField:(id)arg2;
- (void)previewPanelHandleFileMessage:(id)arg1;
- (void)previewPanelHandleImageMessage:(id)arg1 chatContact:(id)arg2 order:(unsigned long long)arg3;
- (void)previewPanelHandleFileFavItem:(id)arg1;
- (void)previewPanelHandleImageFavItem:(id)arg1 favItemList:(id)arg2;
- (void)openWithCurrentParaInfo:(id)arg1 paraInfoList:(id)arg2;
- (void)openWithCurrentDataField:(id)arg1 parentMessage:(id)arg2 orParentFavItem:(id)arg3;
- (void)openWithCurrentDataField:(id)arg1 parentDataField:(id)arg2;
- (void)openWithFavItemList:(id)arg1 AndInitialSelectedFavItem:(id)arg2;
- (void)openWithChatContact:(id)arg1 InitialSelectedMessage:(id)arg2 AndOrder:(unsigned long long)arg3;
- (BOOL)isPreviewPanelCanHandle:(id)arg1 AndCurrentFavItem:(id)arg2;
- (void)ensurePreviewPanelCloseOnChatContactChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

