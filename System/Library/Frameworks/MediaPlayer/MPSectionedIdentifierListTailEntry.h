//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSectionedIdentifierListHeadEntry, NSString;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListTailEntry
{
    MPSectionedIdentifierListHeadEntry *_sectionHeadEntry;	// 64 = 0x40
}

+ (id)tailEntryWithSectionHeadEntry:(id)arg1;	// IMP=0x001000000006508c
- (void).cxx_destruct;	// IMP=0x00000000000652e6
@property(nonatomic) __weak MPSectionedIdentifierListHeadEntry *sectionHeadEntry; // @synthesize sectionHeadEntry=_sectionHeadEntry;
- (id)previousEntry;	// IMP=0x000000000006515f
@property(readonly, nonatomic) long long entryType;

// Remaining properties
@property(readonly, nonatomic) long long branchDepth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly) Class superclass;

@end

