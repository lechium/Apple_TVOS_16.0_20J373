//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOGeographicMetadataTileFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    int _tileStyle;	// 16 = 0x10
    GEOLocation *_location;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    NSArray *_tileDatas;	// 40 = 0x28
    NSDictionary *_resultURLs;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000012917cf
- (void)fetchMetadataWithResponseQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000001290189
- (void)reportCorrupt:(id)arg1;	// IMP=0x000000000128f3d3
- (id)initForTileStyle:(int)arg1 location:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000128f32b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

