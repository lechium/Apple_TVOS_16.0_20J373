//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class UILabel;

@interface PBUIDebugSystemGestureStackView : UIStackView
{
    UILabel *_lastInvokedLabel;	// 8 = 0x8
    UILabel *_lastActivatedLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001f0cf8
@property(readonly, nonatomic) UILabel *lastActivatedLabel; // @synthesize lastActivatedLabel=_lastActivatedLabel;
@property(readonly, nonatomic) UILabel *lastInvokedLabel; // @synthesize lastInvokedLabel=_lastInvokedLabel;
- (void)setLastActivatedSystemGesture:(unsigned long long)arg1;	// IMP=0x00100000001f0c17
- (void)setLastInvokedSystemGesture:(unsigned long long)arg1 deferringFrom:(unsigned long long)arg2;	// IMP=0x00100000001f0ae0
- (void)setLastInvokedSystemGesture:(unsigned long long)arg1;	// IMP=0x00100000001f0acb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001f0950

@end
