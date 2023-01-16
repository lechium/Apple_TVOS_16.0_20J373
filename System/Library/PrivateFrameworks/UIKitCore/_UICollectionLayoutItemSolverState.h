//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, _UIRTree;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutItemSolverState : NSObject
{
    NSArray *_itemFrames;	// 8 = 0x8
    NSArray *_auxillaryFrames;	// 16 = 0x10
    NSDictionary *_supplementaryDictByKindIndex;	// 24 = 0x18
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryFrameOffsets;	// 32 = 0x20
    _UIRTree *_geometricIndexer;	// 40 = 0x28
    NSArray *_solutionFrames;	// 48 = 0x30
    long long _itemFrameCount;	// 56 = 0x38
    long long _supplementaryFrameCount;	// 64 = 0x40
    NSArray *_availableLayoutSpaces;	// 72 = 0x48
    struct CGRect _solvedFittingFrame;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002802f9

@end

