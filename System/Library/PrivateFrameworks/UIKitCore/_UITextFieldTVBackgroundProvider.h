//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextFieldTVBackgroundProvider
{
}

@property(readonly, nonatomic) _Bool shouldExtendCaretHeight;
@property(readonly, nonatomic) double naturalHeight;
- (struct CGSize)intrinsicSizeForContentSize:(struct CGSize)arg1;	// IMP=0x0000000001018479
- (struct CGRect)contentFrameForBounds:(struct CGRect)arg1;	// IMP=0x00000000010183da
- (id)preferredMetricsProvider;	// IMP=0x00000000010183d1
- (id)backgroundView;	// IMP=0x00000000010183c9
- (long long)associatedBorderStyle;	// IMP=0x00000000010183bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

