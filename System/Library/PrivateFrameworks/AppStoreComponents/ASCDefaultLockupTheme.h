//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCDefaultLockupTheme : NSObject
{
}

+ (long long)numberOfLinesInSubtitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0010000000013102
+ (id)subtitleLabelFontForView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0010000000013039
+ (id)subtitleLableColorForUnfocusedAppearanceCompatibleWithTraitCollection:(id)arg1;	// IMP=0x0010000000012f71
+ (long long)numberOfLinesInTitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0010000000012f60
+ (id)titleLabelFontForView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0010000000012e97
+ (id)titleLableColorForUnfocusedAppearanceCompatibleWithTraitCollection:(id)arg1;	// IMP=0x0010000000012dcf
+ (long long)preferredLabelAlignmentForSize:(id)arg1;	// IMP=0x0010000000012d81
+ (struct CGSize)preferredIconSizeForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0010000000012d1f
+ (id)sharedTheme;	// IMP=0x0010000000012cbf
- (void)applyToLockupContentView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000000013113
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012d14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

