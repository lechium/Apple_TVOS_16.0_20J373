//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceCuratedCollectionTicket;

__attribute__((visibility("hidden")))
@interface _MKCuratedCollectionTicket : NSObject
{
    id <GEOMapServiceCuratedCollectionTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b28a8
- (void)cancel;	// IMP=0x00000000000b2892
- (void)submitWithCallbackQueue:(id)arg1 handler:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b265c
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b2618
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (id)initWithTicket:(id)arg1;	// IMP=0x00000000000b2597

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
