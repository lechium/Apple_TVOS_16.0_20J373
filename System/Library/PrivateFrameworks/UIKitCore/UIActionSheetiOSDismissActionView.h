//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIActionSheetiOSDismissActionView
{
    _Bool _usesShortCompactVerticalLayout;	// 176 = 0xb0
    UIButton *_dismissButton;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000038f279
@property(nonatomic) _Bool usesShortCompactVerticalLayout; // @synthesize usesShortCompactVerticalLayout=_usesShortCompactVerticalLayout;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000038f199
- (double)_heightForTraitCollection:(id)arg1;	// IMP=0x000000000038f157
@property(copy, nonatomic) NSString *title;
- (void)_setupDismissButton;	// IMP=0x000000000038ee93
- (id)initWithContinuousCornerRadius:(double)arg1;	// IMP=0x000000000038ee28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

