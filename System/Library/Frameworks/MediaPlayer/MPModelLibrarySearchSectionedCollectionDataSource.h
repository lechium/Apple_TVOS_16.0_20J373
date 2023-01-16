//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibrarySearchRequest, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject
{
    NSArray *_resultContainers;	// 8 = 0x8
    MPModelLibrarySearchRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023e13e
@property(copy, nonatomic) MPModelLibrarySearchRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSArray *resultContainers; // @synthesize resultContainers=_resultContainers;
- (long long)searchWeightForIndexPath:(id)arg1;	// IMP=0x000000000023de01
- (_Bool)hasMoreResultsForSectionAtIndex:(long long)arg1;	// IMP=0x000000000023dc45
- (id)identifiersForItemAtIndexPath:(id)arg1;	// IMP=0x000000000023d960
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x000000000023d501
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x000000000023d312
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023d2aa
- (unsigned long long)numberOfSections;	// IMP=0x000000000023d294
- (id)initWithEntitiesQueryResultContainers:(id)arg1;	// IMP=0x000000000023d1f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

