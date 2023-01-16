//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListItemEntry
{
    _Bool _hasClones;	// 64 = 0x40
    _Bool _dataSourceCloned;	// 65 = 0x41
    _Bool _dataSourceMoved;	// 66 = 0x42
    _Bool _userRemoved;	// 67 = 0x43
    _Bool _userMoved;	// 68 = 0x44
    _Bool _userCloned;	// 69 = 0x45
    NSString *_itemIdentifier;	// 72 = 0x48
    MPSectionedIdentifierListItemEntry *_rootEntry;	// 80 = 0x50
    NSMutableArray *_clonedEntries;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000066adf
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2;	// IMP=0x0010000000066aca
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 generationPrefix:(id)arg3;	// IMP=0x001000000006698f
- (void).cxx_destruct;	// IMP=0x000000000006694f
@property(readonly, nonatomic, getter=isUserCloned) _Bool userCloned; // @synthesize userCloned=_userCloned;
@property(readonly, nonatomic, getter=isUserMoved) _Bool userMoved; // @synthesize userMoved=_userMoved;
@property(readonly, nonatomic, getter=isUserRemoved) _Bool userRemoved; // @synthesize userRemoved=_userRemoved;
@property(readonly, nonatomic, getter=isDataSourceMoved) _Bool dataSourceMoved; // @synthesize dataSourceMoved=_dataSourceMoved;
@property(readonly, nonatomic, getter=isDataSourceCloned) _Bool dataSourceCloned; // @synthesize dataSourceCloned=_dataSourceCloned;
@property(retain, nonatomic) NSMutableArray *clonedEntries; // @synthesize clonedEntries=_clonedEntries;
@property(readonly, nonatomic) _Bool hasClones; // @synthesize hasClones=_hasClones;
@property(nonatomic) __weak MPSectionedIdentifierListItemEntry *rootEntry; // @synthesize rootEntry=_rootEntry;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (long long)_generationNumber;	// IMP=0x00000000000667fd
- (void)prepareForDealloc;	// IMP=0x0000000000066793
- (id)newClonedEntry;	// IMP=0x0000000000066550
@property(readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestDataSourceClone;
@property(readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestUserClone;
@property(readonly, nonatomic) CDStruct_d4f770cf state;
@property(readonly, nonatomic, getter=isRemoved) _Bool removed;
- (void)setUserCloned;	// IMP=0x0000000000065f8d
- (void)setUserMoved;	// IMP=0x0000000000065f7c
- (void)setUserRemoved;	// IMP=0x0000000000065f6b
- (void)setDataSourceMoved;	// IMP=0x0000000000065f5a
- (void)setDataSourceCloned;	// IMP=0x0000000000065f49
- (_Bool)isDataSourceRemoved;	// IMP=0x0000000000065ed6
- (void)setDataSourceRemoved;	// IMP=0x0000000000065e63
- (id)stringRepresentation;	// IMP=0x0000000000065d4c
@property(readonly, nonatomic) long long entryType;
@property(readonly, copy) NSString *description;
- (id)_stateDumpObject;	// IMP=0x000000000006590f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000065801
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000656e1

// Remaining properties
@property(readonly, nonatomic) long long branchDepth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly) Class superclass;

@end

