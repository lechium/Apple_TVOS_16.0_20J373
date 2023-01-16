//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class UIColor, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl
{
    UITableViewCell *_cell;	// 176 = 0xb0
    struct CGPoint _downPoint;	// 184 = 0xb8
    double _focalY;	// 200 = 0xc8
    double _focalHeight;	// 208 = 0xd0
    UIImageView *_imageView;	// 216 = 0xd8
    UIColor *_accessoryTintColor;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000e1617a
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
- (id)_imageView;	// IMP=0x0000000000e16154
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000e16108
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e160b3
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e16025
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e15f86
- (_Bool)shouldTrack;	// IMP=0x0000000000e15f31
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000e15e85
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000e15e2b
- (void)_updateImageView;	// IMP=0x0000000000e15dd7
- (void)layoutSubviews;	// IMP=0x0000000000e15cd9
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;	// IMP=0x0000000000e15c58
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e15c23
- (id)initWithTableViewCell:(id)arg1;	// IMP=0x0000000000e1596a
- (id)grabberImage;	// IMP=0x0000000000e15795

@end

