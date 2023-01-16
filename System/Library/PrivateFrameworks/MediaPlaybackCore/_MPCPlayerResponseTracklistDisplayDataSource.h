//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedCollection, NSArray, NSDictionary, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerResponseTracklistDisplayDataSource : NSObject
{
    MPSectionedCollection *_items;	// 8 = 0x8
    NSIndexPath *_playingItemIndexPath;	// 16 = 0x10
    NSArray *_sections;	// 24 = 0x18
    NSDictionary *_sectionRanges;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000111299
@property(readonly, nonatomic) NSDictionary *sectionRanges; // @synthesize sectionRanges=_sectionRanges;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath; // @synthesize playingItemIndexPath=_playingItemIndexPath;
@property(readonly, nonatomic) MPSectionedCollection *items; // @synthesize items=_items;
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x000000000011119f
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x00000000001110aa
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011101f
- (unsigned long long)numberOfSections;	// IMP=0x0000000000110fa4
- (id)displayIndexPathForStructuredIndexPath:(id)arg1;	// IMP=0x00000000001109ea
- (id)structuredIndexPathForDisplayIndexPath:(id)arg1;	// IMP=0x00000000001106dc
- (id)initWithTracklistItems:(id)arg1 playingItemIndexPath:(id)arg2;	// IMP=0x000000000010fdb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
