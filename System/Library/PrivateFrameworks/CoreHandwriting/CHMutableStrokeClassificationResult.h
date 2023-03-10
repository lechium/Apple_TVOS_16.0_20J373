//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHStrokeClassificationResult.h"

@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult
{
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;	// 8 = 0x8
    NSMutableDictionary *_substrokesByStrokeIdentifier;	// 16 = 0x10
    NSMutableSet *_nontextCandidates;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017a440
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017a3f0
- (void)updateByAddingClutterStroke:(id)arg1;	// IMP=0x000000000017a370
- (void)updateByAddingNonClutterStroke:(id)arg1 withClassification:(long long)arg2;	// IMP=0x000000000017a1a0
- (id)nontextCandidates;	// IMP=0x000000000017a180
- (id)substrokesByStrokeIdentifier;	// IMP=0x000000000017a160
- (id)strokeClassificationsByStrokeIdentifier;	// IMP=0x000000000017a140
- (void)updateByAddingNonClutterStroke:(id)arg1 withAllStrokes:(id)arg2 forceText:(_Bool)arg3;	// IMP=0x0000000000179910
- (void)updateByTransitionedClutterStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;	// IMP=0x0000000000179850
- (void)updateByRemovingStrokeIdentifier:(id)arg1 withRemovedAndClutterStrokeIDs:(id)arg2;	// IMP=0x00000000001797a0
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)arg1 skippingCandidatesWithStrokeIdentifier:(id)arg2;	// IMP=0x0000000000179380
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3;	// IMP=0x0000000000179030
- (id)init;	// IMP=0x0000000000178f60

@end

