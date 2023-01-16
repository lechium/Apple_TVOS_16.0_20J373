//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceSearchFieldPlaceholderTicket;

__attribute__((visibility("hidden")))
@interface _MKSearchFieldPlaceholderTicket : NSObject
{
    id <GEOMapServiceSearchFieldPlaceholderTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b1537
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;	// IMP=0x00000000000b150b
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b1281
- (id)initWithTicket:(id)arg1;	// IMP=0x00000000000b1203

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
