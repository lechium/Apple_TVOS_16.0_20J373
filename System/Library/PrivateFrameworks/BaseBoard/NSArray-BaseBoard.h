//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (BaseBoard)
- (id)bs_flattenedDifferenceWithArray:(id)arg1;	// IMP=0x006000000007fe2a
- (id)bs_differenceWithArray:(id)arg1;	// IMP=0x006000000007fd98
- (id)bs_dictionaryByPartitioning:(CDUnknownBlockType)arg1;	// IMP=0x006000000007fd6d
- (id)bs_reduce:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x006000000007fd5d
- (id)bs_mapNoNulls:(CDUnknownBlockType)arg1;	// IMP=0x006000000007fd32
- (id)bs_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x006000000007fd07
- (id)bs_map:(CDUnknownBlockType)arg1;	// IMP=0x006000000007fcdc
- (id)bs_flatten;	// IMP=0x006000000007fabc
- (id)bs_reverse;	// IMP=0x006000000007fa58
- (id)bs_objectsOfClass:(Class)arg1;	// IMP=0x006000000007f9d0
- (id)bs_filter:(CDUnknownBlockType)arg1;	// IMP=0x006000000007f9a5
- (id)bs_firstObjectOfClassNamed:(id)arg1;	// IMP=0x006000000007f97b
- (id)bs_firstObjectOfClass:(Class)arg1;	// IMP=0x006000000007f911
- (id)bs_first:(unsigned long long)arg1;	// IMP=0x006000000007f8cb
- (void)bs_each:(CDUnknownBlockType)arg1;	// IMP=0x006000000007f79d
- (void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x006000000007f6f2
- (id)bs_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x006000000007f6e5
- (_Bool)bs_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x006000000007f6b7
@end

