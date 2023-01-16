//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKBRenderTraits;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryLayoutSegment : NSObject
{
    int _rectCount;	// 8 = 0x8
    struct CGRect _rects[10];	// 16 = 0x10
    unsigned long long _triangleCorners[10];	// 336 = 0x150
    int _edgeCount;	// 416 = 0x1a0
    unsigned long long _edges[10];	// 424 = 0x1a8
    NSString *_cachedKeyNames[10];	// 504 = 0x1f8
    _Bool _requireAllMatches;	// 584 = 0x248
    int _states;	// 588 = 0x24c
    UIKBRenderTraits *_traits;	// 592 = 0x250
}

+ (id)segmentWithTraits:(id)arg1;	// IMP=0x00000000008df810
- (void).cxx_destruct;	// IMP=0x00000000008e0229
@property(nonatomic) _Bool requireAllMatches; // @synthesize requireAllMatches=_requireAllMatches;
@property(nonatomic) int keyStates; // @synthesize keyStates=_states;
@property(readonly, nonatomic) UIKBRenderTraits *traits; // @synthesize traits=_traits;
- (_Bool)containsPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 withKeyplane:(id)arg3;	// IMP=0x00000000008dfb9b
- (_Bool)shouldOverlayTraitsForKey:(id)arg1;	// IMP=0x00000000008dfa77
- (void)addRelativeLayoutRectFromEdge:(unsigned long long)arg1 ofCachedKey:(id)arg2;	// IMP=0x00000000008df991
- (void)addLayoutRect:(struct CGRect)arg1 asTriangle:(unsigned long long)arg2;	// IMP=0x00000000008df8d2
- (id)initWithTraits:(id)arg1;	// IMP=0x00000000008df859

@end

