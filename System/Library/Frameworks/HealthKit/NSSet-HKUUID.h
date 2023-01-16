//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@class NSString;

@interface NSSet (HKUUID)
+ (id)hk_typesForDictionaryMapping:(Class)arg1 to:(Class)arg2;	// IMP=0x00100000001a1a2a
+ (id)hk_typesForSetOf:(Class)arg1;	// IMP=0x00100000001a19f2
+ (id)hk_typesForArrayOf:(Class)arg1;	// IMP=0x00100000001a19b6
+ (id)hk_setByUnioningSet:(id)arg1 otherSet:(id)arg2;	// IMP=0x00100000001a0b8d
- (id)hk_dataForAllUUIDs;	// IMP=0x001000000006b8b2
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b8a2
- (_Bool)hk_allObjectsPassTestWithError:(id *)arg1 test:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a17d8
- (_Bool)hk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a169e
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a142e
- (id)hk_anyObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a12d8
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a114d
- (id)hk_symmetricDifference:(id)arg1;	// IMP=0x00100000001a1011
- (id)hk_intersection:(id)arg1;	// IMP=0x00100000001a0fab
- (id)hk_minus:(id)arg1;	// IMP=0x00100000001a0f45
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a0e61
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a0c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
