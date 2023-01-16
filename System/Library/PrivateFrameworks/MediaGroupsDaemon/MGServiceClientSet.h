//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface MGServiceClientSet : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_clients;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f300
@property(copy, nonatomic) NSMapTable *clients; // @synthesize clients=_clients;
- (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f105
- (void)removeClientService:(id)arg1;	// IMP=0x000000000000f00b
- (void)addClientService:(id)arg1;	// IMP=0x000000000000ef0c
- (id)serviceClientForXPCConnection:(id)arg1;	// IMP=0x000000000000ed8e
- (id)init;	// IMP=0x000000000000eced

@end

