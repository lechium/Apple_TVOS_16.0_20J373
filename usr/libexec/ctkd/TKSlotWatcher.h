//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection, TKHostTokenRegistry;

@interface TKSlotWatcher : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableArray *_slots;	// 16 = 0x10
    TKHostTokenRegistry *_registry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000c939
@property(readonly, nonatomic) TKHostTokenRegistry *registry; // @synthesize registry=_registry;
- (void)stop;	// IMP=0x001000000000c6ca
- (void)removeSlotWatch:(id)arg1;	// IMP=0x001000000000c55b
- (void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000c38a
- (void)dealloc;	// IMP=0x001000000000c330
- (void)startWithSlotServer:(id)arg1;	// IMP=0x001000000000bf05
@property(readonly) _Bool hasStarted;
- (id)initWithTokenRegistry:(id)arg1;	// IMP=0x001000000000be46

@end

