//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class MISSING_TYPE, SRCarPlayFocusView, UIView;

@interface SRCarPlayHeaderButton : UIButton
{
    unsigned long long _accessoryViewPlacement;	// 8 = 0x8
    UIView *_accessoryView;	// 16 = 0x10
    SRCarPlayFocusView *_focusView;	// 24 = 0x18
}

+ (id)_systemImageWithName:(id)arg1;	// IMP=0x00400000000095c6
+ (id)buttonWithTitle:(id)arg1 systemImageNamed:(id)arg2 placement:(unsigned long long)arg3;	// IMP=0x001000000000847a
+ (id)buttonWithTitle:(id)arg1 accessoryView:(id)arg2 placement:(unsigned long long)arg3;	// IMP=0x00100000000081f0
- (void).cxx_destruct;	// IMP=0x0020000000009690
- (void)_updateSubviewAlphasForFocusedState:(_Bool)arg1 selected:(_Bool)arg2;	// IMP=0x001000000000944f
- (id)_subviewCompositingFilterForUserInterfaceStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x001000000000942a
- (void)_updateCompsitingFilterForUserInterfaceStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x001000000000935e
- (id)_subviewTintColorForFocusedState:(_Bool)arg1 selectedState:(_Bool)arg2;	// IMP=0x0010000000009315
- (void)_updateSubviewsAppearanceForFocusedState:(_Bool)arg1 selectedState:(_Bool)arg2;	// IMP=0x0010000000009252
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000091f7
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000919c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000008fed
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000008f92
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000008f37
- (MISSING_TYPE *)touchesBegan:withEvent: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000008d89
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000008d18
- (_Bool)canBecomeFocused;	// IMP=0x0010000000008cfa
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000008c89
- (void)layoutSubviews;	// IMP=0x00100000000087c7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000086f6
- (void)updateAccessoryViewWithSystemImageNamed:(id)arg1;	// IMP=0x00100000000085f2
- (struct CGSize)accessoryViewSizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000085e1
- (void)setAccessoryViewTintColor:(id)arg1;	// IMP=0x001000000000856f
- (id)focusView;	// IMP=0x001000000000855a
@property(readonly, nonatomic) UIView *accessoryView;

@end
