//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICandidateViewController : UIViewController
{
    UIView *_candidateView;	// 8 = 0x8
}

+ (double)preferredCandidateBarHeightForTraitCollection:(id)arg1;	// IMP=0x0010000000916cb0
- (void).cxx_destruct;	// IMP=0x000000000091798d
@property(retain, nonatomic) UIView *candidateView; // @synthesize candidateView=_candidateView;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000917537
- (long long)overrideUserInterfaceStyle;	// IMP=0x00000000009174bd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000009173cf
- (void)loadView;	// IMP=0x0000000000917362
@property(readonly, nonatomic) NSArray *displayedCandidates;
- (_Bool)hidesExpandableButton;	// IMP=0x00000000009172b2
- (double)preferredHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000917299
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;	// IMP=0x0000000000916c20
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000916c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

