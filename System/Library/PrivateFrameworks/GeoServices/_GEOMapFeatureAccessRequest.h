//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileLoader, NSMutableArray, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface _GEOMapFeatureAccessRequest : NSObject
{
    GEOTileLoader *_tileLoader;	// 8 = 0x8
    NSMutableArray *_clientIdentifiers;	// 16 = 0x10
    geo_isolater *_clientIdentifiersIsolater;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000110d0ba
@property(readonly, nonatomic) GEOTileLoader *tileLoader; // @synthesize tileLoader=_tileLoader;
- (void)cancel;	// IMP=0x000000000110ce86
- (void)addTileRequest:(id)arg1;	// IMP=0x000000000110cdd9
- (id)initWithTileLoader:(id)arg1;	// IMP=0x000000000110cd29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
