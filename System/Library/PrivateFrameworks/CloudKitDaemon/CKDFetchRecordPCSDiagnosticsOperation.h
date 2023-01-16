//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation
{
    NSArray *_zoneIDs;	// 8 = 0x8
    NSMutableArray *_fetchedZones;	// 16 = 0x10
    NSMutableArray *_mutableCorruptRecords;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006b694
@property(retain, nonatomic) NSMutableArray *mutableCorruptRecords; // @synthesize mutableCorruptRecords=_mutableCorruptRecords;
@property(retain, nonatomic) NSMutableArray *fetchedZones; // @synthesize fetchedZones=_fetchedZones;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000006b5f6
- (void)main;	// IMP=0x000000000006b427
@property(readonly, nonatomic) NSArray *corruptRecords;
- (void)_fetchZones;	// IMP=0x000000000006af4f
- (void)_checkRecordPCSForAllZones;	// IMP=0x000000000006a89c
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x000000000006a83a
- (_Bool)makeStateTransition;	// IMP=0x000000000006a769
- (id)activityCreate;	// IMP=0x000000000006a740
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000006a671

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

