//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, AVUnifiedPlayerCustomOverlayMenuProvider, AVUnifiedPlayerLateNightModeMenuProvider, AVUnifiedPlayerMediaOptionMenuProvider, AVUnifiedPlayerMenuGroupProvider, AVUnifiedPlayerObservingMenuProvider, AVUnifiedPlayerPictureInPictureMenuProvider, AVUnifiedPlayerPlaybackSpeedMenuProvider, NSArray, NSHashTable, NSMapTable, NSString;
@protocol AVInfoPanelMediaOptionsController, AVUnifiedPlayerToolbarMenuDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerToolbarMenuController : NSObject
{
    NSArray *_combinedMenuElements;	// 8 = 0x8
    NSArray *_toolbarControlItems;	// 16 = 0x10
    id <AVUnifiedPlayerToolbarMenuDelegate> _delegate;	// 24 = 0x18
    AVPlayerViewController *_playerViewController;	// 32 = 0x20
    id <AVInfoPanelMediaOptionsController> _audibleMediaOptionsController;	// 40 = 0x28
    id <AVInfoPanelMediaOptionsController> _legibleMediaOptionsController;	// 48 = 0x30
    long long _bestAvailableAudioFormat;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_prepareSource;	// 64 = 0x40
    NSArray *_providers;	// 72 = 0x48
    AVUnifiedPlayerCustomOverlayMenuProvider *_customOverlayMenuProvider;	// 80 = 0x50
    AVUnifiedPlayerObservingMenuProvider *_customMenuProvider;	// 88 = 0x58
    AVUnifiedPlayerLateNightModeMenuProvider *_lateNightModeMenuProvider;	// 96 = 0x60
    AVUnifiedPlayerPlaybackSpeedMenuProvider *_playbackSpeedMenuProvider;	// 104 = 0x68
    AVUnifiedPlayerMediaOptionMenuProvider *_audibleLanguageMenuProvider;	// 112 = 0x70
    AVUnifiedPlayerMenuGroupProvider *_audioSettingsGroupMenuProvider;	// 120 = 0x78
    AVUnifiedPlayerMediaOptionMenuProvider *_legibleLanguageMenuProvider;	// 128 = 0x80
    AVUnifiedPlayerPictureInPictureMenuProvider *_pictureInPictureMenuProvider;	// 136 = 0x88
    NSHashTable *_contextMenuConduits;	// 144 = 0x90
    unsigned long long _controlItemGenerationTag;	// 152 = 0x98
    NSMapTable *_elementToControlItemMap;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000008f98
@property(readonly, nonatomic) NSMapTable *elementToControlItemMap; // @synthesize elementToControlItemMap=_elementToControlItemMap;
@property(readonly, nonatomic) unsigned long long controlItemGenerationTag; // @synthesize controlItemGenerationTag=_controlItemGenerationTag;
@property(readonly, nonatomic) NSHashTable *contextMenuConduits; // @synthesize contextMenuConduits=_contextMenuConduits;
@property(readonly, nonatomic) AVUnifiedPlayerPictureInPictureMenuProvider *pictureInPictureMenuProvider; // @synthesize pictureInPictureMenuProvider=_pictureInPictureMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerMediaOptionMenuProvider *legibleLanguageMenuProvider; // @synthesize legibleLanguageMenuProvider=_legibleLanguageMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerMenuGroupProvider *audioSettingsGroupMenuProvider; // @synthesize audioSettingsGroupMenuProvider=_audioSettingsGroupMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerMediaOptionMenuProvider *audibleLanguageMenuProvider; // @synthesize audibleLanguageMenuProvider=_audibleLanguageMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerPlaybackSpeedMenuProvider *playbackSpeedMenuProvider; // @synthesize playbackSpeedMenuProvider=_playbackSpeedMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerLateNightModeMenuProvider *lateNightModeMenuProvider; // @synthesize lateNightModeMenuProvider=_lateNightModeMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerObservingMenuProvider *customMenuProvider; // @synthesize customMenuProvider=_customMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerCustomOverlayMenuProvider *customOverlayMenuProvider; // @synthesize customOverlayMenuProvider=_customOverlayMenuProvider;
@property(readonly, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *prepareSource; // @synthesize prepareSource=_prepareSource;
@property(nonatomic) long long bestAvailableAudioFormat; // @synthesize bestAvailableAudioFormat=_bestAvailableAudioFormat;
@property(retain, nonatomic) id <AVInfoPanelMediaOptionsController> legibleMediaOptionsController; // @synthesize legibleMediaOptionsController=_legibleMediaOptionsController;
@property(retain, nonatomic) id <AVInfoPanelMediaOptionsController> audibleMediaOptionsController; // @synthesize audibleMediaOptionsController=_audibleMediaOptionsController;
@property(nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) __weak id <AVUnifiedPlayerToolbarMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_firstConduitWithMenuIdentifier:(id)arg1;	// IMP=0x0000000000008cc5
- (void)_didUpdateBestAvailableAudioFormat;	// IMP=0x0000000000008c76
- (void)_didAddContextMenuConduit:(id)arg1;	// IMP=0x0000000000008bdb
- (id)_findMenuAdjacentToMenuElement:(id)arg1 withSearchStepSize:(long long)arg2;	// IMP=0x0000000000008998
- (id)_controlItemsForMenuElements:(id)arg1 withGenerationTag:(unsigned long long)arg2 elementMapping:(id)arg3 atDepth:(unsigned long long)arg4;	// IMP=0x00000000000087d8
- (id)_controlItemsForMenuElements:(id)arg1 withGenerationTag:(unsigned long long)arg2 elementMapping:(id)arg3;	// IMP=0x00000000000087c3
- (id)_controlItemForMenu:(id)arg1 withGenerationTag:(unsigned long long)arg2;	// IMP=0x000000000000858f
- (id)_controlItemForAction:(id)arg1 withGenerationTag:(unsigned long long)arg2;	// IMP=0x000000000000835b
- (void)_handleControlItemCallbackForMenu:(id)arg1 withSender:(id)arg2 andGenerationTag:(unsigned long long)arg3;	// IMP=0x00000000000082c7
- (void)_handleControlItemCallbackForAction:(id)arg1 withSender:(id)arg2 andGenerationTag:(unsigned long long)arg3;	// IMP=0x0000000000008209
- (id)_pictureInPictureController;	// IMP=0x00000000000080de
- (void)_updatePlaybackSpeeds;	// IMP=0x0000000000008006
- (void)_updatePiPAvailability;	// IMP=0x0000000000007d8f
- (id)_nowPlayingPlayerViewController;	// IMP=0x0000000000007d1d
- (id)_combinedProviderMenuElements;	// IMP=0x0000000000007b29
- (void)_setupProviders;	// IMP=0x00000000000075c4
- (void)_setNeedsPrepareForDisplay;	// IMP=0x00000000000075b1
- (void)mediaOptionsControllerDidUpdateSelectedMediaOptionIndex:(id)arg1;	// IMP=0x0000000000007433
- (void)mediaOptionsControllerDidUpdateResolvedMediaOptions:(id)arg1;	// IMP=0x0000000000007413
- (void)observingMenuProviderDidUpdateMenuElements:(id)arg1;	// IMP=0x00000000000073f9
- (void)customOverlayMenuDidSelectAction:(id)arg1;	// IMP=0x00000000000073bc
- (_Bool)customOverlayIsEnabled:(id)arg1;	// IMP=0x0000000000007359
- (void)pictureInPictureMenuDidSelectStartAction:(id)arg1;	// IMP=0x00000000000071a8
- (id)findMenuAdjacentToPiPMenuWithSearchStepSize:(long long)arg1;	// IMP=0x000000000000713d
- (id)findMenuAdjacentToMenu:(id)arg1 withSearchStepSize:(long long)arg2;	// IMP=0x000000000000712b
- (void)removeContextMenuConduit:(id)arg1;	// IMP=0x0000000000007112
- (void)addContextMenuConduit:(id)arg1;	// IMP=0x00000000000070ad
- (void)prepareForDisplay;	// IMP=0x0000000000006f09
@property(readonly, nonatomic) NSArray *toolbarControlItems; // @synthesize toolbarControlItems=_toolbarControlItems;
@property(readonly, nonatomic) NSArray *combinedMenuElements; // @synthesize combinedMenuElements=_combinedMenuElements;
@property(copy, nonatomic) NSArray *userMenuElements;
- (void)dealloc;	// IMP=0x0000000000006c05
- (id)init;	// IMP=0x0000000000006ab6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

