//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class AVInfoPanelMediaOption, AVObservationController, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface AVInfoPanelAudioCollectionViewCell : UICollectionViewCell
{
    UIImageView *_checkmarkImageView;	// 8 = 0x8
    UIImageView *_iconImageView;	// 16 = 0x10
    UIImageView *_symbolImageView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIActivityIndicatorView *_pendingSelectView;	// 40 = 0x28
    NSLayoutConstraint *_iconSpaceConstraint;	// 48 = 0x30
    NSLayoutConstraint *_cellWidthConstraint;	// 56 = 0x38
    AVObservationController *_kvoController;	// 64 = 0x40
    _Bool _canBeSelected;	// 72 = 0x48
    _Bool _displayAsSelected;	// 73 = 0x49
    _Bool _pendingSelect;	// 74 = 0x4a
    AVInfoPanelMediaOption *_mediaOption;	// 80 = 0x50
    UIImage *_deviceImage;	// 88 = 0x58
}

+ (double)estimatedWidthForAdornmentsForMediaOption:(id)arg1;	// IMP=0x0060000000107735
- (void).cxx_destruct;	// IMP=0x00000000001074cd
@property(retain, nonatomic) UIImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(nonatomic, getter=isPendingSelect) _Bool pendingSelect; // @synthesize pendingSelect=_pendingSelect;
@property(nonatomic) _Bool displayAsSelected; // @synthesize displayAsSelected=_displayAsSelected;
@property(nonatomic) _Bool canBeSelected; // @synthesize canBeSelected=_canBeSelected;
@property(retain, nonatomic) AVInfoPanelMediaOption *mediaOption; // @synthesize mediaOption=_mediaOption;
- (id)_checkmarkImageIfSelected;	// IMP=0x0000000000107439
- (void)_updateIconConstraint;	// IMP=0x00000000001073be
- (_Bool)_haveImage;	// IMP=0x0000000000107380
- (void)_updateAppearance;	// IMP=0x0000000000107156
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000107115
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000010706b
- (void)prepareForReuse;	// IMP=0x0000000000106fe1
- (void)constrainWidthTo:(double)arg1;	// IMP=0x0000000000106eff
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000106eb4
@property(copy, nonatomic) NSString *title;
- (void)dealloc;	// IMP=0x0000000000106919
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000105b9f
- (long long)_textAlignmentForUserInterfaceLayout;	// IMP=0x0000000000105b7d

@end

