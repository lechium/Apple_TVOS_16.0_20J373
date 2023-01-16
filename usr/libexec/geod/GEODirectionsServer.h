//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEODirectionsRequester;

@interface GEODirectionsServer : GEOServer
{
    GEODirectionsRequester *_serviceRequester;	// 8 = 0x8
}

+ (id)identifier;	// IMP=0x0020000000015c28
- (void).cxx_destruct;	// IMP=0x001000000000a1fd
- (void)cancelWithRequest:(id)arg1;	// IMP=0x001000000000a0fc
- (void)startWithRequest:(id)arg1;	// IMP=0x0010000000009e00
@property(retain, nonatomic) GEODirectionsRequester *serviceRequester;
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000015c35

@end

