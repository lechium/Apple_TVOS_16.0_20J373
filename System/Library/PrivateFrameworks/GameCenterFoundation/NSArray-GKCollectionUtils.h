//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (GKCollectionUtils)
+ (id)_gkArrayWithIndexSet:(id)arg1;	// IMP=0x0050000000034b27
- (id)_gkFoldWithInitialValue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007990
- (id)_gkFirstObject;	// IMP=0x001000000000797e
- (id)_gkDistinctValuesForKeyPath:(id)arg1;	// IMP=0x00100000000077ab
- (id)_gkValuesForKeyPath:(id)arg1;	// IMP=0x00100000000075d8
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;	// IMP=0x0010000000007303
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;	// IMP=0x00100000000072ef
- (id)_gkSubarraysByKeyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007109
- (id)_gkFilterWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006fd1
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006e99
- (id)_gkMapConcurrentlyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006d4e
- (id)_gkOrderedSet;	// IMP=0x0010000000034b0b
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x0010000000035f01
- (void)_gkValidatePlayersForReturnFromAPI;	// IMP=0x0010000000098948
- (id)_gkInternalsFromPlayers;	// IMP=0x001000000009859b
- (id)_gkPlayersFromInternals;	// IMP=0x001000000009840b
- (id)_gkPlayersIDsFromPlayers;	// IMP=0x001000000009825c
- (id)_gkIncompletePlayersFromPlayerIDs;	// IMP=0x00100000000980cc
- (id)_gkGuestPlayersFromPlayers;	// IMP=0x0010000000098da0
- (id)_gkNonGuestPlayersFromPlayers;	// IMP=0x0010000000098d26
@end

