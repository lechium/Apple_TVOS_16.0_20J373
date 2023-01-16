//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOPlaceDataLocalProxy, NSMapTable, geo_isolater;

@interface GEOPlaceDataServer : GEOServer
{
    geo_isolater *_peerToRequestUUIDIsolater;	// 8 = 0x8
    NSMapTable *_peerToRequestUUID;	// 16 = 0x10
    GEOPlaceDataLocalProxy *_placeDataProxy;	// 24 = 0x18
}

+ (unsigned long long)launchMode;	// IMP=0x00200000000169b0
+ (id)identifier;	// IMP=0x00100000000169a3
- (void).cxx_destruct;	// IMP=0x001000000000354d
- (void)clearCacheWithRequest:(id)arg1;	// IMP=0x0010000000003530
- (void)shrinkBySizeSyncWithRequest:(id)arg1;	// IMP=0x001000000000347f
- (void)shrinkBySizeWithRequest:(id)arg1;	// IMP=0x0010000000003369
- (void)calculateFreeableSpaceSyncWithRequest:(id)arg1;	// IMP=0x00100000000032ce
- (void)calculateFreeableSpaceWithRequest:(id)arg1;	// IMP=0x00100000000031cc
- (void)cancelPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x00100000000030cd
- (void)performPlaceDataRequestWithRequest:(id)arg1;	// IMP=0x0010000000002b27
- (void)preservePlaceDataWithRequest:(id)arg1;	// IMP=0x0010000000002957
- (void)fetchAllCacheEntriesWithRequest:(id)arg1;	// IMP=0x0010000000002785
- (void)requestPhoneNumbersWithRequest:(id)arg1;	// IMP=0x00100000000020ca
- (void)requestMUIDsWithRequest:(id)arg1;	// IMP=0x0010000000001c81
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000000192d
- (void)_removeRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x001000000000180b
- (void)_addRequestUUID:(id)arg1 forPeer:(id)arg2;	// IMP=0x00100000000016a0
- (id)initWithDaemon:(id)arg1 proxy:(id)arg2;	// IMP=0x0010000000001585
- (id)initWithDaemon:(id)arg1;	// IMP=0x0010000000001504
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00100000000169bb

@end

