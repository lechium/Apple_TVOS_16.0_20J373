//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, CKOperationGroup, NSMutableSet, NSString;
@protocol OctagonStateString;

@interface CKKSScanLocalItemsOperation
{
    NSString<OctagonStateString> *_nextState;	// 8 = 0x8
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    CKOperationGroup *_ckoperationGroup;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    unsigned long long _recordsFound;	// 40 = 0x28
    unsigned long long _recordsAdded;	// 48 = 0x30
    unsigned long long _missingLocalItemsFound;	// 56 = 0x38
    unsigned long long _processedItems;	// 64 = 0x40
    NSMutableSet *_viewsWithNewCKKSEntries;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000be835
@property(retain) NSMutableSet *viewsWithNewCKKSEntries; // @synthesize viewsWithNewCKKSEntries=_viewsWithNewCKKSEntries;
@property unsigned long long processedItems; // @synthesize processedItems=_processedItems;
@property unsigned long long missingLocalItemsFound; // @synthesize missingLocalItemsFound=_missingLocalItemsFound;
@property unsigned long long recordsAdded; // @synthesize recordsAdded=_recordsAdded;
@property unsigned long long recordsFound; // @synthesize recordsFound=_recordsFound;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) CKOperationGroup *ckoperationGroup; // @synthesize ckoperationGroup=_ckoperationGroup;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (_Bool)areEquivalent:(struct SecDbItem *)arg1 ckksItem:(id)arg2 keyCache:(id)arg3;	// IMP=0x00100000000be129
- (void)main;	// IMP=0x00100000000bcefe
- (void)retriggerMissingMirrorEntries:(id)arg1 databaseProvider:(id)arg2;	// IMP=0x00100000000bcdf2
- (void)fixUUIDlessItemsInZone:(id)arg1 primaryKeys:(id)arg2 databaseProvider:(id)arg3;	// IMP=0x00100000000bcc1d
- (void)onboardItemsInView:(id)arg1 uuids:(id)arg2 itemClass:(id)arg3 databaseProvider:(id)arg4;	// IMP=0x00100000000bc90c
- (_Bool)onboardItemToCKKS:(struct SecDbItem *)arg1 viewState:(id)arg2 keyCache:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000bc51b
- (_Bool)executeQuery:(id)arg1 readWrite:(_Bool)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000000bc210
- (id)queryPredicatesForViewMapping:(id)arg1;	// IMP=0x00100000000bb63c
- (id)initWithDependencies:(id)arg1 intending:(id)arg2 errorState:(id)arg3 ckoperationGroup:(id)arg4;	// IMP=0x00100000000bb4f3
- (id)init;	// IMP=0x00100000000bb4e5

@end
