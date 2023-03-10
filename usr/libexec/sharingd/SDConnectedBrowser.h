//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SDStatusMonitor;
@protocol OS_dispatch_source;

@interface SDConnectedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    int _recentsCount;	// 12 = 0xc
    int _connectedCount;	// 16 = 0x10
    _Bool _sendNotification;	// 20 = 0x14
    NSDictionary *_servers;	// 24 = 0x18
    NSDictionary *_odiskServers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    SDStatusMonitor *_monitor;	// 48 = 0x30
    struct __CFBag *_airDropPeople;	// 56 = 0x38
}

+ (id)sharedBrowser;	// IMP=0x0040000000140839
- (void).cxx_destruct;	// IMP=0x0020000000141e84
- (void)stop;	// IMP=0x0010000000141de6
- (void)start;	// IMP=0x0010000000141cdc
- (void)volumesChanged:(id)arg1;	// IMP=0x0010000000141cc2
- (void)removeAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x0010000000141bf2
- (void)removeAirDropPersonInternal:(struct __SFNode *)arg1;	// IMP=0x0010000000141b3f
@property(readonly, copy) NSArray *airDropNodes;
- (void)addAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001419e5
- (void)buildNodesAndNotify:(_Bool)arg1;	// IMP=0x00100000001419b7
- (void)combineRecentAndConnectedNodes:(_Bool)arg1;	// IMP=0x00100000001413ad
- (id)connectedNodes;	// IMP=0x0010000000140c16
- (id)URLForRemounting:(id)arg1;	// IMP=0x0010000000140b64
- (_Bool)opticalDisk:(id)arg1;	// IMP=0x0010000000140ae8
- (void)setNodeModel:(struct __SFNode *)arg1 protocol:(id)arg2 url:(id)arg3;	// IMP=0x0010000000140ae2
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x0010000000140ad7
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x0010000000140acc
- (id)recentNodes;	// IMP=0x0010000000140a86
- (void)addToRecents:(id)arg1;	// IMP=0x0010000000140a80
- (void)browseAfterDelay:(double)arg1;	// IMP=0x0010000000140a60
- (void)postNotification;	// IMP=0x0010000000140a01
@property(readonly, copy) NSArray *odiskNodes;
@property(readonly, copy) NSArray *nodes;
- (void)setODiskServers:(id)arg1;	// IMP=0x0010000000140986
- (void)setServers:(id)arg1;	// IMP=0x0010000000140937
- (id)init;	// IMP=0x001000000014088e

@end

