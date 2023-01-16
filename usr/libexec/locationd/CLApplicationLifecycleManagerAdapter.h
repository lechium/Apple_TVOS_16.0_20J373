//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLApplicationLifecycleManagerAdapter : CLIntersiloService
{
    void *_manager;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x00200000005b31b2
+ (id)getSilo;	// IMP=0x00100000005b3156
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005b313d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005b30e0
@property(nonatomic) void *manager; // @synthesize manager=_manager;
- (void)launchDaemon:(id)arg1;	// IMP=0x00100000005b3d43
- (void)launchApplication:(id)arg1 requiringAuthForServiceMask:(unsigned long long)arg2;	// IMP=0x00100000005b3420
- (void)endService;	// IMP=0x00100000005b33d6
- (void)beginService;	// IMP=0x00100000005b3377
- (id)init;	// IMP=0x00100000005b333a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

