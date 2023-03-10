//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UITreeDataSourceSnapshotter : NSObject
{
    vector_a91a301d _nodes;	// 8 = 0x8
    long long _count;	// 32 = 0x20
    NSMutableIndexSet *_expandedIndexes;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000001238b89
- (void).cxx_destruct;	// IMP=0x0000000001238b56
@property(nonatomic) long long count; // @synthesize count=_count;
- (struct _UIOutlineNode)_nextNodeForNodeIndex:(long long *)arg1;	// IMP=0x0000000001238a9b
- (void)_insertSubtreeFromSnapshotter:(id)arg1 atIndex:(long long)arg2 adjustedIndex:(long long)arg3;	// IMP=0x000000000123856f
- (id)_allIndexes;	// IMP=0x00000000012384e8
- (long long)_indexForInsertingAfterIndex:(long long)arg1;	// IMP=0x00000000012383d0
- (id)_snapshotterByNormalizingRangeOffsets;	// IMP=0x0000000001238333
- (id)_snapshotterByShiftingIndexesByCount:(long long)arg1;	// IMP=0x00000000012380f0
- (void)_recomputeExpandedIndexesForDeletedIndexes:(id)arg1;	// IMP=0x0000000001237f06
- (void)_recomputeExpandedIndexesForInsertedRange:(struct _NSRange)arg1;	// IMP=0x0000000001237e9d
- (long long)_insertCount:(long long)arg1 afterIndex:(long long)arg2;	// IMP=0x0000000001237aad
- (void)_insertCount:(long long)arg1 beforeIndex:(long long)arg2;	// IMP=0x0000000001237971
- (id)_deleteChildNodesForParentNodeIndex:(long long)arg1;	// IMP=0x00000000012376ce
- (void)_splitNodeAtInsertionIndex:(long long)arg1;	// IMP=0x0000000001237272
- (long long)_childNodeIndexForGloalIndex:(long long)arg1;	// IMP=0x00000000012370da
- (_Bool)_shouldSplitNodeAtInsertionIndex:(long long)arg1;	// IMP=0x0000000001236fa0
- (void)_recomputeRangeOffsetForGlobalIndex:(long long)arg1;	// IMP=0x0000000001236e61
- (long long)_parentNodeIndexForNodeIndex:(long long)arg1;	// IMP=0x0000000001236d5b
- (_Bool)_isNodeIndexVisible:(long long)arg1;	// IMP=0x0000000001236c0c
- (struct _UIOutlineNode *)_nodeForGlobalIndex:(long long)arg1;	// IMP=0x0000000001236b3d
- (long long)_binarySearchForGlobalIndex:(long long)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3;	// IMP=0x0000000001236ac9
- (long long)_nodeIndexForGlobalIndex:(long long)arg1;	// IMP=0x00000000012369e2
- (id)_childrenForParent:(long long)arg1;	// IMP=0x00000000012367b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000123665f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012365c1
- (id)visualDescription;	// IMP=0x000000000123627b
- (id)description;	// IMP=0x0000000001236194
- (_Bool)hasChildrenForParentAtIndex:(long long)arg1;	// IMP=0x0000000001235fcd
- (_Bool)isFlat;	// IMP=0x0000000001235fb8
- (id)indexesForLevel:(long long)arg1;	// IMP=0x0000000001235eeb
- (id)visibleIndexes;	// IMP=0x0000000001235e10
- (id)expandedIndexes;	// IMP=0x0000000001235e02
- (long long)insertSubtreeFromSnapshotter:(id)arg1 afterIndex:(long long)arg2;	// IMP=0x0000000001235c4d
- (void)insertSubtreeFromSnapshotter:(id)arg1 beforeIndex:(long long)arg2;	// IMP=0x0000000001235b40
- (void)replaceChildItemsFromSnapshotter:(id)arg1 forParentIndex:(long long)arg2;	// IMP=0x0000000001235745
- (id)snapshotterRepresentingSubtreeForIndex:(long long)arg1 includingParent:(_Bool)arg2;	// IMP=0x00000000012350c0
- (id)snapshotterRepresentingSubtreeForIndex:(long long)arg1;	// IMP=0x00000000012350ac
- (void)collapseIndexes:(id)arg1;	// IMP=0x0000000001234faa
- (void)expandIndexes:(id)arg1;	// IMP=0x0000000001234ea8
- (_Bool)indexIsVisible:(long long)arg1;	// IMP=0x0000000001234d48
- (_Bool)indexIsExpanded:(long long)arg1;	// IMP=0x0000000001234c7c
- (long long)parentForChildAtIndex:(long long)arg1;	// IMP=0x0000000001234b5e
- (id)childrenForParentAtIndex:(long long)arg1 recursive:(_Bool)arg2;	// IMP=0x00000000012348d5
- (id)childrenForParentAtIndex:(long long)arg1;	// IMP=0x00000000012348c1
- (id)rootIndexes;	// IMP=0x00000000012348a5
- (long long)levelForIndex:(long long)arg1;	// IMP=0x000000000123488e
- (void)deleteIndexes:(id)arg1 orphanDisposition:(long long)arg2;	// IMP=0x0000000001234320
- (void)deleteIndexes:(id)arg1;	// IMP=0x000000000123430c
- (long long)insertCount:(long long)arg1 afterIndex:(long long)arg2 insertionMode:(long long)arg3;	// IMP=0x00000000012341cc
- (long long)insertCount:(long long)arg1 afterIndex:(long long)arg2;	// IMP=0x00000000012341b7
- (void)insertCount:(long long)arg1 beforeIndex:(long long)arg2;	// IMP=0x00000000012341a5
- (struct _NSRange)appendChildItemsWithCount:(long long)arg1 toParentIndex:(long long)arg2;	// IMP=0x0000000001233b6c
- (struct _NSRange)appendChildItemsWithCount:(long long)arg1;	// IMP=0x0000000001233995
- (id)initWithNodes:(vector_a91a301d)arg1 count:(long long)arg2 expandedIndexes:(id)arg3;	// IMP=0x0000000001233739
- (id)init;	// IMP=0x0000000001233692

@end

