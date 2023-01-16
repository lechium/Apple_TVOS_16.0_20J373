//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _PBOverlayLayoutLevelOcclusionController;

@interface _PBOverlayLayoutLevelOcclusionAssertion : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <_PBOverlayLayoutLevelOcclusionController> _lock_controller;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000ab023
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) __weak id <_PBOverlayLayoutLevelOcclusionController> controller; // @synthesize controller=_lock_controller;
- (id)stateDumpBuilder;	// IMP=0x00100000000aaf79
@property(readonly, copy) NSString *description;
- (void)invalidateWithTransitionContext:(id)arg1;	// IMP=0x00100000000aae38
- (void)invalidate;	// IMP=0x00100000000aae23
- (void)dealloc;	// IMP=0x00100000000aac6b
- (id)initWithController:(id)arg1 layoutLevel:(long long)arg2 reason:(id)arg3;	// IMP=0x00100000000aabb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

