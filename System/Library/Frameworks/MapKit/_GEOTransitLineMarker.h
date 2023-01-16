//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitLineMarker : NSObject
{
    id <GEOTransitLine> _line;	// 8 = 0x8
    struct CLLocationCoordinate2D _locationHint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000115bec
- (id)artwork;	// IMP=0x0000000000115bd6
- (id)labelText;	// IMP=0x0000000000115b58
- (id)mapItemIdentifier;	// IMP=0x0000000000115a59
- (id)initWithGEOTransitLine:(id)arg1 locationHint:(struct CLLocationCoordinate2D)arg2;	// IMP=0x00000000001159d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

