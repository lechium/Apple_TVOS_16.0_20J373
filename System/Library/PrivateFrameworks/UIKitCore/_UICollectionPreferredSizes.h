//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionPreferredSizes : NSObject
{
    NSMutableDictionary *_sizes;	// 8 = 0x8
    NSMutableIndexSet *_indexes;	// 16 = 0x10
    NSMutableDictionary *_supplementarySizesDict;	// 24 = 0x18
    long long _frameOffset;	// 32 = 0x20
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryBaseOffsets;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000024dcb6
@property(retain, nonatomic) id <_UICollectionLayoutAuxillaryOffsets> supplementaryBaseOffsets; // @synthesize supplementaryBaseOffsets=_supplementaryBaseOffsets;
@property(nonatomic) long long frameOffset; // @synthesize frameOffset=_frameOffset;
- (id)copyByDirtyingPreferredSizes;	// IMP=0x000000000024da4a
- (id)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id)arg2;	// IMP=0x000000000024d880
- (_Bool)containsSupplementaryOffsets:(id)arg1;	// IMP=0x000000000024d56a
- (void)addPreferredSize:(id)arg1 forSupplementaryWithElementKind:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000024d37e
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000024d25d
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024d0e6
@property(readonly, nonatomic) NSIndexSet *indexes;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;	// IMP=0x000000000024cfd0
- (id)objectAtIndexedSubscript:(long long)arg1;	// IMP=0x000000000024cf65
- (_Bool)hasSizes;	// IMP=0x000000000024cf25
- (id)init;	// IMP=0x000000000024cef8
- (id)initWithSizes:(id)arg1 indexes:(id)arg2 supplementarySizesDict:(id)arg3 frameOffset:(long long)arg4 supplementaryBaseOffsets:(id)arg5;	// IMP=0x000000000024cdf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
