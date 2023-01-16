//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UICollectionView, UILabel;

@interface TVSMGameControllersModuleOverlayView : UIView
{
    _Bool _showingDeviceOptionsHint;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    CDUnknownBlockType _menuButtonHandler;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_deviceOptionsHintLabel;	// 40 = 0x28
    UIView *_collectionViewWrapperView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000077a0
@property(readonly, nonatomic) UIView *collectionViewWrapperView; // @synthesize collectionViewWrapperView=_collectionViewWrapperView;
@property(readonly, nonatomic) UILabel *deviceOptionsHintLabel; // @synthesize deviceOptionsHintLabel=_deviceOptionsHintLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType menuButtonHandler; // @synthesize menuButtonHandler=_menuButtonHandler;
@property(nonatomic) _Bool showingDeviceOptionsHint; // @synthesize showingDeviceOptionsHint=_showingDeviceOptionsHint;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)_collectionViewWrapperViewGradientMask;	// IMP=0x00000000000072a0
- (void)_handleMenuPress:(id)arg1;	// IMP=0x0000000000007220
- (void)layoutSubviews;	// IMP=0x0000000000007000
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000005d80

@end

