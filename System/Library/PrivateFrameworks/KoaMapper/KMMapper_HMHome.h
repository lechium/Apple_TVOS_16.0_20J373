//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSMutableArray, NSString;

@interface KMMapper_HMHome : NSObject
{
    KVItemBuilder *_builder;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
}

+ (Class)externalObjectClass;	// IMP=0x001000000000bcfe
- (void).cxx_destruct;	// IMP=0x000000000000bcd6
- (_Bool)_addItemWithItemId:(id)arg1 assistantHomeKitId:(id)arg2 fieldType:(long long)arg3 name:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000bab1
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000a99e
- (long long)targetItemType;	// IMP=0x000000000000a993
- (id)init;	// IMP=0x000000000000a93d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
