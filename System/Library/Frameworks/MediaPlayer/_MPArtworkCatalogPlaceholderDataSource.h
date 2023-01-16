//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

__attribute__((visibility("hidden")))
@interface _MPArtworkCatalogPlaceholderDataSource : NSObject
{
    NSCache *_fallbackCache;	// 8 = 0x8
}

+ (id)sharedDataSource;	// IMP=0x00100000000b6d4b
- (void).cxx_destruct;	// IMP=0x00000000000b6a49
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000b6a43
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000000b6976
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b6793
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000000b66b6
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000000b6600
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000000b65f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

