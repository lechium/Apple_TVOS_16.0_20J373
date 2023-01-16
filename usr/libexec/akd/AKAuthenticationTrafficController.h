//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthenticationSurrogateManager, AKExpiringCache, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AKAuthenticationTrafficController : NSObject
{
    NSMutableArray *_pendingTrafficRequests;	// 8 = 0x8
    NSMutableDictionary *_authenticatingApps;	// 16 = 0x10
    NSMutableDictionary *_authenticatingDaemons;	// 24 = 0x18
    AKExpiringCache *_expiringCache;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clearanceQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_trafficQueue;	// 48 = 0x30
    AKAuthenticationSurrogateManager *_surrogateManager;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x004000000008ee73
- (void).cxx_destruct;	// IMP=0x0020000000090576
@property(retain, nonatomic) AKAuthenticationSurrogateManager *surrogateManager; // @synthesize surrogateManager=_surrogateManager;
- (void)flushCache;	// IMP=0x00100000000904df
- (void)_addCachedPasswordInContext:(id)arg1;	// IMP=0x0010000000090395
- (void)_updateContext:(id)arg1 withPassword:(id)arg2 forAppleID:(id)arg3;	// IMP=0x0010000000090248
- (void)_tq_invokeTrafficRequest:(id)arg1;	// IMP=0x001000000008ffc3
- (void)endAuthenticationForAppleID:(id)arg1 password:(id)arg2 error:(id)arg3 context:(id)arg4 client:(id)arg5 clearanceHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008f953
- (_Bool)_hasValuesInMap:(id)arg1;	// IMP=0x001000000008f861
- (_Bool)_hasActiveAppAuths;	// IMP=0x001000000008f84b
- (_Bool)_hasActiveDaemonAuths;	// IMP=0x001000000008f835
- (_Bool)_shouldClearRequest:(id)arg1 withClient:(id)arg2;	// IMP=0x001000000008f26d
- (void)beginAuthenticationWithContext:(id)arg1 client:(id)arg2 clearanceHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008efa6
- (id)init;	// IMP=0x001000000008eec8

@end

