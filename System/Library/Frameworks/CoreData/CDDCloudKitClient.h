//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CDDCloudKitClient : NSObject
{
    _Bool _interrupted;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    NSXPCConnection *_connection;	// 16 = 0x10
}

- (void)handleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000185034
- (_Bool)_valid;	// IMP=0x000000000018501d
- (void)dealloc;	// IMP=0x0000000000184fa9
- (id)initWithMachServiceName:(id)arg1;	// IMP=0x0000000000184dbf

@end

