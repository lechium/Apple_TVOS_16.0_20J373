//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSDictionary, NSString;

@interface KMMapper_SASyncSiriKitAppVocabulary : NSObject
{
    NSDictionary *_ontologyNodeToFieldTypeMap;	// 8 = 0x8
    KVItemBuilder *_builder;	// 16 = 0x10
}

+ (Class)externalObjectClass;	// IMP=0x00100000000021a1
- (void).cxx_destruct;	// IMP=0x0000000000002111
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000001a06
- (long long)targetItemType;	// IMP=0x00000000000019fb
- (id)init;	// IMP=0x000000000000159e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
