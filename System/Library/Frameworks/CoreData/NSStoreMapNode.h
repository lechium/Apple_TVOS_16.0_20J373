//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSMutableDictionary, NSPersistentStoreMap, NSString;

__attribute__((visibility("hidden")))
@interface NSStoreMapNode : NSObject
{
    NSPersistentStoreMap *_map;	// 8 = 0x8
    NSManagedObjectID *_objectID;	// 16 = 0x10
    NSMutableDictionary *_relatedNodes;	// 24 = 0x18
    NSString *_entityName;	// 32 = 0x20
    unsigned int _version;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00100000001f9185
- (id)_snapshot_;	// IMP=0x00000000001f9718
- (const id *)knownKeyValuesPointer;	// IMP=0x00000000001f9710
- (void)_setVersionNumber:(unsigned int)arg1;	// IMP=0x00000000001f9707
- (unsigned int)_versionNumber;	// IMP=0x00000000001f96fe
- (id)destinationsForRelationship:(id)arg1;	// IMP=0x00000000001f959b
- (id)configurationName;	// IMP=0x00000000001f9585
- (id)entity;	// IMP=0x00000000001f956f
- (id)key;	// IMP=0x00000000001f9559
- (id)objectID;	// IMP=0x00000000001f954f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f94a9
- (void)dealloc;	// IMP=0x00000000001f9447
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f9348
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f9218
- (id)initWithObjectID:(id)arg1;	// IMP=0x00000000001f9196

@end

