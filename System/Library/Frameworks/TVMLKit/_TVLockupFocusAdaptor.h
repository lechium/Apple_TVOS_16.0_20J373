//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _TVLockupFocusAdaptor : UIView
{
    _Bool _pressIsAnimating;	// 8 = 0x8
    _Bool _unpressOnEndAnimating;	// 9 = 0x9
    _Bool _disabled;	// 10 = 0xa
    UIView *_selectingView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000187653
@property(retain, nonatomic) UIView *selectingView; // @synthesize selectingView=_selectingView;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000000018759c
- (void)_selectButtonAction:(id)arg1;	// IMP=0x0000000000187516
- (void)_showPressState;	// IMP=0x0000000000187361
- (void)_clearPressState;	// IMP=0x000000000018729d
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000187198
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000187093
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000186f8e
- (void)layoutSubviews;	// IMP=0x0000000000186e39
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000186dcb
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000186d27
- (_Bool)canBecomeFocused;	// IMP=0x0000000000186d12
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000186b70

@end

