//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSectionedIdentifierListItemEntry, MPSectionedIdentifierListTailEntry, NSMutableDictionary, NSString;
@protocol MPSectionedIdentifierListDataSource;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListHeadEntry
{
    _Bool _shuffledHead;	// 64 = 0x40
    NSMutableDictionary *_identifiersItemEntryMap;	// 72 = 0x48
    MPSectionedIdentifierListTailEntry *_tailEntry;	// 80 = 0x50
    MPSectionedIdentifierListItemEntry *_lastItemEntry;	// 88 = 0x58
    id <MPSectionedIdentifierListDataSource> _dataSource;	// 96 = 0x60
}

+ (id)headEntryWithSectionIdentifier:(id)arg1;	// IMP=0x0010000000065652
- (void).cxx_destruct;	// IMP=0x00000000000655ff
@property(nonatomic, getter=isShuffledHead) _Bool shuffledHead; // @synthesize shuffledHead=_shuffledHead;
@property(retain, nonatomic) id <MPSectionedIdentifierListDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MPSectionedIdentifierListItemEntry *lastItemEntry; // @synthesize lastItemEntry=_lastItemEntry;
@property(retain, nonatomic) MPSectionedIdentifierListTailEntry *tailEntry; // @synthesize tailEntry=_tailEntry;
@property(readonly, nonatomic) NSMutableDictionary *identifiersItemEntryMap; // @synthesize identifiersItemEntryMap=_identifiersItemEntryMap;
- (void)setBranchDepth:(long long)arg1;	// IMP=0x0000000000065509
- (id)nextEntries;	// IMP=0x0000000000065462
@property(readonly, nonatomic) long long entryType;
@property(readonly, copy) NSString *description;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000000652f7

// Remaining properties
@property(readonly, nonatomic) long long branchDepth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly) Class superclass;

@end

