//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOMapRequest.h"

@class GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapTransitGeometryFinder : GEOMapRequest
{
    GEOMapTileFinder *_tileFinder;	// 40 = 0x28
    unsigned long long _transitID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000101be36
- (void)findTransitGeometryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000101b927
- (void)cancel;	// IMP=0x000000000101b8c0
- (id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;	// IMP=0x000000000101b7cb

@end
