//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UTTypeRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTDynamicTypeRecord : UTTypeRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000146ce8
+ (id)_propertyClasses;	// IMP=0x0060000000146b6f
- (void).cxx_destruct;	// IMP=0x0000000000146e5d
- (id)identifier;	// IMP=0x0000000000146e47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000146df1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000146d4a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000146cf0
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000146bf0
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001466a3
- (id)_delegatePath;	// IMP=0x000000000014669b
- (id)_declaringBundleBookmark;	// IMP=0x0000000000146693
- (id)_localizedDescription;	// IMP=0x000000000014668b
- (_Bool)isChildOfTypeIdentifier:(id)arg1;	// IMP=0x00000000001465b6
- (id)childTypeIdentifiers;	// IMP=0x000000000014659d
- (id)parentTypeIdentifiers;	// IMP=0x000000000014652c
- (void)_LSRecord_resolve_pedigree;	// IMP=0x0000000000146511
- (id)pedigree;	// IMP=0x0000000000146500
- (id)pedigreeWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const CDStruct_3571af81 *)arg4;	// IMP=0x00000000001464bf
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x00000000001463e1
- (id)referenceURL;	// IMP=0x00000000001463d9
- (id)preferredTagOfClass:(id)arg1;	// IMP=0x00000000001463b9
- (id)tagSpecification;	// IMP=0x0000000000146344
- (id)declaration;	// IMP=0x0000000000146243
- (id)declaringBundleRecord;	// IMP=0x000000000014623b
- (_Bool)isCoreType;	// IMP=0x0000000000146233
- (_Bool)isActive;	// IMP=0x000000000014622b
- (_Bool)isImported;	// IMP=0x0000000000146223
- (_Bool)isExported;	// IMP=0x000000000014621b
- (_Bool)isInPublicDomain;	// IMP=0x0000000000146213
- (_Bool)isWildcard;	// IMP=0x000000000014620b
- (_Bool)isDeclared;	// IMP=0x0000000000146203
- (_Bool)isDynamic;	// IMP=0x00000000001461fb
- (id)version;	// IMP=0x00000000001461f3
- (id)_initWithContext:(struct LSContext *)arg1 dynamicUTI:(id)arg2;	// IMP=0x0000000000146159

@end

