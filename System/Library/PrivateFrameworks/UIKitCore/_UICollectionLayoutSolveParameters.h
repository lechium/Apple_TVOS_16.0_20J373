//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSolveParameters : NSObject
{
    NSMutableIndexSet *_invalidatedIndexes;	// 8 = 0x8
    NSMutableDictionary *_invalidatedAuxillaryDict;	// 16 = 0x10
    _Bool _isFullResolve;	// 24 = 0x18
    struct CGPoint _scrollOffset;	// 32 = 0x20
    struct CGRect _visibleBounds;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000273bf1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000273b3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000273991
- (id)init;	// IMP=0x000000000027335d

@end

