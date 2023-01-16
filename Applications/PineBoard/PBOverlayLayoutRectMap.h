//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PBOverlayLayoutRectMapSnapshot;

@interface PBOverlayLayoutRectMap : NSObject
{
    NSArray *_combinedNodes;	// 8 = 0x8
    PBOverlayLayoutRectMapSnapshot *_baseSnapshot;	// 16 = 0x10
    NSMutableArray *_nodes;	// 24 = 0x18
    struct CGRect _bounds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000e6138
@property(readonly, nonatomic) NSMutableArray *nodes; // @synthesize nodes=_nodes;
@property(retain, nonatomic) PBOverlayLayoutRectMapSnapshot *baseSnapshot; // @synthesize baseSnapshot=_baseSnapshot;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e60d5
- (void)_resetCombinedNodes;	// IMP=0x00100000000e60ba
@property(readonly, nonatomic, getter=_combinedNodes) NSArray *combinedNodes; // @synthesize combinedNodes=_combinedNodes;
- (long long)calculateLayoutSuggestionsForFittingRect:(struct CGRect)arg1 withStickiness:(struct CGVector)arg2 suggestionSet:(out id *)arg3 validSuggestionIndexSet:(out id *)arg4;	// IMP=0x00100000000e59aa
- (id)stateDumpBuilder;	// IMP=0x00100000000e589f
- (id)captureSnapshot;	// IMP=0x00100000000e581d
- (id)layoutSuggestionForFittingRect:(struct CGRect)arg1 withStickiness:(struct CGVector)arg2;	// IMP=0x00100000000e5738
- (id)layoutSuggestionsForFittingRect:(struct CGRect)arg1 withStickiness:(struct CGVector)arg2;	// IMP=0x00100000000e5635
- (_Bool)intersectsRect:(struct CGRect)arg1;	// IMP=0x00100000000e54db
- (void)removeRectForKey:(id)arg1;	// IMP=0x00100000000e53b9
- (void)addRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x00100000000e52fd
- (id)initWithMap:(id)arg1;	// IMP=0x00100000000e5170
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x00100000000e5107
- (id)init;	// IMP=0x00100000000e50d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
