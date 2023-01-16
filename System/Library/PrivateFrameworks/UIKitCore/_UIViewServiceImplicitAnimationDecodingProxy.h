//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIViewAnimationAttributes;

__attribute__((visibility("hidden")))
@interface _UIViewServiceImplicitAnimationDecodingProxy
{
    SEL _implicitAnimationSelector;	// 8 = 0x8
    _UIViewAnimationAttributes *_animationAttributes;	// 16 = 0x10
    _Bool _animationsEnabled;	// 24 = 0x18
}

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;	// IMP=0x001000000105e6b8
- (void).cxx_destruct;	// IMP=0x000000000105e94d
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 animationsEnabled:(_Bool)arg3;	// IMP=0x000000000105e8e8
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000105e6f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

