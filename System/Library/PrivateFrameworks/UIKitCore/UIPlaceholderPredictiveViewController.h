//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIPlaceholderPredictiveViewController : UIViewController
{
}

@property(readonly, nonatomic) NSArray *displayedCandidates;
- (_Bool)hidesExpandableButton;	// IMP=0x00000000008232e8
- (double)preferredHeightForTraitCollection:(id)arg1;	// IMP=0x00000000008232cf
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;	// IMP=0x00000000008230f3
- (_Bool)_isVisibleForAutocorrectionType:(long long)arg1;	// IMP=0x000000000082302e
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000823026

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

