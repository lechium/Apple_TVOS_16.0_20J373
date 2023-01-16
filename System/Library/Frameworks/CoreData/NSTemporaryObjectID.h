//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObjectID.h"

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID
{
    int _cd_rc;	// 8 = 0x8
    int _counter;	// 12 = 0xc
    NSEntityDescription *_entity;	// 16 = 0x10
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;	// IMP=0x00600000001fd0ea
+ (id)initWithEntity:(id)arg1;	// IMP=0x00600000001fd0dd
+ (unsigned int)allocateBatch:(id *)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;	// IMP=0x00600000001fd046
+ (void)_release_1;	// IMP=0x00600000001fcefc
+ (id)_retain_1;	// IMP=0x00600000001fcee1
+ (long long)version;	// IMP=0x00600000001fced6
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x00600000001fcece
+ (id)alloc;	// IMP=0x00600000001fcec5
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000001fcebc
+ (_Bool)_usesTaggedPointers;	// IMP=0x00600000001fceb4
+ (Class)classForStore:(id)arg1;	// IMP=0x00600000001fcaf1
+ (void)setObjectStoreIdentifier:(id)arg1;	// IMP=0x00600000001fca9e
+ (void)_storeDeallocated;	// IMP=0x00600000001fca83
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000001fca7b
+ (void)initialize;	// IMP=0x00600000001fc9a7
- (id)_referenceData;	// IMP=0x00000000001fd455
- (id)URIRepresentation;	// IMP=0x00000000001fd3e6
- (id)_retainedURIString;	// IMP=0x00000000001fd2ff
- (_Bool)_isPersistentStoreAlive;	// IMP=0x00000000001fd2d3
- (id)_storeIdentifier;	// IMP=0x00000000001fd263
- (int)_temporaryIDCounter;	// IMP=0x00000000001fd253
- (_Bool)isTemporaryID;	// IMP=0x00000000001fd24b
- (id)entity;	// IMP=0x00000000001fd23a
- (void)_setPersistentStore:(id)arg1;	// IMP=0x00000000001fd1eb
- (id)persistentStore;	// IMP=0x00000000001fd1cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fd17b
- (unsigned long long)hash;	// IMP=0x00000000001fd135
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;	// IMP=0x00000000001fd11c
- (id)initWithEntity:(id)arg1;	// IMP=0x00000000001fd103
- (void)dealloc;	// IMP=0x00000000001fcfa1
- (unsigned long long)retainCount;	// IMP=0x00000000001fcf8d
- (oneway void)release;	// IMP=0x00000000001fcf5d
- (id)retain;	// IMP=0x00000000001fcf49

@end

