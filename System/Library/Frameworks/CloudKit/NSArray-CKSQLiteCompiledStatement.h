//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (CKSQLiteCompiledStatement)
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x002000000005804d
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00200000000a28b0
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00200000000a3818
- (id)CKShuffledArray;	// IMP=0x00200000000a42ac
- (id)CKComponentsAndSubcomponentsJoinedByString:(id)arg1;	// IMP=0x00200000000a4091
- (id)CKFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000011e8f0
- (_Bool)CKContains:(CDUnknownBlockType)arg1;	// IMP=0x002000000011e830
- (id)CKFilter:(CDUnknownBlockType)arg1;	// IMP=0x002000000011e683
- (id)_CKReduceIntoDictionary:(_Bool)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x002000000011e377
- (id)CKCompactReduceIntoDictionary:(CDUnknownBlockType)arg1;	// IMP=0x002000000011e35d
- (id)CKReduceIntoDictionary:(CDUnknownBlockType)arg1;	// IMP=0x002000000011e346
- (id)CKFlatMap:(CDUnknownBlockType)arg1;	// IMP=0x002000000011e184
- (id)CKCompactMapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x002000000011df34
- (id)CKCompactMap:(CDUnknownBlockType)arg1;	// IMP=0x002000000011dd72
- (id)CKMapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x002000000011db30
- (id)CKMapWithIndex:(CDUnknownBlockType)arg1;	// IMP=0x002000000011da17
- (id)CKMap:(CDUnknownBlockType)arg1;	// IMP=0x002000000011d854

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

