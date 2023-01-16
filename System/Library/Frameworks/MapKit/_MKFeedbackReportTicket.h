//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceFeedbackReportTicket;

__attribute__((visibility("hidden")))
@interface _MKFeedbackReportTicket : NSObject
{
    id <GEOMapServiceFeedbackReportTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b0eaf
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;	// IMP=0x00000000000b0e83
- (void)submitWithCallbackQueue:(id)arg1 handler:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b0b44
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0b00
- (id)initWithFeedbackReportTicket:(id)arg1;	// IMP=0x00000000000b0a95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

