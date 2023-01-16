//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryEntityTranslator : NSObject
{
    NSMutableDictionary *_propertiesToTranslators;	// 8 = 0x8
    NSMutableDictionary *_relationshipsToTranslators;	// 16 = 0x10
    _Bool _transient;	// 24 = 0x18
    Class _MPModelClass;	// 32 = 0x20
    void *_entityClass;	// 40 = 0x28
    CDUnknownBlockType _allowedItemPredicatesBlock;	// 48 = 0x30
    CDUnknownBlockType _entityQueryBlock;	// 56 = 0x38
}

+ (id)translatorForTransientMPModelClass:(Class)arg1;	// IMP=0x00600000002b03f0
+ (id)translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(void *)arg2;	// IMP=0x00600000002b03d5
+ (id)translatorForMPModelClass:(Class)arg1;	// IMP=0x00600000002b038a
+ (id)_translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(void *)arg2 create:(_Bool)arg3 transient:(_Bool)arg4;	// IMP=0x00600000002b009a
- (void).cxx_destruct;	// IMP=0x00000000002aba4d
@property(copy, nonatomic) CDUnknownBlockType entityQueryBlock; // @synthesize entityQueryBlock=_entityQueryBlock;
@property(copy, nonatomic) CDUnknownBlockType allowedItemPredicatesBlock; // @synthesize allowedItemPredicatesBlock=_allowedItemPredicatesBlock;
@property(readonly, nonatomic) void *entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(readonly, nonatomic) Class MPModelClass; // @synthesize MPModelClass=_MPModelClass;
- (vector_2194507e)_MLCorePropertiesForPropertySet:(id)arg1 withForeignPropertyBase:(void *)arg2;	// IMP=0x00000000002aac8c
- (id)_objectForPropertySet:(id)arg1 entity:(shared_ptr_27513921)arg2 baseTranslator:(id)arg3 prependKeyPath:(id)arg4 context:(id)arg5;	// IMP=0x00000000002aa888
- (id)_valueForKeyPath:(id)arg1 forEntity:(shared_ptr_27513921)arg2 context:(id)arg3;	// IMP=0x00000000002aa4ee
- (map_4ef4d36e)_propertyMapForKeyPath:(id)arg1 includePropertiesToSort:(_Bool)arg2;	// IMP=0x00000000002aa05a
- (void *)_propertyForKeyPath:(id)arg1;	// IMP=0x00000000002a9bc2
- (id)_propertyTranslatorForKeyPath:(id)arg1;	// IMP=0x00000000002a9a06
- (map_4ef4d36e)propertiesToFetchForPropertyKey:(id)arg1;	// IMP=0x00000000002a9738
- (Class)classForRelationshipKey:(id)arg1;	// IMP=0x00000000002a96d0
- (vector_05d2ab2a)MLCorePredicateForModelPropertyFilters:(id)arg1;	// IMP=0x00000000002a8b83
- (vector_9ebba6ab)MLCoreSortDescriptorsForModelSortDescriptors:(id)arg1;	// IMP=0x00000000002a811a
- (vector_2194507e)MLCorePropertiesForPropertySet:(id)arg1;	// IMP=0x00000000002a80f8
- (shared_ptr_889ae36a)propertiesQueryForPropertySet:(id)arg1 scopedContainers:(id)arg2 allowedItemIdentifiers:(id)arg3 view:(id)arg4;	// IMP=0x00000000002a7a1e
- (shared_ptr_e8455ceb)entityQueryForPropertySet:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3 view:(id)arg4;	// IMP=0x00000000002a632e
- (id)identifiersForEntity:(shared_ptr_27513921)arg1 context:(id)arg2;	// IMP=0x00000000002a6246
- (id)objectForPropertySet:(id)arg1 entity:(shared_ptr_27513921)arg2 context:(id)arg3;	// IMP=0x00000000002a612f
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(_Bool)arg3 usingForeignPropertyBase:(void *)arg4 relationshipValidationProperties:(const void *)arg5 isValidRelationshipHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002a5f88
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(_Bool)arg3 usingForeignPropertyBase:(void *)arg4;	// IMP=0x00000000002a5e6e
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 usingForeignPropertyBase:(void *)arg3;	// IMP=0x00000000002a5e56
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void *)arg2 propertiesToSort:(const void *)arg3 sortTransformer:(CDUnknownBlockType)arg4 filterTransformer:(CDUnknownBlockType)arg5 valueTransformer:(CDUnknownBlockType)arg6;	// IMP=0x00000000002a5b42
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void *)arg2 propertiesToSort:(const void *)arg3 sortTransformer:(CDUnknownBlockType)arg4 valueTransformer:(CDUnknownBlockType)arg5;	// IMP=0x00000000002a5b26
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void *)arg2 valueTransformer:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a5a2f
- (void)mapPropertyKey:(id)arg1 toMLProperty:(void *)arg2;	// IMP=0x00000000002a593b
- (void)mapIdentifierMLProperties:(const void *)arg1 identifierCreationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a583e

@end
