//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, NSError, NSString;
@protocol GEOMapServiceSpatialPlaceLookupTicket;

__attribute__((visibility("hidden")))
@interface _MKSpatialPlaceLookupTicket : NSObject
{
    id <GEOMapServiceSpatialPlaceLookupTicket> _spatialPlaceLookupTicket;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    GEOMapRegion *_resultBoundingRegion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b1b95
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00000000000b187f
- (void)cancel;	// IMP=0x00000000000b1869
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
- (id)traits;	// IMP=0x00000000000b1845
- (id)initWithTicket:(id)arg1;	// IMP=0x00000000000b17da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

