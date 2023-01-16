//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;
@protocol VNPersonsModelDataDelegate;

__attribute__((visibility("hidden")))
@interface VNPersonsModelData : NSObject
{
    unsigned long long _maximumIdentities;	// 8 = 0x8
    unsigned long long _faceprintRequestRevision;	// 16 = 0x10
    NSMutableArray *_personUniqueIdentifiers;	// 24 = 0x18
    NSMutableDictionary *_personUniqueIdentifierToSerialNumberMapping;	// 32 = 0x20
    NSMutableDictionary *_serialNumberToFaceObservationsMapping;	// 40 = 0x28
    NSMutableIndexSet *_availablePersonSerialNumbers;	// 48 = 0x30
    NSDate *_lastModificationDate;	// 56 = 0x38
    id <VNPersonsModelDataDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000028e204
@property(readonly, nonatomic) unsigned long long faceprintRequestRevision; // @synthesize faceprintRequestRevision=_faceprintRequestRevision;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(nonatomic) __weak id <VNPersonsModelDataDelegate> delegate; // @synthesize delegate=_delegate;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;	// IMP=0x000000000028e153
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;	// IMP=0x000000000028e0fb
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000028e0e5
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;	// IMP=0x000000000028e0cf
- (unsigned long long)faceModelPersonsCount;	// IMP=0x000000000028e0b9
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;	// IMP=0x000000000028e043
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;	// IMP=0x000000000028dfe8
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;	// IMP=0x000000000028dfcf
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;	// IMP=0x000000000028dfa6
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;	// IMP=0x000000000028df90
- (_Bool)removePersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000028df7b
- (_Bool)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000028df19
- (_Bool)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000028de61
- (_Bool)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000028dcaf
- (id)_accessToMutableFaceObservationsForPersonAtIndex:(unsigned long long)arg1;	// IMP=0x000000000028dc02
- (void)_removeExistingFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2;	// IMP=0x000000000028db6b
- (void)_removeExistingFaceObservations:(id)arg1 fromIdentityWithSerialNumber:(id)arg2;	// IMP=0x000000000028da98
- (void)_removePersonWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000028d951
- (void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)arg1;	// IMP=0x000000000028d8d0
- (_Bool)_addUniqueFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000028d6d8
- (id)_uniqueFaceObservationsWithRegistrationState:(_Bool)arg1 forFaceObservations:(id)arg2 withExpectedFaceprintRequestRevision:(unsigned long long)arg3 ofPersonWithUniqueIdentifier:(id)arg4 error:(id *)arg5;	// IMP=0x000000000028d1f8
- (id)_requestNewIdentitySerialNumberAndReturnError:(id *)arg1;	// IMP=0x000000000028d0bc
- (void)_modelWasModified;	// IMP=0x000000000028d044
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000028cee7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

