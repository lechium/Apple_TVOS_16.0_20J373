//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBOverlayLayoutCoordinator;
@protocol PBOverlayLayoutControllerDelegate;

@interface PBOverlayLayoutController : NSObject
{
    NSString *_name;	// 8 = 0x8
    id <PBOverlayLayoutControllerDelegate> _delegate;	// 16 = 0x10
    PBOverlayLayoutCoordinator *_coordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00100000000815a6
@property(readonly, nonatomic) PBOverlayLayoutCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <PBOverlayLayoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000081546
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000814f5
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000081496
- (id)succinctDescription;	// IMP=0x0010000000081445
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0010000000081406
- (void)_invalidateWithReason:(id)arg1;	// IMP=0x00100000000812cd
- (void)coordinator:(id)arg1 didUpdateElements:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x0010000000081211
@property(readonly, nonatomic) NSString *resolvedName;
- (id)performBatchUpdate:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x0010000000080e0a
- (void)dealloc;	// IMP=0x0010000000080dc5
- (id)init;	// IMP=0x0010000000080d69
- (id)initWithName:(id)arg1;	// IMP=0x0010000000080ce8
- (id)initWithLayoutCoordinator:(id)arg1 name:(id)arg2;	// IMP=0x0010000000080c28
- (id)removeLayoutElementWithIdentifier:(id)arg1 andTransitionContext:(id)arg2;	// IMP=0x00100000000816fe
- (id)addLayoutElement:(id)arg1 withTransitionContext:(id)arg2;	// IMP=0x00100000000815d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

