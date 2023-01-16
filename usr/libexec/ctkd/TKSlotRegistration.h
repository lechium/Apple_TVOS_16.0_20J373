//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint, TKSlotServer;
@protocol OS_os_transaction;

@interface TKSlotRegistration : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    TKSlotServer *_server;	// 16 = 0x10
    NSString *_slotName;	// 24 = 0x18
    NSString *_slotType;	// 32 = 0x20
    NSXPCListenerEndpoint *_endpoint;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
}

+ (_Bool)handleConnection:(id)arg1 server:(id)arg2;	// IMP=0x002000000000cd17
- (void).cxx_destruct;	// IMP=0x002000000000d29f
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSString *slotType; // @synthesize slotType=_slotType;
@property(copy, nonatomic) NSString *slotName; // @synthesize slotName=_slotName;
- (void)addSlotWithEndpoint:(id)arg1 name:(id)arg2 type:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000cde1
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x001000000000cc85

@end

