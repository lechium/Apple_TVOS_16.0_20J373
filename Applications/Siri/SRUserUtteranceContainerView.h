//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SRUserUtteranceView;

@interface SRUserUtteranceContainerView : UIView
{
    _Bool _showEditingView;	// 8 = 0x8
    SRUserUtteranceView *_displayView;	// 16 = 0x10
    UIView *_tableView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001e3f9
@property(nonatomic) __weak UIView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SRUserUtteranceView *displayView; // @synthesize displayView=_displayView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000001e307
- (void)layoutSubviews;	// IMP=0x001000000001e1bc
- (double)baselineOffsetFromBottom;	// IMP=0x001000000001e132
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x001000000001e0f3
- (void)animateToDisplayWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ded0
- (void)animateToEditWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001dc9d
- (_Bool)isFirstResponder;	// IMP=0x001000000001d9dc

@end
