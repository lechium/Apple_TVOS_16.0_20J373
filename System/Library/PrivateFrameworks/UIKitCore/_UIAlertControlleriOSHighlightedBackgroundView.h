//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    long long _style;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008099b
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)setPressed:(_Bool)arg1;	// IMP=0x0000000000080984
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000080953
- (void)setRoundedCornerPosition:(unsigned long long)arg1;	// IMP=0x0000000000080907
- (void)setCornerRadius:(double)arg1;	// IMP=0x00000000000808b8
- (void)_configureWithStyle:(long long)arg1;	// IMP=0x00000000000806dc
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000080664
- (id)init;	// IMP=0x0000000000080650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
