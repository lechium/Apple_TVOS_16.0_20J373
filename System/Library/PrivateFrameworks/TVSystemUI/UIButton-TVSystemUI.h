//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface UIButton (TVSystemUI)
+ (id)tvsui_consentSelectButton;	// IMP=0x0010000000027068
- (double)ab_minimumWidth;	// IMP=0x001000000003a747
- (void)ab_setDetailText:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000003a741
@property(retain, nonatomic, setter=ab_setDetailText:) NSString *ab_detailText;
- (void)ab_setTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000003a646
@property(retain, nonatomic, setter=ab_setTitle:) NSString *ab_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

