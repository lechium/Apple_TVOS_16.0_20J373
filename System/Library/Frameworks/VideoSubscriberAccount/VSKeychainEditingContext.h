//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSUndoManager, VSKeychainStore;

__attribute__((visibility("hidden")))
@interface VSKeychainEditingContext : NSObject
{
    VSKeychainStore *_keychainStore;	// 8 = 0x8
    NSUndoManager *_undoManager;	// 16 = 0x10
    NSMutableSet *_items;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007e36e
@property(retain, nonatomic) NSMutableSet *items; // @synthesize items=_items;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) VSKeychainStore *keychainStore; // @synthesize keychainStore=_keychainStore;
- (_Bool)save:(id *)arg1;	// IMP=0x000000000007cc1f
@property(readonly, nonatomic) NSSet *registeredItems;
@property(readonly, nonatomic) NSSet *updatedItems;
@property(readonly, nonatomic) NSSet *deletedItems;
@property(readonly, nonatomic) NSSet *insertedItems;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1;	// IMP=0x000000000007ca0c
- (void)deleteItem:(id)arg1;	// IMP=0x000000000007c973
- (void)insertItem:(id)arg1;	// IMP=0x000000000007c7cf
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007bfa4
- (void)fulfillFault:(id)arg1;	// IMP=0x000000000007bbe8
- (void)_populateErrors:(id)arg1 withError:(id)arg2 affectingItem:(id)arg3;	// IMP=0x000000000007bab3
- (id)_deleteQueryForItemValues:(id)arg1 withItemKind:(id)arg2;	// IMP=0x000000000007b77c
- (id)_queryForItemValues:(id)arg1 withItemKind:(id)arg2;	// IMP=0x000000000007b52a
- (void)_populateResult:(id)arg1 forRequest:(id)arg2 fromMatch:(id)arg3;	// IMP=0x000000000007b1b1
- (id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2;	// IMP=0x000000000007ae70
- (void)_populateQuery:(struct __CFDictionary *)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3;	// IMP=0x000000000007a46a
- (id)init;	// IMP=0x000000000007a414

@end

