//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWPHContext : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_xpc_object> *_request;	// 16 = 0x10
    NSObject<OS_xpc_object> *_reply;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004d5510
@property(retain) NSObject<OS_xpc_object> *reply; // @synthesize reply=_reply;
@property(retain) NSObject<OS_xpc_object> *request; // @synthesize request=_request;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) int pid;
- (id)initWithRequest:(id)arg1 onConnection:(id)arg2;	// IMP=0x00000000004d4e60

@end
