//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject
{
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;	// 8 = 0x8
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;	// 16 = 0x10
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;	// 24 = 0x18
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;	// 32 = 0x20
    _Bool _sectionsWereRequeried;	// 40 = 0x28
    struct CGPoint _contentOffsetAdjustment;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000026bb70
@property(nonatomic) _Bool sectionsWereRequeried; // @synthesize sectionsWereRequeried=_sectionsWereRequeried;
@property(nonatomic) struct CGPoint contentOffsetAdjustment; // @synthesize contentOffsetAdjustment=_contentOffsetAdjustment;
- (id)description;	// IMP=0x000000000026bace
- (id)init;	// IMP=0x000000000026b60f

@end

