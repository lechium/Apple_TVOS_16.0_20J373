//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSmartSiriVolumeManager;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSSmartSiriVolumeServiceProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcConnection;	// 16 = 0x10
    CSSmartSiriVolumeManager *_ssvManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000089f2b
@property(retain, nonatomic) CSSmartSiriVolumeManager *ssvManager; // @synthesize ssvManager=_ssvManager;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)setPermanentVolumeOffsetWithDirection:(_Bool)arg1;	// IMP=0x0010000000089e36
- (void)setSmartSiriVolumeDirection:(_Bool)arg1;	// IMP=0x0010000000089ccc
- (void)setSmartSiriVolumePercentage:(float)arg1;	// IMP=0x0010000000089b5f
- (void)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000898a3
- (void)setListenerDelegate:(id)arg1;	// IMP=0x001000000008988d
- (id)init;	// IMP=0x00100000000897dd

@end

