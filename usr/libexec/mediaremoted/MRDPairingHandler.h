//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRDPairingHandler : NSObject
{
    NSMutableDictionary *_handlers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001019ad
@property(readonly) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void)performHandlerForRouteUID:(id)arg1 passcode:(id)arg2;	// IMP=0x00100000001018f9
- (void)addHandlerForRouteUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000101887
- (id)init;	// IMP=0x0010000000101831

@end

