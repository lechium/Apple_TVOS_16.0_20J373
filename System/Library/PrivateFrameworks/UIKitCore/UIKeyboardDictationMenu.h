//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu
{
}

+ (id)activeInstance;	// IMP=0x008000000085e41d
+ (id)sharedInstance;	// IMP=0x008000000085e3b1
- (_Bool)usesDimmingView;	// IMP=0x000000000085eae8
- (void)hide;	// IMP=0x000000000085eaaa
- (void)fadeWithDelay:(double)arg1;	// IMP=0x000000000085ea62
- (void)fade;	// IMP=0x000000000085ea24
- (void)cleanupForFadeOrHide;	// IMP=0x000000000085e951
- (void)willShow;	// IMP=0x000000000085e8ae
- (void)performShowAnimation;	// IMP=0x000000000085e457
- (_Bool)centerPopUpOverKey;	// IMP=0x000000000085e44f
- (_Bool)usesTable;	// IMP=0x000000000085e447
- (struct CGSize)preferredSize;	// IMP=0x000000000085e42e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000085e22c

@end

