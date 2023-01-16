//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MKPolygonGeoRegion : NSObject
{
    struct CLLocationCoordinate2D *_polygon;	// 8 = 0x8
    unsigned long long _vertexCount;	// 16 = 0x10
}

- (_Bool)_loadWithJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010d0e7
- (void)dealloc;	// IMP=0x000000000010d0ad
- (_Bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D)arg1;	// IMP=0x000000000010d098
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010d003

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

