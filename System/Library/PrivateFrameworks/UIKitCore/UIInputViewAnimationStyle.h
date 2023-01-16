//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject
{
    _Bool animated;	// 8 = 0x8
    double duration;	// 16 = 0x10
    unsigned long long extraOptions;	// 24 = 0x18
    _Bool interactivelyCancelled;	// 32 = 0x20
    _Bool _isLegacy;	// 33 = 0x21
    _Bool force;	// 34 = 0x22
    _Bool _dontMerge;	// 35 = 0x23
    _Bool _forAssertion;	// 36 = 0x24
}

+ (id)animationStyleAnimated:(_Bool)arg1 duration:(double)arg2;	// IMP=0x00100000006f1e52
+ (id)animationStyleDefault;	// IMP=0x00100000006f1e33
+ (id)animationStyleImmediate;	// IMP=0x00100000006f1e1c
@property(nonatomic) _Bool forAssertion; // @synthesize forAssertion=_forAssertion;
@property(nonatomic) _Bool dontMerge; // @synthesize dontMerge=_dontMerge;
@property(nonatomic) _Bool interactivelyCancelled; // @synthesize interactivelyCancelled;
@property(nonatomic) unsigned long long extraOptions; // @synthesize extraOptions;
@property(nonatomic) _Bool force; // @synthesize force;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) _Bool animated; // @synthesize animated;
@property(readonly, nonatomic) _Bool canTakeSnapshot;
@property(readonly, nonatomic) _Bool canDismissWithScrollView;
- (id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2;	// IMP=0x00000000006f2872
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 windowScene:(id)arg3;	// IMP=0x00000000006f220b
- (id)endPlacementForInputViewSet:(id)arg1;	// IMP=0x00000000006f21f7
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2;	// IMP=0x00000000006f21e2
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;	// IMP=0x00000000006f21c9
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;	// IMP=0x00000000006f2005
@property(readonly, nonatomic) _Bool isAnimationCompleted;
- (id)description;	// IMP=0x00000000006f1eb9
- (id)legacyAnimationCopy;	// IMP=0x00000000006f1dfe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006f1d3e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006f1c7c

@end
