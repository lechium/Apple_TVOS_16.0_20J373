//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISearchControllerAnimator : NSObject
{
}

- (_Bool)wantsKeyboardFocusGuides;	// IMP=0x0000000000ca18af
- (void)willFocusOffscreenViewForController:(id)arg1 withHeading:(unsigned long long)arg2;	// IMP=0x0000000000ca18a9
- (void)didUnfocusSearchBarForController:(id)arg1;	// IMP=0x0000000000ca18a3
- (void)didFocusSearchBarForController:(id)arg1;	// IMP=0x0000000000ca189d
- (void)didRelayoutSearchBarForController:(id)arg1;	// IMP=0x0000000000ca1897
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000ca1891
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000ca1883

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

