//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVInfoPanelPlaybackMetadata, UILabel, _AVxOverlayPlaybackAuxiliaryMetadataView;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerPlaybackMetadataViewController : UIViewController
{
    _Bool _hidden;	// 8 = 0x8
    _Bool _proResBadgeVisible;	// 9 = 0x9
    _Bool _HDRBadgeVisible;	// 10 = 0xa
    AVInfoPanelPlaybackMetadata *_playbackMetadata;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    _AVxOverlayPlaybackAuxiliaryMetadataView *_auxiliaryMetadataView;	// 32 = 0x20
}

+ (id)_additionalTextForPlaybackMetadata:(id)arg1;	// IMP=0x006000000007b7a9
+ (unsigned long long)_badgeStyleForPlaybackMetadata:(id)arg1;	// IMP=0x006000000007b790
- (void).cxx_destruct;	// IMP=0x000000000007b623
@property(readonly, nonatomic) _AVxOverlayPlaybackAuxiliaryMetadataView *auxiliaryMetadataView; // @synthesize auxiliaryMetadataView=_auxiliaryMetadataView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic, getter=isHDRBadgeVisible) _Bool HDRBadgeVisible; // @synthesize HDRBadgeVisible=_HDRBadgeVisible;
@property(nonatomic, getter=isProResBadgeVisible) _Bool proResBadgeVisible; // @synthesize proResBadgeVisible=_proResBadgeVisible;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) AVInfoPanelPlaybackMetadata *playbackMetadata; // @synthesize playbackMetadata=_playbackMetadata;
- (void)_updateBadgeVisibility;	// IMP=0x000000000007b506
- (void)_animateView:(CDUnknownBlockType)arg1 conditionally:(_Bool)arg2 withCoordinator:(id)arg3;	// IMP=0x000000000007b3c1
- (void)_hideAnimated:(_Bool)arg1 withCoordinator:(id)arg2;	// IMP=0x000000000007b3a3
- (void)_showAnimated:(_Bool)arg1 withCoordinator:(id)arg2;	// IMP=0x000000000007b385
- (void)_updateAnimated:(_Bool)arg1;	// IMP=0x000000000007b248
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 withCoordinator:(id)arg3;	// IMP=0x000000000007b184
- (void)viewDidLoad;	// IMP=0x000000000007b091
- (void)loadView;	// IMP=0x000000000007ad6e

@end

