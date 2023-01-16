//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, NSRelationshipDescription, NSString;

__attribute__((visibility("hidden")))
@interface PFMirroredManyToManyRelationship
{
    unsigned long long _type;	// 8 = 0x8
    NSRelationshipDescription *_relationshipDescription;	// 16 = 0x10
    NSRelationshipDescription *_inverseRelationshipDescription;	// 24 = 0x18
    CKRecordID *_manyToManyRecordID;	// 32 = 0x20
    NSString *_manyToManyRecordType;	// 40 = 0x28
    CKRecordID *_ckRecordID;	// 48 = 0x30
    CKRecordID *_relatedCKRecordID;	// 56 = 0x38
}

+ (_Bool)_isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2;	// IMP=0x006000000020e401
- (_Bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000020dd22
- (id)description;	// IMP=0x000000000020dc09
- (void)dealloc;	// IMP=0x000000000020db56
- (id)initWithRecordID:(id)arg1 recordType:(id)arg2 managedObjectModel:(id)arg3 andType:(unsigned long long)arg4;	// IMP=0x000000000020d615

@end

