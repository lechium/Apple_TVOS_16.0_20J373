//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface _GEOFailedTicket : GEOAbstractMapServiceTicket
{
    NSError *_error;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000074610d
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x0000000000745ed4
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x0000000000745c9d
- (id)initWithError:(id)arg1 traits:(id)arg2;	// IMP=0x0000000000745c12

@end

