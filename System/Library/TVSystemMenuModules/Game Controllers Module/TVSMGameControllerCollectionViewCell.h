//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSString, UIActivityIndicatorView, UIImageView, UILabel, UILayoutGuide, UIView, _UIFloatingContentView;

@interface TVSMGameControllerCollectionViewCell : UICollectionViewCell
{
    _Bool _showingActivityIndicator;	// 8 = 0x8
    NSString *_imageSymbolName;	// 16 = 0x10
    NSString *_accessoryImageSymbolName;	// 24 = 0x18
    _UIFloatingContentView *_floatingContentView;	// 32 = 0x20
    UIView *_backgroundColorView;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UILabel *_subtitleLabel;	// 64 = 0x40
    UIImageView *_accessoryImageView;	// 72 = 0x48
    UIActivityIndicatorView *_activityIndicatorView;	// 80 = 0x50
    UILayoutGuide *_accessoryLayoutGuide;	// 88 = 0x58
    NSArray *_volatileContraints;	// 96 = 0x60
}

+ (void)_configureFloatingContentViewAppearance;	// IMP=0x0060000000004230
- (void).cxx_destruct;	// IMP=0x0000000000004c20
@property(retain, nonatomic) NSArray *volatileContraints; // @synthesize volatileContraints=_volatileContraints;
@property(readonly, nonatomic) UILayoutGuide *accessoryLayoutGuide; // @synthesize accessoryLayoutGuide=_accessoryLayoutGuide;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(nonatomic) _Bool showingActivityIndicator; // @synthesize showingActivityIndicator=_showingActivityIndicator;
@property(copy, nonatomic) NSString *accessoryImageSymbolName; // @synthesize accessoryImageSymbolName=_accessoryImageSymbolName;
@property(copy, nonatomic) NSString *imageSymbolName; // @synthesize imageSymbolName=_imageSymbolName;
- (void)_updateColors;	// IMP=0x0000000000004740
- (void)_updateVisibleAccessoryView;	// IMP=0x0000000000004650
- (unsigned long long)_floatingContentViewControlState;	// IMP=0x0000000000004580
- (void)_updateFloatingContentViewControlState;	// IMP=0x00000000000044e0
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x00000000000043e0
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000004160
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000004090
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000003fc0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000003e00
- (void)prepareForReuse;	// IMP=0x0000000000003d80
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000003c90
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000003c70
- (void)updateConstraints;	// IMP=0x0000000000003a00
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000016c0

@end

