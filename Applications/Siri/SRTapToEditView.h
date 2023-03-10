//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SiriUIContentButton, UILabel;

@interface SRTapToEditView : UIView
{
    UILabel *_tapToEditLabel;	// 8 = 0x8
    SiriUIContentButton *_circleButton;	// 16 = 0x10
    SiriUIContentButton *_chevronButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000030b0b
- (double)_circleToLabelHeightDifference;	// IMP=0x0010000000030a5e
- (void)_setHighlighted:(_Bool)arg1;	// IMP=0x00100000000309b4
- (double)baselineOffsetFromBottom;	// IMP=0x001000000003090f
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0010000000030878
- (void)layoutSubviews;	// IMP=0x00100000000305f6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000003057b
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000030567
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000030553
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000003053c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000003009f

@end

