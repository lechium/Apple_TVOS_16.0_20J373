//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UTTypeRecord.h"

@class LSBundleRecord;

__attribute__((visibility("hidden")))
@interface _UTDeclaredTypeRecord : UTTypeRecord
{
    LSBundleRecord *_weakDeclaringBundleRecord;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001460d0
+ (id)_propertyClasses;	// IMP=0x0060000000145f31
- (void).cxx_destruct;	// IMP=0x0000000000146148
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001460d8
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000146002
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000145e99
- (void)_LSRecord_resolve__delegatePath;	// IMP=0x0000000000145e7e
- (id)_delegatePath;	// IMP=0x0000000000145e6d
- (id)_delegatePathWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000145d88
- (void)_LSRecord_resolve__declaringBundleBookmark;	// IMP=0x0000000000145d6d
- (id)_declaringBundleBookmark;	// IMP=0x0000000000145d5c
- (id)_declaringBundleBookmarkWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000145ced
- (void)_LSRecord_resolve__localizedDescription;	// IMP=0x0000000000145cd2
- (id)_localizedDescription;	// IMP=0x0000000000145cc1
- (id)_localizedDescriptionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000145c70
- (void)_LSRecord_resolve_childTypeIdentifiers;	// IMP=0x0000000000145c55
- (id)childTypeIdentifiers;	// IMP=0x0000000000145c44
- (id)childTypeIdentifiersWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000145aec
- (void)_LSRecord_resolve_parentTypeIdentifiers;	// IMP=0x0000000000145ad1
- (id)parentTypeIdentifiers;	// IMP=0x0000000000145ac0
- (id)parentTypeIdentifiersWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000145968
- (void)_LSRecord_resolve_pedigree;	// IMP=0x000000000014594d
- (id)pedigree;	// IMP=0x000000000014593c
- (id)pedigreeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000145900
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x0000000000145720
- (void)_LSRecord_resolve_referenceURL;	// IMP=0x0000000000145705
- (id)referenceURL;	// IMP=0x00000000001456f4
- (id)referenceURLWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000014567b
- (void)_LSRecord_resolve_tagSpecification;	// IMP=0x0000000000145660
- (id)tagSpecification;	// IMP=0x000000000014564f
- (id)tagSpecificationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x000000000014534e
- (void)_LSRecord_resolve_declaration;	// IMP=0x0000000000145333
- (id)declaration;	// IMP=0x0000000000145322
- (id)declarationWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000144f20
- (id)declaringBundleRecord;	// IMP=0x0000000000144edd
- (_Bool)isCoreType;	// IMP=0x0000000000144ec4
- (_Bool)isActive;	// IMP=0x0000000000144eaf
- (_Bool)isImported;	// IMP=0x0000000000144e97
- (_Bool)isExported;	// IMP=0x0000000000144e7e
- (_Bool)isInPublicDomain;	// IMP=0x0000000000144e66
- (_Bool)isWildcard;	// IMP=0x0000000000144e4d
- (_Bool)isDeclared;	// IMP=0x0000000000144e45
- (_Bool)isDynamic;	// IMP=0x0000000000144e3d
- (void)_LSRecord_resolve_version;	// IMP=0x0000000000144e22
- (id)version;	// IMP=0x0000000000144e11
- (id)versionWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000144dd9
- (void)_LSRecord_resolve_identifier;	// IMP=0x0000000000144dbe
- (id)identifier;	// IMP=0x0000000000144dad
- (id)identifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000144d78
- (void)_enumerateRelatedTypeStructuresWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000144c36
- (void)_LSRecord_resolve__declaringBundleRecord;	// IMP=0x0000000000144c1b
@property(readonly) LSBundleRecord *_declaringBundleRecord;
- (id)_declaringBundleRecordWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000144a3b
- (void)_LSRecord_resolve__rawFlags;	// IMP=0x0000000000144a29
@property(readonly) unsigned int _rawFlags;
- (unsigned int)_rawFlagsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x0000000000144a0e

@end

