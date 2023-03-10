//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (Additions)
- (unsigned long long)pl_indexOfLastObjectInRange:(struct _NSRange)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00900000003705af
- (unsigned long long)pl_indexOfLastObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0090000000370551
- (unsigned long long)pl_indexOfFirstObjectInRange:(struct _NSRange)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00900000003703d8
- (unsigned long long)pl_indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x009000000037037a
- (id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1;	// IMP=0x0090000000370018
- (unsigned long long)pl_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x009000000036fea1
- (id)pl_shortDescription;	// IMP=0x009000000036fc49
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;	// IMP=0x0090000000495402
- (id)_pl_indexBy:(CDUnknownBlockType)arg1;	// IMP=0x009000000049523f
- (id)_pl_groupBy:(CDUnknownBlockType)arg1;	// IMP=0x0090000000494ff3
- (_Bool)_pl_any:(CDUnknownBlockType)arg1;	// IMP=0x0090000000494eb9
- (id)_pl_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0090000000494d63
- (id)_pl_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0090000000494c85
- (id)_pl_filter:(CDUnknownBlockType)arg1;	// IMP=0x0090000000494bbe
- (id)_pl_map:(CDUnknownBlockType)arg1;	// IMP=0x0090000000494a5c
@end

