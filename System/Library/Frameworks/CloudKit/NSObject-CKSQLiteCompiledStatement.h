//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (CKSQLiteCompiledStatement)
+ (id)CKSQLiteClassName;	// IMP=0x00500000000bf99f
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x0010000000057f6a
- (id)cksqlcs_bindArchivedObject:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x00100000000969b7
- (id)cksqlcs_archivedObjectBindingValue:(id *)arg1;	// IMP=0x0010000000096930
- (id)cksqlcs_bindBlob:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x001000000009685c
- (const void *)cksqlcs_blobBindingValue:(unsigned long long *)arg1 destructor:(CDUnknownFunctionPointerType *)arg2 error:(id *)arg3;	// IMP=0x00100000000967d5
- (id)cksqlcs_bindText:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x00100000000966ff
- (void *)cksqlcs_textBindingValue:(int *)arg1 destructor:(CDUnknownFunctionPointerType *)arg2 error:(id *)arg3;	// IMP=0x0010000000096673
- (id)cksqlcs_bindDouble:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x00100000000965b1
- (double)cksqlcs_doubleBindingValue:(id *)arg1;	// IMP=0x0010000000096529
- (id)cksqlcs_bindInt64:(struct sqlite3_stmt *)arg1 index:(int)arg2 db:(id)arg3;	// IMP=0x0010000000096469
- (long long)cksqlcs_int64BindingValue:(id *)arg1;	// IMP=0x00100000000963e2
- (id)CKSingleLineDescription;	// IMP=0x00100000000a22e1
- (id)CKHashedDescription;	// IMP=0x00100000000a2265
- (id)_CKDescriptionWithExpansion:(_Bool)arg1;	// IMP=0x00100000000a2129
- (id)CKExpandedDescription;	// IMP=0x00100000000a2112
- (id)CKDescription;	// IMP=0x00100000000a20fe
- (id)CKPropertiesDescriptionStringFromProperties:(id)arg1;	// IMP=0x00100000000a1f5a
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00100000000a1f4d
- (id)CKPropertiesDescription;	// IMP=0x00100000000a1f40
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00100000000a3812
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000001a4930
- (id)CKObjectDescriptionRedact:(_Bool)arg1 avoidShortDescription:(_Bool)arg2;	// IMP=0x0010000000200957
- (id)CKObjectDescriptionRedact:(_Bool)arg1;	// IMP=0x0010000000200943
- (id)CKDescriptionRedact:(_Bool)arg1 avoidShortDescription:(_Bool)arg2;	// IMP=0x0010000000200877
- (id)CKRedactedDescription;	// IMP=0x001000000020085e
- (id)CKUnredactedDescription;	// IMP=0x0010000000200848
@end
