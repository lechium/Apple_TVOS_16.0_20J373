//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (VSAdditions)
- (void)vs_checkUserInterfaceStyleForViewModel:(id)arg1;	// IMP=0x0090000000038ffc
- (id)vs_addFocusGuideFromView:(id)arg1 toViews:(id)arg2 withDirection:(unsigned long long)arg3;	// IMP=0x0090000000038b04
- (void)vs_endIgnoringInteraction;	// IMP=0x0090000000038a85
- (void)vs_beginIgnoringInteraction;	// IMP=0x0090000000038a09
- (void)vs_setIgnoreInteractionCount:(long long)arg1;	// IMP=0x00900000000389bc
- (long long)vs_ignoreInteractionCount;	// IMP=0x009000000003897a
- (void)vs_adjustContentScrollViewInsets;	// IMP=0x0090000000038974
@end

